#ifndef VENTANA1_H
#define VENTANA1_H

#include <QDialog>
#include "agenda.h"

namespace Ui {
class ventana1;
}

class ventana1 : public QDialog
{
    Q_OBJECT

public:
    explicit ventana1(QWidget *parent = nullptr,Agenda* agenda = nullptr);
    ~ventana1();

private slots:
    void on_mostrar_contactos_clicked();
private:
    Ui::ventana1 *ui;
    Agenda* agenda;
};

#endif // VENTANA1_H
