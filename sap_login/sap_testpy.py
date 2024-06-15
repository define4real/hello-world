import time
import win32com.client
import subprocess


class SapLogin:
    # 0  继续此登录并结束系统中的其他任何登录  => usr/radMULTI_LOGON_OPT1
    # 1 继续此登录，但是不结束系统中其他任何登录 => usr/radMULTI_LOGON_OPT2
    # 3 终止此次登录 => usr/radMULTI_LOGON_OPT3
    def __init__(self):
        self.sap_gui_run = None
        self.application = None
        self.connection = None
        self.multiple_login_opt = 0

    def __del__(self):
        self.sap_gui_run = None
        self.application = None
        self.connection = None

    def get_sap_app(self, seconds_timeout=10):
        # time.sleep(2)
        self.get_app(seconds_timeout)

    def get_app(self, seconds_timeout):
        try:
            self.sap_gui_run = win32com.client.GetObject("SAPGUI")
        except Exception as e:
            print(e)
        if seconds_timeout < 0:
            raise ValueError("time out.")
        else:
            if self.sap_gui_run is None:
                time.sleep(1)
                print("another try")
                self.get_app(seconds_timeout - 1)
            else:
                return

    def logon(self, path, server_name):
        try:
            subprocess.Popen(path)
            self.get_sap_app(10)
            if not type(self.sap_gui_run) == win32com.client.CDispatch:
                self.sap_gui_run = None
                return
            self.application = self.sap_gui_run.GetScriptingEngine

            if not type(self.application) == win32com.client.CDispatch:
                self.sap_gui_run = None
                self.application = None
                return

            self.application.OpenConnection(server_name)
        except Exception as e:
            print(e)

    def login(self, user_name, pwd, client, language):
        if self.application is None:
            print("application init failed.")
            return

        index = self.application.Connections.Count
        print("Connections index=", index)
        self.connection = self.application.Children(index - 1)  # 0
        if not type(self.connection) == win32com.client.CDispatch:
            return

        index = self.connection.Sessions.Count
        print("Sessions index=", index)
        session = self.connection.Children(index - 1)  # 0
        if not type(session) == win32com.client.CDispatch:
            return

        session.findById("wnd[0]/usr/txtRSYST-BNAME").Text = user_name
        session.findById("wnd[0]/usr/pwdRSYST-BCODE").Text = pwd
        session.findById("wnd[0]/usr/txtRSYST-MANDT").Text = client
        session.findById("wnd[0]/usr/txtRSYST-LANGU").Text = language
        time.sleep(5)
        window = session.FindById("wnd[0]")
        window.SendVKey(0)
        rb_button = None
        try:
            if self.multiple_login_opt == 0:
                rb_button = session.findById("wnd[1]/usr/radMULTI_LOGON_OPT1")
            elif self.multiple_login_opt == 1:
                rb_button = session.findById("wnd[1]/usr/radMULTI_LOGON_OPT2")
            else:
                rb_button = session.findById("wnd[1]/usr/radMULTI_LOGON_OPT3")
        except Exception as e:
            print(e)
            print("没有此按钮")

        if rb_button is not None:
            rb_button.Select()
            window.SendVKey(0)


if __name__ == "__main__":
    sap = SapLogin()

    sap.logon(r"C:\Program Files (x86)\SAP\FrontEnd\SapGui\saplogon.exe",
              "test")

    # 0  继续此登录并结束系统中的其他任何登录  => usr/radMULTI_LOGON_OPT1
    # 1 继续此登录，但是不结束系统中其他任何登录 => usr/radMULTI_LOGON_OPT2
    # 3 终止此次登录 => usr/radMULTI_LOGON_OPT3
    sap.multiple_login_opt = 0
    sap.login("Y051", "123456789001", "100", "ZH")
