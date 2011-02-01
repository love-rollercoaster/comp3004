#include "createuserform.h"
#include "ui_createuserform.h"

CreateUserForm::CreateUserForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateUserForm)
{
    ui->setupUi(this);
}

CreateUserForm::~CreateUserForm()
{
    delete ui;
}
