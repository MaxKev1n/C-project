#ifndef MAINFORM_H
#define MAINFORM_H
#include <headers.h>
#include <tcpserver.h>
#include <tcpsocket.h>

class mainform : public QMainWindow
{
    Q_OBJECT
public:
    explicit mainform(QWidget *parent = 0);
    TcpServer *server;
    QTextBrowser *display;
    QUdpSocket *udp;

public slots:
    void receiceudp();
};
#endif // MAINFORM_H
