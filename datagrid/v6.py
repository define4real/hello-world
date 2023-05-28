#!python3
# -*- coding:utf-8 -*-
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


def check_h_scroll_end(tt):
    print("check_h_scroll v_hwnd=", hex(tt.v_hwnd))
    last_line_node = None
    last_cell_node = None
    last_cell_node2 = None
    v1 = -1
    n1 = -1
    x1 = -1
    w1 = -1
    type1 = ""

    if tt.table_element:
        last_line_node = tt.table_element.GetLastChildControl()

    if last_line_node:
        last_cell_node = last_line_node.GetLastChildControl()

    if last_cell_node:
        n1 = last_cell_node.Name
        v1 = last_cell_node.GetLegacyIAccessiblePattern().Value
        x1 = last_cell_node.BoundingRectangle.left
        w1 = last_cell_node.BoundingRectangle.right
        type1 = last_cell_node.ControlTypeName

    win32api.SendMessage(tt.h_hwnd, win32con.WM_HSCROLL, win32con.SB_PAGERIGHT, None)
    time.sleep(0.2)

    if tt.table_element:
        last_line_node = tt.table_element.GetLastChildControl()

    if last_line_node:
        last_cell_node2 = last_line_node.GetLastChildControl()

    if not last_cell_node or not last_cell_node2:
        return False

    n2 = last_cell_node2.Name
    v2 = last_cell_node2.GetLegacyIAccessiblePattern().Value
    x2 = last_cell_node2.BoundingRectangle.left
    w2 = last_cell_node2.BoundingRectangle.right
    type2 = last_cell_node2.ControlTypeName
    # print("x1=", x1)
    # print("w1=", w1)
    # print("v1=", v1)
    # print("type1=", type1)
    # print("x2=", x2)
    # print("w2=", w2)
    # print("v2=", v2)
    # print("type2=", type2)
    if v1 == v2 and type1 == type2 and n1 == n2:  # 加强条件可有再和header 的x比较
        print("v1 == v2 and n1 == n2 and type1 == type2")
        # 下面y不变
        if (w1 >= tt.rect[2] and w2 >= tt.rect[2]) or (x1 == x2 and w1 == w2) or (w2 < tt.rect[2]):
            print("end check_h_scroll_end")
            return True

    return False


