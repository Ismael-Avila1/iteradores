#include "citerador.h"

cIterador::cIterador() {}

void cIterador::setNodo(cNodo *pNodo) {
    pActual = pNodo;
}

cNodo* cIterador::getNodo() {
    return pActual;
}

void cIterador::avanzar() {
    pActual = pActual->pSig;
}

void cIterador::retroceder() {
    pActual = pActual->pAnt;
}

void cIterador::setContenido(float newCont) {
    pActual->dato = newCont;
}

float cIterador::getContenido() {
    return pActual->dato;
}

void cIterador::insertarAdelante(float d) {
    pActual->insertarAdelante(d);
}

float cIterador::eliminarAdelante() {
   return pActual->eliminarAdelante();
}
