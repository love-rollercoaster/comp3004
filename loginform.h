#ifndef LOGINFORM_H
#define LOGINFORM_H

#include <QDialog>

namespace Ui {
    class LoginForm;
}

class LoginForm : public QDialog
{
    Q_OBJECT

public:
    explicit LoginForm(QWidget *parent = 0);
    ~LoginForm();

private slots:
    void on_quitButton_clicked();

    void on_loginButton_clicked();

private:
    Ui::LoginForm *ui;
};

#endif // LOGINFORM_H
