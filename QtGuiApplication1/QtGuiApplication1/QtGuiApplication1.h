#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtGuiApplication1.h"

class QtGuiApplication1 : public QMainWindow
{
	Q_OBJECT

public:
	QtGuiApplication1(QWidget *parent = Q_NULLPTR);
	virtual bool nativeEvent(const QByteArray &eventType, void *message, long *result);

private:
	Ui::QtGuiApplication1Class ui;
};
