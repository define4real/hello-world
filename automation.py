#!python3
# -*- coding:utf-8 -*-
import sys
import time
import uiautomation as auto
import win32api
import win32con
import win32gui
import time
import ctypes


def print_head(head):
    out_str = ""
    for x in head:
        out_str += x
        out_str += "\t"
    print("header=")
    print(out_str)


def print_table(table):
    out_str = ""
    for line in table:
        for value in line:
            out_str += value
            out_str += "\t"
        out_str += "\n"
    print("data=")
    print(out_str)


def print_data(head_list, data_list):
    print_head(head_list)
    print_table(data_list)


def check_empty_row(value):
    if len(value) == 0:
        return True
    for x in value:
        if x != "":
            return False
    return True


g_h_count = 0


def check_h_scroll_end(module, hwnd):
    print("check_h_scroll_end hwnd=%x", hwnd)
    value_before = module.GetScrollPos(hwnd, 1)
    time.sleep(0.5)
    print("check_h_scroll_end value_before=", value_before)
    win32api.SendMessage(hwnd, win32con.WM_HSCROLL, win32con.SB_PAGERIGHT, None)
    time.sleep(0.5)
    value_after = module.GetScrollPos(hwnd, 1)
    print("check_h_scroll_end value_after=", value_after)
    # if value_before == value_after:
    global g_h_count
    g_h_count += 1
    if g_h_count >= 3:
        print("check_h_scroll_end true")
        return True
    return False


def check_v_scroll_end(tt):

    print("check_v_scroll v_hwnd=", hex(tt.v_hwnd))
    win32api.SendMessage(tt.v_hwnd, win32con.WM_VSCROLL, win32con.SB_PAGEDOWN, None)
    time.sleep(0.5)

    # global g_hcount
    # g_hcount += 1
    # if g_hcount >= 1:
    #     print("check_h_scroll_end true")
    #     return True
    #
    # if tt.is_v_scroll_end:
    #     print("xxxxx end")
    #     return True

    if not tt.last_element or not tt.table_element:
        return False

    last_node = tt.table_element.GetLastChildControl()
    v1 = last_node.GetLegacyIAccessiblePattern().Value
    v2 = tt.last_element.GetLegacyIAccessiblePattern().Value
    if last_node.Name == tt.last_element.Name and v1 == v2 and\
            last_node.ControlTypeName == tt.last_element.ControlTypeName:
        return True

    # value_after = tt.module.GetScrollPos(tt.hwnd, 1)
    # if tt.first_add_line_count and tt.first_add_line_count > tt.add_line_count:
    #    return True

    return False


def scroll_to_top(hwnd):
    win32api.SendMessage(hwnd, win32con.WM_VSCROLL, win32con.SB_TOP, None)
    time.sleep(0.05)


def scroll_to_left(hwnd):
    win32api.SendMessage(hwnd, win32con.WM_HSCROLL, win32con.SB_LEFT, None)
    time.sleep(0.05)


def scroll_to_right(hwnd):
    win32api.SendMessage(hwnd, win32con.WM_HSCROLL, win32con.SB_RIGHT, None)
    time.sleep(0.05)


def scroll_to_bottom(hwnd):
    win32api.SendMessage(hwnd, win32con.WM_VSCROLL, win32con.SB_BOTTOM, None)
    time.sleep(0.05)


def scroll_to_right_page(hwnd):
    win32api.SendMessage(hwnd, win32con.WM_HSCROLL, win32con.SB_PAGERIGHT, None)
    time.sleep(0.05)


def scroll_to_bottom_page(hwnd):
    win32api.SendMessage(hwnd, win32con.WM_VSCROLL, win32con.SB_PAGEDOWN, None)
    time.sleep(0.05)


