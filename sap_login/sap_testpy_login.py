import time
import win32com.client

# 打开SAP Logon应用之后获取SAP Object尝试次数
GET_OBJ_COUNT = 10
# 重连server次数
CONNECT_SERVER_COUNT = 5
# 重连server,间隔时间，毫秒
CONNECT_SERVER_TIME_MS = 500
LOGIN_KILL_OTHERS = 1
LOGIN_ALL = 2
LOGIN_KILL_THIS = 3


class SapLogon:
    def __init__(self):
        self.sap_gui_obj = None
        self.application = None

    def init_sap_object(self):
        time.sleep(1)
        for i in range(GET_OBJ_COUNT):
            try:
                self.sap_gui_obj = win32com.client.GetObject("SAPGUI")
            except Exception as e:
                time.sleep(1)
                print(e)

            if not type(self.sap_gui_obj) == win32com.client.CDispatch:
                print("GetObject SAPGUI: another try.")
            else:
                break
        if not self.sap_gui_obj:
            raise TimeoutError("GetObject SAPGUI: timeout.")

    def connect_server(self, server_name, connection_count, interval):
        for i in range(connection_count):
            try:
                self.application.OpenConnection(server_name)
                return
            except Exception as e:
                print(e)
                print("Connect Server: another try.")
                time.sleep(interval / 1000)
        raise TimeoutError("Connect SAP server " + server_name + " timeout")

    def logon(self, path, server_name,
              connection_count=CONNECT_SERVER_COUNT,
              interval=CONNECT_SERVER_TIME_MS):
        import os
        import subprocess
        if not os.path.exists(path):
            raise FileNotFoundError("File not found:" + path)
        subprocess.Popen(path)
        self.init_sap_object()
        self.application = self.sap_gui_obj.GetScriptingEngine
        if not type(self.application) == win32com.client.CDispatch:
            print("application GetScriptingEngine is None.")
            return

        # self.application.OpenConnection(server_name)
        self.connect_server(server_name, connection_count, interval)
        self.application = None
        self.sap_gui_obj = None


class SapLogin:
    def __init__(self):
        self.sap_gui_obj = None
        self.application = None
        self.multiple_login_opt = LOGIN_KILL_OTHERS

    def login(self, user_name, pwd, client, language):
        self.sap_gui_obj = win32com.client.GetObject("SAPGUI")
        if self.sap_gui_obj is None:
            print("SAP application init failed.")
            return
        self.application = self.sap_gui_obj.GetScriptingEngine
        if self.application is None:
            print("SAP application init failed.")
            return

        index = self.application.Connections.Count
        print("Connections index=", index)
        if index == 0:
            return
        connection = self.application.Children(index - 1)
        if not type(connection) == win32com.client.CDispatch:
            return

        index = connection.Sessions.Count
        print("Sessions index=", index)
        if index == 0:
            return
        session = connection.Children(index - 1)
        if not type(session) == win32com.client.CDispatch:
            return

        session.findById("wnd[0]/usr/txtRSYST-BNAME").Text = user_name
        session.findById("wnd[0]/usr/pwdRSYST-BCODE").Text = pwd
        session.findById("wnd[0]/usr/txtRSYST-MANDT").Text = client
        session.findById("wnd[0]/usr/txtRSYST-LANGU").Text = language
        window = session.FindById("wnd[0]")
        window.SendVKey(0)
        self.multiple_login_dialog(session, window)

    def multiple_login_dialog(self, session, window):
        rb_button = None
        try:
            # 系统禁止多用户时弹出来的框不一样，这里的分支可能找不到按钮导致有异常
            # 或者是第一次登录sap系统，根本不会多用户提示弹框
            # 选项说明
            # 1 继续此登录并结束系统中的其他任何登录  => usr/radMULTI_LOGON_OPT1
            # 2 继续此登录，但是不结束系统中其他任何登录 *** => usr/radMULTI_LOGON_OPT2
            # 3 终止此次登录 => usr/radMULTI_LOGON_OPT3
            if self.multiple_login_opt == LOGIN_KILL_OTHERS:
                rb_button = session.findById("wnd[1]/usr/radMULTI_LOGON_OPT1")
            elif self.multiple_login_opt == LOGIN_ALL:
                rb_button = session.findById("wnd[1]/usr/radMULTI_LOGON_OPT2")
            else:
                rb_button = session.findById("wnd[1]/usr/radMULTI_LOGON_OPT3")
        except Exception as e:
            print(e)
            print("没有此弹窗或按钮")

        if rb_button is not None:
            rb_button.Select()
            window.SendVKey(0)


if __name__ == "__main__":
    sap_logon = SapLogon()
    sap_logon.logon(r"C:\Program Files (x86)\SAP\FrontEnd\SapGui\saplogon.exe",
                    "test")

    sap_login = SapLogin()
    # LOGIN_KILL_OTHERS = 1
    # LOGIN_ALL = 2
    # LOGIN_KILL_THIS = 3
    # 1 继续此登录并结束系统中的其他任何登录
    # 2 继续此登录，但是不结束系统中其他任何登录
    # 3 终止此次登录
    sap_login.multiple_login_opt = LOGIN_KILL_THIS
    sap_login.login("Y051", "123456789001", "100", "ZH")