def check_v_scroll_end(tt):
    print("check_v_scroll v_hwnd=", hex(tt.v_hwnd))

    last_node1 = tt.table_element.GetLastChildControl()
    v1 = None
    n1 = None
    c1 = None
    b1 = None
    t1 = None
    if last_node1:
        v1 = last_node1.GetLegacyIAccessiblePattern().Value
        c1 = last_node1.ControlTypeName
        n1 = last_node1.Name
        b1 = last_node1.BoundingRectangle.bottom
        t1 = last_node1.BoundingRectangle.top

    win32api.SendMessage(tt.v_hwnd, win32con.WM_VSCROLL, win32con.SB_PAGEDOWN, None)
    time.sleep(0.2)

    last_node2 = tt.table_element.GetLastChildControl()
    if not last_node2:
        return False

    v2 = last_node2.GetLegacyIAccessiblePattern().Value
    n2 = last_node2.Name
    c2 = last_node2.ControlTypeName
    b2 = last_node2.BoundingRectangle.bottom
    t2 = last_node2.BoundingRectangle.top
    if v1 == v2 and n1 == n2 and c1 == c2:
        print("v1 == v2 and n1 == n2 and c1 == c2")
        # 下面y不变
        if (t1 >= tt.rect[1] and t2 >= tt.rect[1]) or b1 == b2 or b2 < tt.rect[3]:
            print("end check_v_scroll_end")
            return True

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
        self.data_list = []
        self.head_text_list = []
        self.head_left_list = []
        self.head_index = -1
        self.head_x_list = []
        self.freeze_col_list = []  # 冻结列的表头x
        self.scroll_count = 0
        self.add_col_count = 0
        self.page_line_count = 0
        self.insert_num = 0
        self.h_scroll_count = 0
        self.v_scroll_count = 0

        self.skip_line_num = -1
        self.skip_scroll_num = -1
        self.hwnd = hwnd
        self.h_hwnd = 0
        self.v_hwnd = 0
        self.table_element = None
        self.last_header_text = None
        self.last_header_left = 0
        self.last_header_right = 0
        self.skip_col_list = []
        self.skip_first_line_flag = 0
        self.line0_same_head_flag = 0

        self.rect = (0, 0, 0, 0)
        self.title_name = title_name
        self.table_name = table_name
        self.header_use_name_or_value_flag = -1  # 默认用name

        # while里面的临时变量
        self.line_num = 0
        self.line_child = None
        self.cell = None
        self.find_item = False
        self.tmp_list = []
        self.is_first_span_col = True

    def init_values(self):
        i = 0
        while i < 1000:
            self.skip_col_list.append(0)
            i += 1
        
        if not self.table_element:
            if self.hwnd:
                self.table_element = auto.ControlFromHandle(int(self.hwnd))
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

    def skip_first_line(self, tmp_list):
        if self.v_scroll_count > 0:
            length = len(self.tmp_list)
            if len(self.data_list[-1]) < length:
                return False
            for i in range(0, length):
                if self.data_list[-1][i] != tmp_list[i]:
                    return False
            return True
        return False

    def add_data_to_list(self, tmp_list, line_num):
        if len(tmp_list) <= 0:
            return
        if self.line0_same_head_flag and line_num == 0:
            print("add_data_to_list line_num=", line_num)
            return

        add_flag = True
        # or 是水平翻页的时候也需要跳过
        if self.v_scroll_count > 0:
            if self.skip_first_line_flag == 0 and self.skip_first_line(tmp_list)\
                    or self.skip_line_num == line_num and self.skip_scroll_num == self.v_scroll_count:
                add_flag = False
                self.skip_line_num = line_num
                self.skip_scroll_num = self.v_scroll_count
                print("xxx add_flag=False")
                print("skip line num=", line_num)
                print("skip_scroll_num=", self.v_scroll_count)
                print("skip line=", tmp_list)
                self.tmp_list = []
        self.skip_first_line_flag = 1

        if not add_flag:
            return
        if self.h_scroll_count > 0:
            print("xxx line_num=", line_num)
            print("xxx insert_count=", self.insert_num)
            print("xxx self.page_line_count=", self.page_line_count)
            print("xxx self.page_line_count=", self.data_list[self.insert_num - self.page_line_count])
            print("xxx tmp_list=", tmp_list)
            self.data_list[self.insert_num - self.page_line_count] += tmp_list
            print("xxx2 self.page_line_count=", self.data_list[self.insert_num - self.page_line_count])
            self.insert_num += 1
        else:
            self.data_list.append(tmp_list)
            self.page_line_count += 1

    def remove_end_line_data(self):
        if len(self.data_list) == 0 or \
                len(self.data_list) <= self.page_line_count:
            return
        last_line = self.data_list[-self.page_line_count - 1]
        total_count = len(self.data_list)
        col = len(last_line)
        if col == 0:
            return
        print("total_count=", total_count)
        print("a page count=", self.page_line_count)
        print("last_line=", last_line)
        for x in range(0, self.page_line_count):
            line = self.data_list[total_count - x - 1]
            col2 = len(line)
            print("last_line=", line)
            if col != col2:
                return

            if last_line == line:
                print("x=", x)
                print("应该删除从后面的index第【" + str(-x - 1) + "】开始,到" + str(-self.page_line_count))
                del self.data_list[-self.page_line_count:-x - 1]
                return

    def header_use_name_or_value(self, cell_child):
        if not cell_child:
            return
        next_child = cell_child.GetNextSiblingControl()
        if not next_child:
            return

        value = next_child.GetLegacyIAccessiblePattern().Value
        if value != "":
            self.header_use_name_or_value_flag = 1

    def header_info(self, child):
        self.head_index += 1
        if self.header_use_name_or_value_flag == -1:
            self.header_use_name_or_value_flag = 0
            self.header_use_name_or_value(child)

        if self.header_use_name_or_value_flag == 1:
            head_text = child.GetLegacyIAccessiblePattern().Value
        else:
            head_text = child.Name
        left = child.BoundingRectangle.left
        head_x = child.BoundingRectangle.right

        if self.h_scroll_count == 0:
            self.head_text_list.append(head_text)
            self.head_left_list.append(left)
            # 滚动之前的表头对应x
            self.head_x_list.append(head_x)
            print("head_x1=%d,head_text1=%s" % (head_x, head_text))
            return

        # 冻结的列，跳过
        if head_x in self.head_x_list:
            idx = self.head_x_list.index(head_x)
            left_x = self.head_left_list[idx]
            if left_x == left:
                if head_x not in self.freeze_col_list:
                    self.freeze_col_list.append(head_x)
                return

        # 冻结之后的跨越屏幕1列，跳过
        if len(self.freeze_col_list) == self.head_index:
            if head_text == self.last_header_text:
                self.skip_col_list[self.h_scroll_count] = 1
                print("head_x2=%d,head_text2=%s" % (head_x, head_text))
                return

        print("head_x3=%d,head_text3=%s" % (head_x, head_text))
        self.head_text_list.append(head_text)
        self.head_left_list.append(left)

    # 需要跳过冻结的列，和跨越滚动的首尾列
    def get_header_info(self, element):
        if self.v_scroll_count != 0 or not element or self.line_num > 1:
            return

        if element.ControlTypeName != "HeaderControl" and element.ControlTypeName != "ListControl":
            return
        child = element.GetFirstChildControl()
        if not child:
            self.header_info(element)
            return
        while child:
            self.header_info(child)
            child = child.GetNextSiblingControl()

    def check_header_equal_row0(self, tmp_list):
        col = len(tmp_list)
        col2 = len(self.head_text_list)
        print("tmp_list col=", col)
        print("head_text_list col2=", col2)
        if col == 0 or col2 == 0:
            return False
        data_idx = 0
        tmp_idx = 0
        if self.head_text_list[0] == "":
            data_idx = 1
        if tmp_list[0] == "":
            tmp_idx = 1
        print("head_text_list=", self.head_text_list)
        for x in range(0, col - tmp_idx):
            if tmp_list[x + tmp_idx] != self.head_text_list[x + data_idx]:
                return False
        return True

    def get_horizontal_scroll_cell(self):
        # 冻结的列，跳过
        if self.cell.BoundingRectangle.right in self.freeze_col_list:
            self.cell = self.cell.GetNextSiblingControl()
            return

        # 冻结之后的跨越屏幕1列，跳过
        if self.is_first_span_col:
            self.is_first_span_col = False
            if self.skip_col_list[self.h_scroll_count]:
                self.cell = self.cell.GetNextSiblingControl()
            return
        self.tmp_list.append(self.cell.GetLegacyIAccessiblePattern().Value)
        self.cell = self.cell.GetNextSiblingControl()

    def get_cell(self):
        while self.cell:
            # 需要跳过冻结的列，和跨越滚动的首尾列
            self.get_header_info(self.cell)
            if self.cell.ControlTypeName == "DataItemControl" or \
                    self.cell.ControlTypeName == "EditControl" or \
                    self.cell.ControlTypeName == "ImageControl":
                self.find_item = True
                if self.line_num == 0 and self.line0_same_head_flag:
                    print("start ##############")
                    break

                if self.h_scroll_count == 0:
                    self.tmp_list.append(self.cell.GetLegacyIAccessiblePattern().Value)
                    self.cell = self.cell.GetNextSiblingControl()
                else:
                    self.get_horizontal_scroll_cell()  # 上面的if 对齐
            else:
                self.cell = self.cell.GetNextSiblingControl()

    def get_data(self):
        if len(self.head_text_list) > 0:  # and not self.last_header_text
            self.last_header_text = self.head_text_list[-1]

        self.line_child = self.table_element.GetFirstChildControl()
        self.line_num = 0
        self.find_item = False
        while self.line_child:
            self.get_header_info(self.line_child,)
            self.cell = self.line_child.GetFirstChildControl()
            if self.line_child and \
                    (self.line_child.ControlTypeName == "TableControl" or
                     self.line_child.ControlTypeName == "PaneControl" or
                     self.line_child.ControlTypeName == "ScrollBarControl"):
                self.line_child = self.line_child.GetNextSiblingControl()
                continue

            self.tmp_list = []
            self.is_first_span_col = True

            self.get_cell()
            if self.v_scroll_count == 0 and self.find_item:
                # 这个最后一次加上去的有可能会重复,所以要记录添加的个数
                self.add_col_count = len(self.tmp_list)

            if len(self.data_list) == 0 and self.find_item:
                if self.check_header_equal_row0(self.tmp_list):
                    self.line0_same_head_flag = True
                    print("same_with_header_tmp_list =", self.tmp_list)

            self.line_child = self.line_child.GetNextSiblingControl()
            self.add_data_to_list(self.tmp_list, self.line_num)
            if self.find_item:
                self.line_num += 1


