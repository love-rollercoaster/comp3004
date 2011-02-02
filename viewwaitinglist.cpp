#include "viewwaitinglist.h"
#include "ui_viewwaitinglist.h"

ViewWaitingList::ViewWaitingList(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewWaitingList)
{
    ui->setupUi(this);
}

ViewWaitingList::~ViewWaitingList()
{
    delete ui;
}
