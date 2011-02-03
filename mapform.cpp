#include "mapform.h"
#include "ui_mapform.h"
#include "mapview.h"

MapForm::MapForm(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MapForm)
{
    ui->setupUi(this);
    setupMenuBar();
}

MapForm::~MapForm()
{
    delete ui;
}


MapView* MapForm::mapView()
{
    return ui->mapView;
}


void MapForm::setupMenuBar()
{
    QMenuBar *menubar = new QMenuBar(this);
    this->setMenuBar(menubar);
    menubar->addMenu(new QMenu("&File"));
    menubar->addMenu(new QMenu("&View"));
}
