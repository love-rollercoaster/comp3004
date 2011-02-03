#ifndef MAPWIDGET_H
#define MAPWIDGET_H

#include <QtGui/QGraphicsView>
#include <QtGui/QPixmap>

class FacilityMapNode;

class MapView : public QGraphicsView
{
    Q_OBJECT

public:
    MapView(QWidget *parent = 0);
    void addFacilityMapNode(FacilityMapNode *node);

protected:
    void resizeEvent ( QResizeEvent * event );

private:
    QPixmap mapImage;

};

#endif // MAPWIDGET_H