def check_col_data(tt):
    print("tt.scroll_count len=", tt.scroll_count)
    print("tt.add_col_coun len=", tt.add_col_count)
    print("tt.head_text_list len=", len(tt.head_text_list))
    print("tt.data_list[0] len=", len(tt.data_list[0]))
    print("tt.data_list[-1] len=", len(tt.data_list[-1]))
    # 水平方向滚动 (最后一次滚动到最右边的情况，后面有可能会好几列相同的)
    if tt.scroll_count == 0 or len(tt.data_list) == 0:
        return
    
    if len(tt.data_list) - tt.add_col_count <= 0 or tt.add_col_count == 0:
        return

    last_text = tt.head_text_list[-tt.add_col_count - 1]
    print("check_col_data text =", last_text)
    if last_text not in tt.head_text_list[-tt.add_col_count:]:
        return
    
    idx = tt.head_text_list[-tt.add_col_count:].index(last_text)
    print("last_text=", last_text)
    print("idx=", idx)
    print("before head_text_list=", tt.head_text_list)
    print("before data_list[0]=", tt.data_list[0])

    del tt.head_text_list[-tt.add_col_count-1:idx-tt.add_col_count]
    print("after head_text_list=", tt.head_text_list)
    length = len(tt.data_list)

    for i in range(0, length):
        del tt.data_list[i][-tt.add_col_count-1:idx-tt.add_col_count]
    print("after data_list[0]=", tt.data_list[0])


