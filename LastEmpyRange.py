import win32com
from win32com.client import Dispatch, DispatchEx
from win32com.client import constants

#xlApp = win32com.client.Dispatch("Excel.Application")
xlApp = win32com.client.gencache.EnsureDispatch("Excel.Application")
file_path = "C:\\Users\\Administrator\\Desktop\\haha.xlsx"
xlApp.Visible = 0
xlApp.DisplayAlerts = 0
xlBook = xlApp.Workbooks.Open(file_path, False)
sh = xlBook.ActiveSheet


# e2 = xlBook.ActiveSheet.Range("B1048576").End(constants.xlUp).Row
# print(e2)

# lRow = sh.Cells.Find(What="*",
#                 After=xlBook.ActiveSheet.Range("A1"),
#                 LookAt=constants.xlPart,
#                 LookIn=constants.xlFormulas,
#                 SearchOrder=constants.xlByRows,
#                 SearchDirection=constants.xlPrevious,
#                 MatchCase=False).Row
# print(lRow)


#rFind = sh.Range("A1:D10")
# FindLastRow = sh.Cells.Find(What="*",
#                 After=xlBook.ActiveSheet.Cells(1),
#                 LookAt=constants.xlPart,
#                 LookIn=constants.xlFormulas,
#                 SearchOrder=constants.xlByRows,
#                 SearchDirection=constants.xlPrevious,
#                 MatchCase=False).Row
# print(FindLastRow)
#
# FindLastCol = sh.Cells.Find(What="*",
#                 After=xlBook.ActiveSheet.Cells(1),
#                 LookAt=constants.xlPart,
#                 LookIn=constants.xlFormulas,
#                 SearchOrder=constants.xlByColumns,
#                 SearchDirection=constants.xlPrevious,
#                 MatchCase=False).Column
# print(FindLastCol)

#print(xlBook.ActiveSheet.UsedRange.Rows.Count)
#print(xlBook.ActiveSheet.UsedRange.Columns.Count)


ss = sh.Range("A1：H10")
sr = ss.Rows.Count
sc = ss.Columns.Count
print("sr=",sr)
print("sc=",sc)
row = 0
for i in range(sr,0,-1):
    if row != 0:
        break;
    for j in range(1,sc+1):
        v = ss(i, j).Value
        if v is not None:
            row = i
            break;
print("row=",row)

col = 0
for i in range(sc,0,-1):
    if col != 0:
        break;
    for j in range(1,sr+1):
        v = ss(j, i).Value
        if v is not None:
            col = i
            break;
print("col=",col)


xlBook.Close(SaveChanges=True)
exit(0)

