#ifndef MAPWIDGET_H
#define MAPWIDGET_H

#include <QtGui/QGraphicsView>
#include <QtSvg/QGraphicsSvgItem>

class FacilityMapNode;

class MapView : public QGraphicsView
{
    Q_OBJECT

public:
    MapView(QWidget *parent = 0);
    void addFacilityMapNode(FacilityMapNode *node);

protected:
    void resizeEvent ( QResizeEvent * event );
    void mousePressEvent(QMouseEvent *event);

private:
    QGraphicsSvgItem *image;

};

#endif // MAPWIDGET_H
