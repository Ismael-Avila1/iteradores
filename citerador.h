#ifndef CITERADOR_H
#define CITERADOR_H

#include "cnodo.h"

class cIterador
{
private:
    cNodo* pActual;

public:
    cIterador();

    void setNodo(cNodo* pNodo);
    cNodo* getNodo();

    void avanzar();
    void retroceder();

    void setContenido(float newCont);
    float getContenido();

    void insertarAdelante(float d);
    float eliminarAdelante();
};

#endif // CITERADOR_H
