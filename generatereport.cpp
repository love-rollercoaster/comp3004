#include "generatereport.h"
#include "ui_generatereport.h"
#include <QStringList>

GenerateReport::GenerateReport(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GenerateReport)

{
    ui->setupUi(this);
    QStringList *list = new QStringList();
    list->append("St. Victor's Nursing Home");
    list->append("Hole in the Wall Nursing Home");
    ui->listWidget->addItems(*list);
}

GenerateReport::~GenerateReport()
{
    delete ui;
}
