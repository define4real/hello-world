import os
import win32com
from win32com.client import Dispatch
from win32com.client import constants
#import time,datetime

codes = '''
Private Declare PtrSafe Function FindWindow Lib "user32" Alias "FindWindowA" (ByVal lpClassName As String, ByVal lpWindowName As String) As Long
Private Declare PtrSafe Function FindWindowEx Lib "user32" Alias "FindWindowExA" (ByVal hWnd1 As Long, ByVal hWnd2 As Long, ByVal lpsz1 As String, ByVal lpsz2 As String) As Long
Private Declare PtrSafe Function GetWindowText Lib "user32" Alias "GetWindowTextA" (ByVal hwnd As Long, ByVal lpString As String, ByVal cch As Long) As Long
Private Declare PtrSafe Function GetWindowTextLength Lib "user32" Alias "GetWindowTextLengthA" (ByVal hwnd As Long) As Long
Private Declare PtrSafe Function SendMessage Lib "user32" Alias "SendMessageA" (ByVal hwnd As Long, ByVal wMsg As Long, ByVal wParam As Long, lParam As Any) As Long
Private Declare PtrSafe Sub Sleep Lib "kernel32" (ByVal dwMilliseconds As Long)
Dim Ret As Long, ChildRet As Long, OpenRet As Long
Dim strBuff As String, ButCap As String
Dim MyPassword As String
Const WM_SETTEXT = &HC
Const BM_CLICK = &HF5
Sub UnlockVBA()
    Dim xlAp As Object, oWb As Object
    Set xlAp = CreateObject("Excel.Application")
    xlAp.Visible = False
    Set oWb = xlAp.Workbooks.Open("{}")
    xlAp.VBE.CommandBars(1).FindControl(ID:=2578, recursive:=True).Execute
    MyPassword = "{}"
    Ret = FindWindow(vbNullString, "VBAProject 密码")
    If Ret <> 0 Then
        ChildRet = FindWindowEx(Ret, ByVal 0&, "Edit", vbNullString)
        If ChildRet <> 0 Then
            SendMess MyPassword, ChildRet
            DoEvents
            ChildRet = FindWindowEx(Ret, ByVal 0&, "Button", vbNullString)
            If ChildRet <> 0 Then
                strBuff = String(GetWindowTextLength(ChildRet) + 1, Chr$(0))
                GetWindowText ChildRet, strBuff, Len(strBuff)
                ButCap = strBuff
                Do While ChildRet <> 0
                    If InStr(1, ButCap, "确定") Then
                        OpenRet = ChildRet
                        Exit Do
                    End If
                    ChildRet = FindWindowEx(Ret, ChildRet, "Button", vbNullString)
                    strBuff = String(GetWindowTextLength(ChildRet) + 1, Chr$(0))
                    GetWindowText ChildRet, strBuff, Len(strBuff)
                    ButCap = strBuff
                Loop
                If OpenRet <> 0 Then
                    SendMessage ChildRet, BM_CLICK, 0, vbNullString
                    Sleep 100
                    clickOk ("VBAProject - 工程属性")
                    xlAp.Run "ThisWorkbook.testone"
                End If
            End If
        End If
    End If
    Application.DisplayAlerts = False
    oWb.Close SaveChanges:=False
    Application.DisplayAlerts = False
End Sub

Sub clickOk(findWin As String)
    Ret = FindWindow(vbNullString, findWin)
    If Ret <> 0 Then
        ChildRet = FindWindowEx(Ret, ByVal 0&, "Button", vbNullString)
        If ChildRet <> 0 Then
            strBuff = String(GetWindowTextLength(ChildRet) + 1, Chr$(0))
            GetWindowText ChildRet, strBuff, Len(strBuff)
            ButCap = strBuff
            Do While ChildRet <> 0
                If InStr(1, ButCap, "确定") Then
                    OpenRet = ChildRet
                    Exit Do
                End If
                ChildRet = FindWindowEx(Ret, ChildRet, "Button", vbNullString)
                strBuff = String(GetWindowTextLength(ChildRet) + 1, Chr$(0))
                GetWindowText ChildRet, strBuff, Len(strBuff)
                ButCap = strBuff
            Loop
             If OpenRet <> 0 Then
                    SendMessage ChildRet, BM_CLICK, 0, vbNullString
            End If
        End If
    End If
End Sub

Sub SendMess(Message As String, hwnd As Long)
    Call SendMessage(hwnd, WM_SETTEXT, False, ByVal Message)
End Sub
'''.format("C:/Users/Administrator/Desktop/pass.xlsm","123456")
# file_path=time.strftime('%Y%m%d_%H_%M_%S.xlsx')
# print(file_path)

xlApp = win32com.client.gencache.EnsureDispatch("Excel.Application")
file_path = "C:\\Users\\Administrator\\Desktop\\pass.xlsm"
xlBook = xlApp.Workbooks.Open(file_path, False)
sh = xlBook.Sheets(1)
print(sh.Range("A7").Value)
xlBook.Close(SaveChanges=True)


xlBook = xlApp.Workbooks.Add()
ppp = r"C:\Users\Administrator\Desktop"+"\\"+file_path
#xlBook.Close(SaveChanges=False)
#xlBook.SaveAs(ppp)
#sh = xlBook.ActiveSheet

# codes = """Sub MyNewProcedure()
#  MsgBox time()
# End Sub
# """
VBComp = xlBook.VBProject.VBComponents.Add(1)
VBComp.Name = "NewModule"
#add the code lines
#VBCodeMod = xlBook.VBProject.VBComponents("NewModule").CodeModule
xlBook.VBProject.VBComponents("NewModule").CodeModule.AddFromString(codes)
#run the new module
xlApp.Run("UnlockVBA")
#xlBook.Save()
xlBook.Close(SaveChanges=False)
#os.remove(file_path)



xlApp = win32com.client.gencache.EnsureDispatch("Excel.Application")
file_path = "C:\\Users\\Administrator\\Desktop\\pass.xlsm"
xlBook = xlApp.Workbooks.Open(file_path, False)
sh = xlBook.Sheets(1)
print(sh.Range("A8").Value)
xlBook.Close(SaveChanges=True)


# https://blog.csdn.net/qq_35097289/article/details/91489628
# https://blog.csdn.net/allisonhuang/article/details/8787727?locationNum=12&fps=1
# http://www.cpearson.com/excel/vbe.aspx
# https://stackoverflow.com/questions/16174469/unprotect-vbproject-from-vb-code
# SendKeys strPassWord & "{ENTER}{TAB}{ENTER}"
# http://club.excelhome.net/thread-1081108-1-1.html