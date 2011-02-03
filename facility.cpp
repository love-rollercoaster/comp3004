#include "facility.h"

Facility::Facility(QPointF coordinates, int occupancyRate, FacilityTypes facilityType, QObject *parent)
    : QObject(parent),
      coordinates(coordinates),
      occupancyRate(occupancyRate),
      type(facilityType)
{
}
