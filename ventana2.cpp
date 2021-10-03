#include "ventana2.h"
#include "ui_ventana2.h"
#include "QMessageBox"

ventana2::ventana2(QWidget *parent,Agenda* _agenda) :
    QDialog(parent),
    ui(new Ui::ventana2),
    agenda(_agenda)
{
    ui->setupUi(this);
}

ventana2::~ventana2()
{
    delete ui;
}

void ventana2::on_pushButton_guardar_clicked()
{
    QString nombre = ui->lineEdit_nombre->text();
    QString _edad = ui->lineEdit_numero->text();
    int edad = _edad.toInt();
    agenda->nombre.enqueue(nombre);
    agenda->numeros.enqueue(edad);
    QMessageBox::information(this,"Exito", nombre + " guardado.");
}
