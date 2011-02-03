#include <QtGui>
#include <math.h>
#include <QGraphicsPixmapItem>

#include "mapview.h"
#include "facilitymapnode.h"

MapView::MapView(QWidget *parent) : QGraphicsView(parent)
{
    mapImage = QPixmap(":/img/map.png");

    QGraphicsScene *scene = new QGraphicsScene(this);

    scene->addPixmap(mapImage);

    scene->setItemIndexMethod(QGraphicsScene::NoIndex);
    setScene(scene);
    setRenderHint(QPainter::Antialiasing);
    setRenderHint(QPainter::SmoothPixmapTransform);
    setCacheMode(CacheBackground);

    setViewportUpdateMode(BoundingRectViewportUpdate);
    setResizeAnchor(NoAnchor);
}


void MapView::addFacilityMapNode(FacilityMapNode *node)
{
    this->scene()->addItem(node);
}

void MapView::resizeEvent(QResizeEvent *event)
{
    fitInView(this->sceneRect());
}
