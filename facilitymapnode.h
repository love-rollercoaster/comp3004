#ifndef MAPNODE_H
#define MAPNODE_H

#include <QGraphicsPixmapItem>
#include <QList>

#include "facility.h"

class MapView;

class FacilityMapNode : public QGraphicsPixmapItem
{
public:
    enum OccupancyRateStatuses { LOW, MEDIUM, HIGH };

    FacilityMapNode(
        MapView *map,
        OccupancyRateStatuses status,
        Facility::FacilityTypes type
    );


    void setOccupancyRateStatus(OccupancyRateStatuses status);
    // void setFacilityType(FacilityTypes type);

    // QGraphicItem functions
    // QRectF boundingRect() const;
    //void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
    //           QWidget *widget);


private:
    static QString facilityTypeToImageMap[Facility::_FACILITY_TYPES_SIZE];

    // MapView *map;
    OccupancyRateStatuses occupancyRateStatus;
    Facility::FacilityTypes facilityType;

    Facility *facility;
};

#endif
