#ifndef AGENDA_H
#define AGENDA_H
#include "stack.h"
#include "queue.h"

#include <QObject>

class Agenda : public QObject
{
    Q_OBJECT
public:
    explicit Agenda(QObject *parent = nullptr);

public:
    Queue<QString> nombre;
    Queue<int> numeros;
    Stack<QString> nombresAux;
    Stack<int> numerosAux;
};

#endif // AGENDA_H
