#ifndef REMOVEPATIENTFROMBEDFORM_H
#define REMOVEPATIENTFROMBEDFORM_H

#include <QDialog>

namespace Ui {
    class RemovePatientFromBedForm;
}

class RemovePatientFromBedForm : public QDialog
{
    Q_OBJECT

public:
    explicit RemovePatientFromBedForm(QWidget *parent = 0);
    ~RemovePatientFromBedForm();

private:
    Ui::RemovePatientFromBedForm *ui;
};

#endif // REMOVEPATIENTFROMBEDFORM_H
