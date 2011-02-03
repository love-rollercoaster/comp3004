#include <QGraphicsScene>
#include <QPainter>
#include <QStyleOption>
#include <QString>

#include "facilitymapnode.h"
#include "mapview.h"


QString FacilityMapNode::facilityTypeToImageMap[] = {
   ":/img/facilitymapnode/hospital.png",    // HOSPITAL
   ":/img/facilitymapnode/nursing_home.jpg" //
};


FacilityMapNode::FacilityMapNode(MapView *map, OccupancyRateStatuses status, Facility::FacilityTypes type)
    : QGraphicsPixmapItem(facilityTypeToImageMap[type]),
      occupancyRateStatus(status),
      facilityType(type)
{
    setZValue(1);
    scale(0.10, 0.10);
}


/*
QRectF FacilityMapNode::boundingRect() const
{
    return facilityImage.rect();
}


void FacilityMapNode::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *)
{
    painter->drawPixmap(0, 0, facilityImage);

}
*/
