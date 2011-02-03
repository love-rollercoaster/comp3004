
#include "mapcontroller.h"
#include "mapform.h"
#include "mapview.h"
#include "facilitymapnode.h"

MapController::MapController()
{
    MapForm *mapForm = new MapForm();
    mapForm->show();

    mapView = mapForm->mapView();
}

MapController::~MapController()
{
}

void MapController::addFacility(Facility *facility)
{
    // FacilityMapNode *node = new FacilityMapNode(map, facility->getOccupancyRate(), facility->getType());
    FacilityMapNode *node = new FacilityMapNode(
            mapView,
            FacilityMapNode::LOW, // Needs to be determined by facility's
                                  // occupancy rate.
            facility->type
    );

    // node->setPos(
    //    convertFacilityCoordinatesToPixel(facility->coordinates)
    // );

    node->setPos(facility->coordinates);

    facilityMapNodes.append(node);
    mapView->addFacilityMapNode(node);
}
