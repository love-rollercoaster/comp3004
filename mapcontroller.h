#ifndef MAPCONTROLLER_H
#define MAPCONTROLLER_H


#include "mapview.h"

class Facility;
class FacilityMapNode;

class MapController
{
public:
    MapController();
    ~MapController();
    void addFacility(Facility *facility);

private:
    MapView *mapView;
    QList<FacilityMapNode*> facilityMapNodes;
};

#endif // MAPCONTROLLER_H
