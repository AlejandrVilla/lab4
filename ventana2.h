#ifndef VENTANA2_H
#define VENTANA2_H

#include <QDialog>
#include "agenda.h"

namespace Ui {
class ventana2;
}

class ventana2 : public QDialog
{
    Q_OBJECT

public:
    explicit ventana2(QWidget *parent = nullptr,Agenda* agenda = nullptr);
    ~ventana2();

private slots:
    void on_pushButton_guardar_clicked();

private:
    Ui::ventana2 *ui;
    Agenda* agenda;
};

#endif // VENTANA2_H
