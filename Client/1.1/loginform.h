#ifndef LOGINFORM_H
#define LOGINFORM_H

#include <headers.h>

class loginform : public QDialog
{
    Q_OBJECT
    friend class mainform;
public:
    explicit loginform(QDialog *parent = 0);
signals:

public slots:
    void logindb();
    void loginserver();
public:
    QLabel *username1;
    QLineEdit *username2;
    QLabel *userpassword1;
    QLineEdit *userpassword2;
    QPushButton *loginSB;
    QPushButton *loginB;
    QPushButton *esc;
    QTcpSocket *socket1;

};

class mainform : public QMainWindow
{
    Q_OBJECT
public:
    explicit mainform(QWidget *parent = 0);
private:
    QTextEdit *input;
    QTextBrowser *displaytext;
    QLineEdit *ipinput;
    QPushButton *sendp;
    QUdpSocket *usocket1;
    QUdpSocket *usocket2;

public slots:
    void send();
    void receive();
};

#endif // LOGINFORM_H
