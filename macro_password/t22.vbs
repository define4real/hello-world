Dim UserWrap

Set UserWrap = CreateObject("DynamicWrapper")

'Private Declare PtrSafe Function FindWindow Lib "user32" Alias "FindWindowA" _
' (ByVal lpClassName As String, ByVal lpWindowName As String) As Long

'Declare Function FindWindow Lib "user32" Alias "FindWindowA" (ByVal lpClassName As String, ByVal lpWindowName As String) As Long
UserWrap.Register "USER32.DLL", "FindWindow", "I=ss", "f=s", "R=l"
'Declare Function FindWindowEx Lib "user32" Alias "FindWindowExA" (ByVal hWnd1 As Long, ByVal hWnd2 As Long, ByVal lpsz1 As String, ByVal lpsz2 As String) As Long
UserWrap.Register "USER32.DLL", "FindWindowEx", "I=llss", "f=s", "R=l"

' Private Declare PtrSafe Function FindWindowEx Lib "user32" Alias "FindWindowExA" _
' (ByVal hWnd1 As Long, ByVal hWnd2 As Long, ByVal lpsz1 As String, _
' ByVal lpsz2 As String) As Long

' Private Declare PtrSafe Function GetWindowText Lib "user32" Alias "GetWindowTextA" _
' (ByVal hwnd As Long, ByVal lpString As String, ByVal cch As Long) As Long

UserWrap.Register "USER32.DLL", "GetWindowText", "I=lsl", "f=s", "R=l"

' Private Declare PtrSafe Function GetWindowTextLength Lib "user32" Alias _
' "GetWindowTextLengthA" (ByVal hwnd As Long) As Long

UserWrap.Register "USER32.DLL", "GetWindowTextLength", "I=l", "f=s", "R=l"

' Private Declare PtrSafe Function SendMessage Lib "user32" Alias "SendMessageA" _
' (ByVal hwnd As Long, ByVal wMsg As Long, ByVal wParam As Long, lParam As Any) As Long
UserWrap.Register "USER32.DLL", "SendMessage", "I=llla", "f=s", "R=l"

' Dim Ret As Long, ChildRet As Long, OpenRet As Long
' Dim strBuff As String, ButCap As String
' Dim MyPassword As String

Const WM_SETTEXT = &HC
Const BM_CLICK = &HF5

Sub UnlockVBA()
    ' Dim xlAp As Object, oWb As Object

    Set xlAp = CreateObject("Excel.Application")

    xlAp.Visible = True

    '~~> Open the workbook in a separate instance
    Set oWb = xlAp.Workbooks.Open("C:\Users\Administrator\Desktop\pass.xlsm")
	MsgBox time()
	

    ' '~~> Launch the VBA Project Password window
    ' '~~> I am assuming that it is protected. If not then
    ' '~~> put a check here.
    ' xlAp.VBE.CommandBars(1).FindControl(ID:=2578, recursive:=True).Execute
    ' 'xlAp.CommandBars.FindControl(Type:=1, ID:=1561).Execute
    

    ' '~~> Your passwword to open then VBA Project
    ' MyPassword = "123456"

    ' '~~> Get the handle of the "VBAProject Password" Window
    ' Ret = FindWindow(vbNullString, "VBAProject 密码")

    ' If Ret <> 0 Then
        ' 'MsgBox "VBAProject Password Window Found"

        ' '~~> Get the handle of the TextBox Window where we need to type the password
        ' ChildRet = FindWindowEx(Ret, ByVal 0&, "Edit", vbNullString)

        ' If ChildRet <> 0 Then
            ' 'MsgBox "TextBox's Window Found"
            ' '~~> This is where we send the password to the Text Window
            ' SendMess MyPassword, ChildRet

            ' DoEvents

            ' '~~> Get the handle of the Button's "Window"
            ' ChildRet = FindWindowEx(Ret, ByVal 0&, "Button", vbNullString)

            ' '~~> Check if we found it or not
            ' If ChildRet <> 0 Then
                ' 'MsgBox "Button's Window Found"

                ' '~~> Get the caption of the child window
                ' strBuff = String(GetWindowTextLength(ChildRet) + 1, Chr$(0))
                ' GetWindowText ChildRet, strBuff, Len(strBuff)
                ' ButCap = strBuff

                ' '~~> Loop through all child windows
                ' Do While ChildRet <> 0
                    ' '~~> Check if the caption has the word "OK"
                    ' If InStr(1, ButCap, "确定") Then
                        ' '~~> If this is the button we are looking for then exit
                        ' OpenRet = ChildRet
                        
                        ' Exit Do
                    ' End If

                    ' '~~> Get the handle of the next child window
                    ' ChildRet = FindWindowEx(Ret, ChildRet, "Button", vbNullString)
                    ' '~~> Get the caption of the child window
                    ' strBuff = String(GetWindowTextLength(ChildRet) + 1, Chr$(0))
                    ' GetWindowText ChildRet, strBuff, Len(strBuff)
                    ' ButCap = strBuff
                ' Loop

                ' '~~> Check if we found it or not
                ' If OpenRet <> 0 Then
                    ' '~~> Click the OK Button
                    ' SendMessage ChildRet, BM_CLICK, 0, vbNullString
                    ' xlAp.Run "ThisWorkbook.testone"
                ' Else
                    ' MsgBox "The Handle of OK Button was not found"
                ' End If
            ' Else
                 ' MsgBox "Button's Window Not Found"
            ' End If
        ' Else
            ' MsgBox "The Edit Box was not found"
        ' End If
    ' Else
        ' MsgBox "VBAProject Password Window was not Found"
    ' End If
End Sub

' Sub SendMess(Message As String, hwnd As Long)
    ' Call SendMessage(hwnd, WM_SETTEXT, False, ByVal Message)
' End Sub

UnlockVBA()