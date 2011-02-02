#include "movepatienttobed.h"
#include "ui_movepatienttobed.h"

MovePatientToBed::MovePatientToBed(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MovePatientToBed)
{
    ui->setupUi(this);
}

MovePatientToBed::~MovePatientToBed()
{
    delete ui;
}
