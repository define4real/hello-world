﻿using SAPFEWSELib;
using SapROTWr;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Text;
using System.Threading;

namespace SAPAutomation
{
    public delegate void LoginHandler(GuiSession sender, EventArgs e);

    public class SAPLogon
    {
        private GuiSession _sapGuiSession;
        private GuiConnection _sapGuiConnection;
        private GuiApplication _sapGuiApplication;

        public event LoginHandler FailLogin;
        public event LoginHandler BeforeLogin;
        public event LoginHandler AfterLogin;

        public int  _multiple;


        public GuiSession Session { get { return _sapGuiSession; } }

        public GuiConnection Connection { get { return _sapGuiConnection; } }

        public GuiApplication Application { get { return _sapGuiApplication; } }

        
        public SAPLogon() { _multiple = 0; }

        //public int GetMultiple()
        //{
        //    return _multiple;
        //}

        public void SetMultiple(int multiple)
        {
            _multiple = multiple;
        }

        public void StartProcess(string processPath = "saplogon.exe") {
            Process.Start(processPath);
        }

        private static object _lockObj = new object();

        public void OpenConnection(string server, int secondsOfTimeout = 10) {
            lock (_lockObj) {
                _sapGuiApplication = GetSAPGuiApp(secondsOfTimeout);
                //_sapGuiApplication.OpenConnectionByConnectionString(server);
                _sapGuiApplication.OpenConnection(server);
                var index = _sapGuiApplication.Connections.Count - 1;
                this._sapGuiConnection = _sapGuiApplication.Children.ElementAt(index) as GuiConnection;
                index = _sapGuiConnection.Sessions.Count - 1;
                this._sapGuiSession = _sapGuiConnection.Children.Item(index) as GuiSession;
            }

        }

        public void Login(string UserName, string Password, string Client, string Language) {
            if (BeforeLogin != null) {
                BeforeLogin(_sapGuiSession, new EventArgs());
            }

            _sapGuiSession.FindById<GuiTextField>("wnd[0]/usr/txtRSYST-BNAME").Text = UserName;
            _sapGuiSession.FindById<GuiTextField>("wnd[0]/usr/pwdRSYST-BCODE").Text = Password;
            _sapGuiSession.FindById<GuiTextField>("wnd[0]/usr/txtRSYST-MANDT").Text = Client;
            _sapGuiSession.FindById<GuiTextField>("wnd[0]/usr/txtRSYST-LANGU").Text = Language;


            var window = _sapGuiSession.FindById<GuiFrameWindow>("wnd[0]");
            window.SendVKey(0);

            GuiStatusbar status = _sapGuiSession.FindById<GuiStatusbar>("wnd[0]/sbar");
            if (status != null && status.MessageType.ToLower() == "e") {
                _sapGuiConnection.CloseSession(_sapGuiSession.Id);
                if (FailLogin != null) {
                    FailLogin(_sapGuiSession, new EventArgs());
                }
                return;
            }

            if (AfterLogin != null) {
                AfterLogin(_sapGuiSession, new EventArgs());
            }

            GuiRadioButton rb_Button = null;

            //0  继续此登录并结束系统中的其他任何登录  usr/radMULTI_LOGON_OPT1
            //1 继续此登录，但是不结束系统中其他任何登录 usr/radMULTI_LOGON_OPT2
            //3 终止此次登录 usr/radMULTI_LOGON_OPT3


            if (_multiple == 0)
            {
                rb_Button = _sapGuiSession.FindById<GuiRadioButton>("wnd[1]/usr/radMULTI_LOGON_OPT1");
            } else if (_multiple == 1)
            {
                rb_Button = _sapGuiSession.FindById<GuiRadioButton>("wnd[1]/usr/radMULTI_LOGON_OPT2");
            } else
            {
                rb_Button = _sapGuiSession.FindById<GuiRadioButton>("wnd[1]/usr/radMULTI_LOGON_OPT3");
            }
               
            if (rb_Button != null)
            {
                rb_Button.Select();
                window.SendVKey(0);
            }

        }

        public GuiMainWindow MainWindow {
            get {
                return FindElementById<GuiMainWindow>("wnd[0]");
            }
        }

        public GuiFrameWindow PopupWindow {
            get {
                if (!(_sapGuiSession.ActiveWindow is GuiMainWindow))
                    return _sapGuiSession.ActiveWindow;
                else
                    return null;
            }
        }

        public T FindElementById<T>(string id) where T : class {
            var component = FindElementById(id);
            T element = component as T;
            return element;
        }

        public GuiComponent FindElementById(string id) {
            GuiComponent component = _sapGuiSession.FindById(id);
            return component;
        }


        public static GuiApplication GetSAPGuiApp(int secondsOfTimeout = 10) {
            SapROTWr.CSapROTWrapper sapROTWrapper = new SapROTWr.CSapROTWrapper();
            return getSAPGuiApp(sapROTWrapper, secondsOfTimeout);
        }

        private static GuiApplication getSAPGuiApp(CSapROTWrapper sapROTWrapper, int secondsOfTimeout) {

            object SapGuilRot = sapROTWrapper.GetROTEntry("SAPGUI");
            if (secondsOfTimeout < 0) {
                throw new TimeoutException(string.Format("Can get sap script engine in {0} seconds", secondsOfTimeout));
            } else {
                if (SapGuilRot == null) {
                    Thread.Sleep(1000);
                    return getSAPGuiApp(sapROTWrapper, secondsOfTimeout - 1);
                } else {
                    object engine = SapGuilRot.GetType().InvokeMember("GetSCriptingEngine", System.Reflection.BindingFlags.InvokeMethod, null, SapGuilRot, null);
                    if (engine == null)
                        throw new NullReferenceException("No SAP GUI application found");
                    return engine as GuiApplication;
                }
            }
        }

        public void CloseSession() {
            _sapGuiConnection.CloseSession(_sapGuiSession.Id);
        }

    }
}
