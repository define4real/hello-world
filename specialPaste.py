import win32com
from win32com.client import Dispatch, DispatchEx
from win32com.client import constants

xlApp = win32com.client.gencache.EnsureDispatch("Excel.Application")
file_path = "C:\\Users\\Administrator\\Desktop\\haha.xlsx"

xlBook = xlApp.Workbooks.Open(file_path, False)
sh = xlBook.Sheets("Sheet4")

###Worksheet.PasteSpecial method (Excel)
# sh.Range("A1").Select
# sh.PasteSpecial(NoHTMLFormatting=True)


#外面复制的单元格只能pasteALl,不能xlPasteValues
sh.Range("A1:A1").PasteSpecial(Paste=constants.xlPasteAll)

print("end")
xlBook.Close(SaveChanges=True)

# Sub
# test2()
# 'Range("A1:D5").Select
# ' Application.CutCopyMode = False
# 'Selection.Copy
# 'Range("A20").Select
#
# 'ActiveSheet.PasteSpecial Paste:=-4104 '
# Format: = "文本", Link:=False, DisplayAsIcon: = False
#
# ''
# OK
# 'ActiveSheet.PasteSpecial NoHTMLFormatting:=True '
# Format: = "文本", Link:=False, DisplayAsIcon: = False
#
# ''
# 外面复制的单元格只能pasteALl
# Range("A1:A1").PasteSpecial
# Paste: = xlPasteAll
# 'MsgBox Time()
#
# ' Format:="文本", Link:=False, DisplayAsIcon:=False
# End
# Sub


