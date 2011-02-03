#include "viewreportform.h"
#include "ui_viewreport.h"
#include <QGraphicsView>

ViewReportForm::ViewReportForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewReportForm)
{
    ui->setupUi(this);

    QPixmap graphImage = QPixmap(":/img/graph.png");

    QGraphicsScene *scene = new QGraphicsScene(this);

    scene->addPixmap(graphImage);
    scene->setItemIndexMethod(QGraphicsScene::NoIndex);

    ui->graphView->setRenderHint(QPainter::Antialiasing);
    ui->graphView->setRenderHint(QPainter::SmoothPixmapTransform);
    ui->graphView->setCacheMode(QGraphicsView::CacheBackground);

    ui->graphView->setViewportUpdateMode(QGraphicsView::BoundingRectViewportUpdate);
    ui->graphView->setResizeAnchor(QGraphicsView::NoAnchor);

    ui->graphView->setScene(scene);
}

ViewReportForm::~ViewReportForm()
{
    delete ui;
}