class GetTableTest:
    def __init__(self, hwnd=None, title_name=None, table_name=None):
        self.module = ctypes.windll.LoadLibrary("c:\\Windows\\system32\\user32.dll")
        self.head_text_list = []
        self.head_x_list = []
        self.exclude_head_x_list = []  # 冻结列的表头x
        self.scroll_count = 0
        self.add_col_count = 0
        self.page_line_count = 0
        self.h_scroll_count = 0
        self.v_scroll_count = 0
        self.data_list = []
        self.hwnd = hwnd
        self.table_element = None
        self.first_element = None
        self.last_element = None
        self.last_element_x = 0
        self.last_header_text = None
        self.last_header_element = None
        self.is_h_scroll_end = False
        self.is_v_scroll_end = False
        self.skip_first_col_list = []
        self.skip_first_line_flag = 0
        self.first_line_same_with_header_flag = 0
        self.h_hwnd = None
        self.v_hwnd = None
        self.rect = (0, 0, 0, 0)
        self.title_name = title_name
        self.table_name = table_name
        self.header_count = 0  # 水平滚动之后新出现的header
        self.header_use_name_or_value_flag = -1  # 默认用name

        # while里面的临时变量
        self.line_num = 0
        self.line_child = None
        self.cell_child = None
        self.find_item = False
        self.tmp_list = []
        self.is_first_span_col = True
        self.check_h_scroll_end = True

    def init_values(self):
        i = 0
        while i < 100:
            self.skip_first_col_list.append(0)
            i += 1

        if not self.table_element:
            if self.hwnd:
                self.table_element = auto.ControlFromHandle(self.hwnd)
            elif self.title_name and self.table_name:
                win = auto.WindowControl(searchDepth=1, Name=self.title_name)
                self.table_element = win.TableControl(Name=self.table_name)
                self.hwnd = self.table_element.NativeWindowHandle
            auto.LogControl(self.table_element)
            self.h_hwnd = self.hwnd
            self.v_hwnd = self.hwnd
            self.rect = win32gui.GetWindowRect(self.hwnd)
            self.check_scroll_hwnd()

    def check_scroll_hwnd(self):
        if not self.table_element:
            return
        child = self.table_element.GetFirstChildControl()
        count = 0
        scroll_count = 0
        while child and count < 10:
            count += 1
            if child.ControlTypeName == "ScrollBarControl":
                scroll_count += 1
                if child.NativeWindowHandle and child.BoundingRectangle.left > (self.rect[0] + self.rect[2]) / 2:
                    self.v_hwnd = child.NativeWindowHandle
                    print("find v_hwnd=", hex(self.v_hwnd))
                if child.NativeWindowHandle and child.BoundingRectangle.top > (self.rect[1] + self.rect[3]) / 2:
                    self.h_hwnd = child.NativeWindowHandle
                    print("find h_hwnd=", hex(self.h_hwnd))
                if scroll_count == 2:
                    break
            child = child.GetNextSiblingControl()

    def skip_scroll_first_line(self, tmp_list):
        if self.v_scroll_count > 0:
            length = len(self.tmp_list)
            if len(self.data_list[-1]) < length:
                return False
            for i in range(0, length):
                if self.data_list[-1][i] != tmp_list[i]:
                    return False
            return True
        return False

    def check_first_same_to_end(self, tmp_list, line_num):
        if self.v_scroll_count == 0 or line_num != 1:
            return False
        if len(self.data_list) == 0 or len(self.data_list) <= self.page_line_count:
            return False
        
        col = len(tmp_list)
        last_line = []
        print("len(self.data_list)", len(self.data_list))
        # print("start check_first_same_to_end")
        # print("zz col=",col)
        print("tmp_list=", tmp_list)
        for x in range(-self.page_line_count, 0, 1):
            last_line = self.data_list[x]
            if last_line == tmp_list:
                return True
            # print("tmp_list=",tmp_list)
            print("last_line=", last_line)
            # print("zz col=",col)
            # for i in range(0, col):
            #     if last_linex[i] != tmp_list[i]:
            #         break
        print("tmp_list=", tmp_list)
        print("last_line=", last_line)
        print("col=", col)
        return False    

    def add_data_to_list(self, tmp_list, line_num):
        if len(tmp_list) <= 0:
            return
            # if self.check_first_same_to_end(tmp_list, line_num):
            #     self.is_v_scroll_end = True
            #     print("add_data_to_list ============ end")
            #     return
            # print("line_num=",line_num)
            # print("self.add_line_count=",self.add_line_count)

        add_flag = True
        if self.v_scroll_count > 0 and self.skip_first_line_flag == 0 and \
                self.skip_scroll_first_line(tmp_list):
            add_flag = False

        self.skip_first_line_flag = 1

        if add_flag:
            if self.h_scroll_count > 0:
                self.data_list[line_num - self.page_line_count - 1] += tmp_list
            else:
                self.data_list.append(tmp_list)

    def remove_end_line_data(self):
        if len(self.data_list) == 0 or \
                len(self.data_list) <= self.page_line_count:
            return
        last_line = self.data_list[-self.page_line_count - 1]
        total_count = len(self.data_list)
        col = len(last_line)
        if col == 0:
            return
        # target_index = -1

        print("total_count=", total_count)
        print("a page count=", self.page_line_count)
        print("col=", col)
        print("last_line=", last_line)
        for x in range(0, self.page_line_count):
            line = self.data_list[total_count - x - 1]
            col2 = len(line)
            print("remove_end_line_data i=", x)
            print("last_line=", last_line)
            if col != col2:
                print("col2=", col2)
                print("!!!! remove_end_line_data not equal col num.")
                print("line=", line)
                return

            if last_line == line:
                # target_index = x
                print("x=", x)  # 找到完全相同的行,md明天再写
                print("应该删除从后面的index第【" + str(-x - 1) + "】开始,到" + str(-self.page_line_count))
                del data_list[-x - 1:-self.page_line_count]
                return

    def header_use_name_or_value(self, cell_child):
        if not cell_child:
            return
        next = cell_child.GetNextSiblingControl()
        if not next:
            return

        value = next.GetLegacyIAccessiblePattern().Value
        if value != "":
            print("use value")
            self.header_use_name_or_value_flag = 1
        else:
            print("use name")

    # 需要跳过冻结的列，和跨越滚动的首尾列
    def get_header_info(self, cell_child):
        # if cellChild.ControlTypeName == "HeaderControl" and self.v_scroll_count == 0:

        if self.v_scroll_count != 0:
            return

        if cell_child.ControlTypeName != "HeaderControl" and cell_child.ControlTypeName != "ListControl":
            return

        if self.header_use_name_or_value_flag == -1:
            self.header_use_name_or_value_flag = 0
            self.header_use_name_or_value(cell_child)

        self.last_header_element = cell_child

        if self.header_use_name_or_value_flag == 1:
            head_text = cell_child.GetLegacyIAccessiblePattern().Value
        else:
            head_text = cell_child.Name  # GetLegacyIAccessiblePattern().Value

        head_x = cell_child.BoundingRectangle.left
        if self.h_scroll_count == 0:
            if head_text not in self.head_text_list:
                self.head_text_list.append(head_text)
                self.head_x_list.append(head_x)  # 滚动之前的表头对应x，
                print("head_x1=", head_x)
                print("head_text1=", head_text)
        else:
            if head_text not in self.head_text_list:  # 依赖表头的唯一性
                self.head_text_list.append(head_text)
                self.header_count += 1
            else:
                if head_text == self.last_header_text:  # 依赖表头的唯一性
                    self.skip_first_col_list[self.h_scroll_count] = 1
                    return

                if head_x in self.head_x_list:
                    self.exclude_head_x_list.append(head_x)
                    # self.skip_y = cellChild.BoundingRectangle.bottom
                    print("head_x2=", head_x)
                    print("head_text2=", head_text)

    def check_header_equal_row0(self, tmp_list):
        col = len(tmp_list)
        col2 = len(self.head_text_list)
        print("tmp_list col=", col)
        print("head_text_list col2=", col2)
        if col == 0 or col2:
            return False
        data_start_index = 0
        tmp_start_index = 0
        if self.head_text_list[0] == "":
            data_start_index = 1
        if tmp_list[0] == "":
            tmp_start_index = 1
        print("tmp_list=", tmp_list)
        print("head_text_list=", self.head_text_list)
        for x in range(0, col - tmp_start_index):
            if tmp_list[x + tmp_start_index] != self.head_text_list[x + data_start_index]:
                return False
        return True

    def get_horizontal_scroll_cell(self):
        if self.header_count == 0:  # 说明不需要水平滚动
            print("说明不需要水平滚动")
            self.is_h_scroll_end = True
            self.cell_child = None
            return

        if self.check_h_scroll_end:
            self.check_h_scroll_end = False
            if self.last_header_element and self.last_header_element.Name == self.last_header_text:
                self.is_h_scroll_end = True
                self.cell_child = None
                return

        if self.cell_child.BoundingRectangle.left in self.exclude_head_x_list:
            # 水平滚动之后,冻结的列，要排除
            pass
        else:
            # 第一个不是表头的表头
            if self.is_first_span_col and self.skip_first_col_list[self.h_scroll_count]:
                # print("skip col", end="\t")
                # print("skip col data=", self.skip_first_col_list[self.h_scroll_count])
                self.is_first_span_col = False
                self.cell_child = self.cell_child.GetNextSiblingControl()
                return
            self.tmp_list.append(self.cell_child.GetLegacyIAccessiblePattern().Value)
            # print(self.cell_child.GetLegacyIAccessiblePattern().Value, end ='\t')

        self.cell_child = self.cell_child.GetNextSiblingControl()  # end cell

    def get_cell(self):
        while self.cell_child:
            # 需要跳过冻结的列，和跨越滚动的首尾列
            self.get_header_info(self.cell_child)
            if self.cell_child.ControlTypeName == "DataItemControl" or \
                    self.cell_child.ControlTypeName == "EditControl" or\
                    self.cell_child.ControlTypeName == "ImageControl":
                self.find_item = True
                if self.line_num == 0 and self.first_line_same_with_header_flag:
                    print("start ##############")
                    break

                # if not self.first_element:
                #     self.first_element = self.cell_child
                #     auto.LogControl(self.first_element)

                if self.h_scroll_count == 0:
                    self.tmp_list.append(self.cell_child.GetLegacyIAccessiblePattern().Value)
                    # print(self.cell_child.GetLegacyIAccessiblePattern().Value, end = '\t')
                    self.cell_child = self.cell_child.GetNextSiblingControl()  # end cell
                else:
                    self.get_horizontal_scroll_cell()  # 上面的if 对齐
            else:
                self.cell_child = self.cell_child.GetNextSiblingControl()  # end cell

    def get_data(self):

        if len(self.head_text_list) > 0:  # and not self.last_header_text
            self.last_header_text = self.head_text_list[-1]

        self.line_child = self.table_element.GetFirstChildControl()
        if self.h_scroll_count == 0:
            self.last_element = self.table_element.GetLastChildControl()
            if self.last_element_x == 0:
                self.last_element_x = self.last_element.BoundingRectangle.left

        self.line_num = 0
        self.find_item = False
        while self.line_child:
            self.get_header_info(self.line_child)
            self.cell_child = self.line_child.GetFirstChildControl()
            if self.line_child and \
                    (self.line_child.ControlTypeName == "TableControl" or
                     self.line_child.ControlTypeName == "PaneControl" or
                     self.line_child.ControlTypeName == "ScrollBarControl"):
                # print("line_child.ControlTypeName=", self.line_child.ControlTypeName)
                self.line_child = self.line_child.GetNextSiblingControl()
                continue

            self.tmp_list = []
            self.is_first_span_col = True
            self.check_h_scroll_end = True

            if self.find_item:
                self.line_num += 1

            self.get_cell()
            if self.v_scroll_count == 0:
                # 这个最后一次加上去的有可能会重复,所以要记录添加的个数
                self.add_col_count = len(self.tmp_list)

            if len(self.data_list) == 0 and self.check_header_equal_row0(self.tmp_list):
                self.first_line_same_with_header_flag = True

            if self.is_h_scroll_end:
                return

            self.line_child = self.line_child.GetNextSiblingControl()
            self.add_data_to_list(self.tmp_list, self.line_num)
            if self.is_v_scroll_end:
                return

        if self.v_scroll_count == 0:
            self.page_line_count = len(self.data_list)


