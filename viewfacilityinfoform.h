#ifndef VIEWFACILITYINFOFORM_H
#define VIEWFACILITYINFOFORM_H

#include <QDialog>

namespace Ui {
    class ViewFacilityInfoForm;
}

class ViewFacilityInfoForm : public QDialog
{
    Q_OBJECT

public:
    explicit ViewFacilityInfoForm(QWidget *parent = 0);
    ~ViewFacilityInfoForm();

private:
    Ui::ViewFacilityInfoForm *ui;
};

#endif // VIEWFACILITYINFOFORM_H
