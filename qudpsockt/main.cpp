#include <QCoreApplication>
#include <QDebug>
#include <QHostAddress>
#include <QUdpSocket>
#include <QProcess>

QUdpSocket *serverudp;

void recv()
{
    while(serverudp->hasPendingDatagrams())
    {
        QByteArray data;
        data.resize(serverudp->pendingDatagramSize());
        serverudp->readDatagram(data.data(), data.size());
        //ui->textEdit_show->setText(QVariant(data).toString());
        qDebug() << data << "\n";

    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QProcess q;
    //q.startDetached("\"C:/Program Files/Notepad++/notepad++.exe\"");
    q.startDetached("C:/Users/Administrator/Documents/build-Qudpsockt-Desktop_Qt_5_11_2_MinGW_32bit-Debug/debug/Qudpsockt.exe",
                    QStringList("6678"));
//    q.setProgram("cmd");
//    q.start();
    //q.waitForFinished(5000);

    qDebug() << "hello world.\n";


   serverudp =new QUdpSocket();

    //serverudp->bind(5000,QUdpSocket::ShareAddress);//绑定读数据端口(监听端口)，允许其他服务绑定到此端口
    //serverudp->bind(QHostAddress("127.0.0.1"), 6677);
    serverudp->bind(QHostAddress("127.0.0.1"),6678);
    quint16 p = serverudp->localPort();

    QObject::connect(serverudp, &QUdpSocket::readyRead, serverudp, &recv);


    return a.exec();
}



//client

//#include <QCoreApplication>
//#include <QDebug>
//#include <QHostAddress>
//#include <QUdpSocket>

//int main(int argc, char *argv[])
//{
//    QCoreApplication a(argc, argv);
//    qDebug() << "hello world.\n";

//    QUdpSocket *mSocket;
//    mSocket = new QUdpSocket();

//    quint16 s_port = 6677;

//    if (argc > 1)
//    {
//        s_port = QString(argv[1]).toInt();
//    }
//    qDebug() << "s_port=" << s_port << "\n";

//    mSocket->writeDatagram(QString("haha").toUtf8(), QHostAddress("127.0.0.1"), s_port);
//    return a.exec();
//}


////setting
//QT -= gui
//QT += network

//CONFIG += c++11 console
//TEMPLATE = app


//CONFIG += static
//QMAKE_LFLAGS += -static


//LIBS += -lQt5Core


//#CONFIG   -= app_bundle

//# The following define makes your compiler emit warnings if you use
//# any feature of Qt which as been marked deprecated (the exact warnings
//# depend on your compiler). Please consult the documentation of the
//# deprecated API in order to know how to port your code away from it.
//DEFINES += QT_DEPRECATED_WARNINGS

//# You can also make your code fail to compile if you use deprecated APIs.
//# In order to do so, uncomment the following line.
//# You can also select to disable deprecated APIs only up to a certain version of Qt.
//#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

//SOURCES += \
//        main.cpp

//# Default rules for deployment.
//qnx: target.path = /tmp/$${TARGET}/bin
//else: unix:!android: target.path = /opt/$${TARGET}/bin
//!isEmpty(target.path): INSTALLS += target
