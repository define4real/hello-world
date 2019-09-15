#include "QtGuiApplication1.h"
#include <Windows.h>
#include "AccessBridgeCalls.h"
QtGuiApplication1::QtGuiApplication1(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	BOOL result = initializeAccessBridge();
	SetTimer((HWND)this->winId(), 1, 1000, NULL);
}

bool QtGuiApplication1::nativeEvent(const QByteArray &eventType, void *message, long *result)
{
	MSG* msg = (MSG*)message;
	switch (msg->message)
	{
		case WM_CREATE:
		{
			
		}
		break;

		case WM_CLOSE:
		{
			KillTimer((HWND)this->winId(), 1);
			shutdownAccessBridge();
			int haha = 1;
		}
		break;

		case WM_TIMER:
		{
			HWND hwnd = ::FindWindowA("SunAwtFrame", NULL);
			if (IsJavaWindow(hwnd))
			{
				long vmID;
				AccessibleContext ac;
				if (GetAccessibleContextFromHWND(hwnd, &vmID, &ac))
				{
					int x = 77;
					int y = 188;
					AccessibleContext cc;
					if (GetAccessibleContextAt(vmID, ac, x, y, &cc))
					{
						AccessibleContextInfo info;
						GetAccessibleContextInfo(vmID, cc, &info);
						int c = 0;
						printf("调用了WinMain函数\n");
					}
				}
			}
		}
			break;
	}

	return false;
}
