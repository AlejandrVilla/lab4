#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "agenda.h"
#include "ventana1.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_actionmostrar_usuarios_triggered();

    void on_actionagregar_contacto_triggered();

    void on_actionsalir_triggered();

    void on_actionacerca_QT_triggered();

private:
    Ui::MainWindow *ui;
    Agenda* agenda;
};
#endif // MAINWINDOW_H
