#ifndef LOGINFORM_H
#define LOGINFORM_H

#include <QDialog>
#include <QLineEdit>
#include <QLabel>
#include <QPushButton>

class loginform : public QDialog
{
    Q_OBJECT
signals:
public:
    slots: void login();
private:
    QLabel *username1;
    QLineEdit *username2;
    QLabel *userpassword1;
    QLineEdit *userpassword2;
    QPushButton *loginB;
    QPushButton *esc;
};

#endif // LOGINFORM_H
