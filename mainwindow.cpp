#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ventana1.h"
#include "ventana2.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    agenda = new Agenda;
    ui->setupUi(this);
    ui->stackedWidget->addWidget(new ventana1(this,agenda));
    ui->stackedWidget->addWidget(new ventana2(this,agenda));
    setCentralWidget(ui->stackedWidget);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete agenda;
}

void MainWindow::on_actionmostrar_usuarios_triggered()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_actionagregar_contacto_triggered()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_actionsalir_triggered()
{
    close();
}

void MainWindow::on_actionacerca_QT_triggered()
{
    QMessageBox::aboutQt(this,"QT");
}




