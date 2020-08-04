#include <loginform.h>
#include <QMessageBox>

loginform::loginform(QDialog *parent) : QDialog(parent)
{
    this->setWindowTitle("登陆界面");

    username1 = new QLabel(this);
    username1->move(70, 80);
    username1->setText("用户名");

    username2 = new QLineEdit(this);
    username2->move(120, 80);
    username2->setEchoMode(QLineEdit::Normal);

    userpassword1 = new QLabel(this);
    userpassword1->move(70, 130);
    userpassword1->setText("密码");

    userpassword2 = new QLineEdit(this);
    username2->move(120, 130);
    username2->setEchoMode(QLineEdit::Password);

    loginB = new QPushButton(this);
    loginB->move(70, 200);
    loginB->setText("登录");
    connect(loginB, &QPushButton::clicked(),  this, &loginform::login);

    esc = new QPushButton(this);
    esc->move(170, 200);
    esc->setText("退出");
    connect(esc, &QPushButton::clicked(), this, &loginform::close);

}