def run_test():
    # win = auto.WindowControl(searchDepth=1, Name='FlexGrid (C# Code) 产品集合 by GrapeCity ')
    # control = win.TableControl(Name='FlexGrid')
    # table_instance = GetTableTest(title_name='FlexGrid (C# Code) 产品集合 by GrapeCity ', table_name='FlexGrid')

    # 0x370CAC
    # 0x202CC
    tt = GetTableTest(hwnd=0x505E0)
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
        tt.head_index = -1
        while True:
            if tt.v_scroll_count > 0 and tt.scroll_count == h_count:
                scroll_to_left(tt.h_hwnd)
                tt.skip_first_line_flag = 0  # 滚动之后跳过的标志要复原
                tt.h_scroll_count = 0
                tt.line_num = 0
                tt.find_item = False
                break

            h_count += 1
            tt.head_index = -1
            print("\nh_count", h_count)
            if check_h_scroll_end(tt):
                scroll_to_left(tt.hwnd)
                tt.skip_first_line_flag = 0  # 滚动之后跳过的标志要复原
                tt.h_scroll_count = 0
                tt.line_num = 0
                tt.find_item = False
                break
            else:
                tt.h_scroll_count += 1
                tt.insert_num = 0
                tt.get_data()

            if tt.v_scroll_count == 0:
                tt.scroll_count += 1

        if check_v_scroll_end(tt):
            break
        else:
            tt.v_scroll_count += 1
            tt.head_index = -1
            tt.page_line_count = 0
        tt.skip_first_line_flag = 0  # 滚动之后跳过的标志要复原

    scroll_to_left(tt.hwnd)
    scroll_to_top(tt.hwnd)
    check_col_data(tt)
    tt.remove_end_line_data()
    print_data(tt.head_text_list, tt.data_list)


if __name__ == '__main__':

    # xhead_x = 100
    # xhead_text = "haha"
    # print("head_x=%d,head_text=%s" % (xhead_x, xhead_text))
    #run_test()
    win = auto.ControlFromHandle(0x000208AA)
    auto.LogControl(win)
