#ifndef FACILITY_H
#define FACILITY_H

#include <QObject>
#include <QPointF>

// FAKE OBJECT
// ONLY USED FOR MAP PROTOTYPE

class Facility : public QObject
{
    Q_OBJECT
public:

    enum FacilityTypes {
        HOSPITAL,
        NURSING_HOME,

        _FACILITY_TYPES_SIZE
    };

    explicit Facility(
        QPointF coordinates,
        int occupancyRate,
        FacilityTypes facilityType,
        QObject *parent = 0
    );

    QPointF coordinates; // Pixel values, only for the prototype.
    int occupancyRate;
    FacilityTypes type;

signals:

public slots:

};

#endif // FACILITY_H
