#include "removepatientfrombedform.h"
#include "ui_removepatientfrombedform.h"

RemovePatientFromBedForm::RemovePatientFromBedForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RemovePatientFromBedForm)
{
    ui->setupUi(this);
}

RemovePatientFromBedForm::~RemovePatientFromBedForm()
{
    delete ui;
}
