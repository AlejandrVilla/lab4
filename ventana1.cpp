#include "ventana1.h"
#include "ui_ventana1.h"
#include "QMessageBox"

ventana1::ventana1(QWidget *parent,Agenda* _agenda) :
    QDialog(parent),
    ui(new Ui::ventana1),
    agenda(_agenda)
{
    ui->setupUi(this);
}

ventana1::~ventana1()
{
    delete ui;
}

void ventana1::on_mostrar_contactos_clicked()
{
    if(agenda->numeros.isEmpty())
        QMessageBox::critical(this,"Error", " No hay contactos para listar ");
    ui->text_contactos->clear();
    QString content;
    while( !agenda->nombre.isEmpty() )
    {
        content+= "Nombre: " + agenda->nombre.value() + "\n";
        content+= "Teléfono: " + QString::number(agenda->numeros.value()) + "\n";
        content+= "======================\n\n";
        agenda->nombresAux.push( agenda->nombre.value() );
        agenda->nombre.dequeue();
        agenda->numerosAux.push( agenda->numeros.value() );
        agenda->numeros.dequeue();
    }
    ui->text_contactos->setPlainText(content);
    while( !agenda->nombresAux.isEmpty() )
    {
        agenda->nombre.enqueue( agenda->nombresAux.top() );
        agenda->nombresAux.pop();
    }
    while( !agenda->numerosAux.isEmpty() )
    {
        agenda->numeros.enqueue( agenda->numerosAux.top() );
        agenda->numerosAux.pop();
    }
}




