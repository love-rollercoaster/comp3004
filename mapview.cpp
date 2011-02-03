#include <QtGui>
#include <math.h>
#include <QGraphicsPixmapItem>
#include <QtSvg/QGraphicsSvgItem>

#include "mapview.h"
#include "facilitymapnode.h"
#include "facility.h"

MapView::MapView(QWidget *parent) : QGraphicsView(parent)
{
    image = new QGraphicsSvgItem(":/img/map.svg");
    QGraphicsScene *scene = new QGraphicsScene(this);

    scene->addItem(image);

    scene->setItemIndexMethod(QGraphicsScene::NoIndex);
    setScene(scene);
    setRenderHint(QPainter::Antialiasing);
    setRenderHint(QPainter::SmoothPixmapTransform);
    setCacheMode(CacheBackground);

    setViewportUpdateMode(BoundingRectViewportUpdate);
    setResizeAnchor(NoAnchor);
}


void MapView::mousePressEvent(QMouseEvent *event)
{
    FacilityMapNode *node;

    if (event->button() == Qt::LeftButton)
        node = new FacilityMapNode(this, FacilityMapNode::LOW, Facility::HOSPITAL);
    else
        node = new FacilityMapNode(this, FacilityMapNode::LOW, Facility::NURSING_HOME);

    node->setPos(event->pos().x() - this->x(), event->pos().y() - this->y());
    this->scene()->addItem(node);

    qDebug("%d || %d", event->pos().x(), event->pos().y());
}


void MapView::addFacilityMapNode(FacilityMapNode *node)
{
    this->scene()->addItem(node);
}

void MapView::resizeEvent(QResizeEvent *event)
{
    fitInView(this->sceneRect());
}
