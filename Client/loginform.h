#ifndef LOGINFORM_H
#define LOGINFORM_H

#include <headers.h>

class loginform : public QDialog
{
    Q_OBJECT
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

#endif // LOGINFORM_H
