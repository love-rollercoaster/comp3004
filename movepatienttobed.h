#ifndef MOVEPATIENTTOBED_H
#define MOVEPATIENTTOBED_H

#include <QDialog>

namespace Ui {
    class MovePatientToBed;
}

class MovePatientToBed : public QDialog
{
    Q_OBJECT

public:
    explicit MovePatientToBed(QWidget *parent = 0);
    ~MovePatientToBed();

private:
    Ui::MovePatientToBed *ui;
};

#endif // MOVEPATIENTTOBED_H
