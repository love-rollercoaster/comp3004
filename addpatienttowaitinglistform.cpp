#include "addpatienttowaitinglistform.h"
#include "ui_addpatienttowaitinglistform.h"

AddPatientToWaitingListForm::AddPatientToWaitingListForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddPatientToWaitingListForm)
{
    ui->setupUi(this);
    QStringList *list = new QStringList();
    list->append("Avon Barksdale");
    list->append("Brianna Barksdale");
    list->append("D'Angelo Barksdle");
    ui->listWidget->addItems(*list);
}

AddPatientToWaitingListForm::~AddPatientToWaitingListForm()
{
    delete ui;
}
