#include "addpatienttobedform.h"
#include "ui_addpatienttobedform.h"

AddPatientToBedForm::AddPatientToBedForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddPatientToBedForm)
{
    ui->setupUi(this);
}

AddPatientToBedForm::~AddPatientToBedForm()
{
    delete ui;
}
