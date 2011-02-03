#ifndef VIEWFACILITYINFO_H
#define VIEWFACILITYINFO_H

#include <QMainWindow>

namespace Ui {
    class ViewFacilityInfo;
}

class ViewFacilityInfo : public QMainWindow
{
    Q_OBJECT

public:
    explicit ViewFacilityInfo(QWidget *parent = 0);
    ~ViewFacilityInfo();

private:
    Ui::ViewFacilityInfo *ui;
};

#endif // VIEWFACILITYINFO_H
