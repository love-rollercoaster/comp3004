#ifndef MAPFORM_H
#define MAPFORM_H

#include <QWidget>
#include <QMainWindow>
#include <QMenuBar>
#include "mapcontroller.h"

namespace Ui {
    class MapForm;
}

class MapView;
class MapController;

class MapForm : public QMainWindow
{
    friend class MapController;

    Q_OBJECT

public:
    explicit MapForm(QWidget *parent = 0);
    ~MapForm();

    MapView* mapView();

private:
    Ui::MapForm *ui;

    void setupMenuBar();
};

#endif // MAPFORM_H
