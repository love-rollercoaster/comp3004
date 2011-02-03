#include "viewfacilityinfo.h"
#include "ui_viewfacilityinfo.h"

ViewFacilityInfo::ViewFacilityInfo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ViewFacilityInfo)
{
    ui->setupUi(this);
}

ViewFacilityInfo::~ViewFacilityInfo()
{
    delete ui;
}
