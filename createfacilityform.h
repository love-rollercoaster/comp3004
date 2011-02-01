#ifndef CREATEFACILITYFORM_H
#define CREATEFACILITYFORM_H

#include <QDialog>

namespace Ui {
    class CreateFacilityForm;
}

class CreateFacilityForm : public QDialog
{
    Q_OBJECT

public:
    explicit CreateFacilityForm(QWidget *parent = 0);
    ~CreateFacilityForm();

private:
    Ui::CreateFacilityForm *ui;
};

#endif // CREATEFACILITYFORM_H
