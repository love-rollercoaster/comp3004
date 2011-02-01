#include "createfacilityform.h"
#include "ui_createfacilityform.h"

CreateFacilityForm::CreateFacilityForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateFacilityForm)
{
    ui->setupUi(this);
}

CreateFacilityForm::~CreateFacilityForm()
{
    delete ui;
}
