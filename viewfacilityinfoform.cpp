#include "viewfacilityinfoform.h"
#include "ui_viewfacilityinfoform.h"

ViewFacilityInfoForm::ViewFacilityInfoForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewFacilityInfoForm)
{
    ui->setupUi(this);
}

ViewFacilityInfoForm::~ViewFacilityInfoForm()
{
    delete ui;
}