def delete_last_duplicate_col(tt, start, end):
    if 0 <= len(tt.data_list) or len(tt.data_list) <= start:
        return

    if lend(tt.data_list) <= end:
        return

    for x in tt.data_list:
        del x[start:end]


def run_test():
    # win = auto.WindowControl(searchDepth=1, Name='FlexGrid (C# Code) 产品集合 by GrapeCity ')
    # control = win.TableControl(Name='FlexGrid')
    # table_instance = GetTableTest(title_name='FlexGrid (C# Code) 产品集合 by GrapeCity ', table_name='FlexGrid')

    tt = GetTableTest(hwnd=0x2059E)  # 0x2059E 0x270684
    tt.init_values()
    scroll_to_left(tt.h_hwnd)
    scroll_to_top(tt.v_hwnd)
    v_count = 0

    # 垂直方向滚动
    while True:
        tt.get_data()
        v_count += 1
        print("\nv_count", v_count)
        h_count = 0
        while True:
            if tt.v_scroll_count > 0 and tt.scroll_count == h_count:
                scroll_to_left(tt.h_hwnd)
                tt.is_h_scroll_end = False
                tt.skip_first_line_flag = 0  # 滚动之后跳过的标志要复原
                tt.h_scroll_count = 0
                break

            h_count += 1
            print("\nh_count", h_count)
            win32api.SendMessage(tt.h_hwnd, win32con.WM_HSCROLL, win32con.SB_PAGERIGHT, None)
            time.sleep(0.1)
            tt.h_scroll_count += 1
            tt.get_data()
            if tt.is_h_scroll_end:
                scroll_to_left(tt.hwnd)
                tt.is_h_scroll_end = False
                tt.skip_first_line_flag = 0  # 滚动之后跳过的标志要复原
                tt.h_scroll_count = 0
                break
            if tt.v_scroll_count == 0:
                tt.scroll_count += 1

        if check_v_scroll_end(tt):
            break

        # tt.first_element = None
        tt.v_scroll_count += 1
        tt.is_h_scroll_end = False
        tt.skip_first_line_flag = 0  # 滚动之后跳过的标志要复原

    scroll_to_left(tt.hwnd)
    scroll_to_top(tt.hwnd)

    # 水平方向滚动 (最后一次滚动到最右边的情况，后面有可能会好几列相同的)
    if tt.header_count != 0 and len(tt.data_list) > 0:
        diff = len(tt.data_list[0]) - len(tt.head_text_list)
        src = len(tt.data_list[0]) - tt.add_col_count
        des = src + diff
        if diff > 0:
            tt.delete_last_duplicate_col(src, des)
            print("\n\n\n=========重复的列数据")
            ss = "from " + str(src) + " to " + str(des)
            print(ss)

    if tt.last_element_x >= tt.rect[2]:
        print("tt.flast_element_x=", tt.last_element_x)
        print("tt.rect[2]=",tt.rect[2])
        print("\n\n\n不需要滚动")

    # tt.remove_end_line_data()
    print_data(tt.head_text_list, tt.data_list)


if __name__ == '__main__':
    # scroll_parent_test()
    run_test()

