
#include <QMessageBox>

#include "loginform.h"
#include "ui_loginform.h"

#include "usercontroller.h"



LoginForm::LoginForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginForm)
{
    ui->setupUi(this);
}

LoginForm::~LoginForm()
{
    delete ui;
}

void LoginForm::on_quitButton_clicked()
{
    QCoreApplication::quit();
}

void LoginForm::on_loginButton_clicked()
{
    if (UserController::CheckLogin(ui->usernameField->text(), ui->passwordField->text()))
        QMessageBox::about(this, tr("Success!"), tr("Successfully signed-in to the EOBC system!"));
}
