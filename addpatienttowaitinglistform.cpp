#include "addpatienttowaitinglistform.h"
#include "ui_addpatienttowaitinglistform.h"

AddPatientToWaitingListForm::AddPatientToWaitingListForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddPatientToWaitingListForm)
{
    ui->setupUi(this);
}

AddPatientToWaitingListForm::~AddPatientToWaitingListForm()
{
    delete ui;
}
