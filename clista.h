#ifndef CLISTA_H
#define CLISTA_H

#include <iostream>
#include "cnodo.h"

class cLista {
private:
    cNodo inicio;
    cNodo final;

public:
    cLista();
    ~cLista();

    void insertarAdelante(float d);
    void insertarAlFinal(float d);

    float eliminarAdelante();
    float eliminarAlFinal();

    int size();

    bool isEmpty();
    bool isFull();

    void imprimir();
};

#endif // CLISTA_H
