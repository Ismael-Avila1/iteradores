#include "cnodo.h"

cNodo::cNodo() {
     pAtn = nullptr;
     pSig = nullptr;
}

cNodo::cNodo(float d) {
    dato = d;
    pAtn = nullptr;
    pSig = nullptr;
}

void cNodo::insertarAdelante(float d) {
    cNodo* newNode = new cNodo(d);

    newNode->pSig = this->pSig;
    newNode->pAtn = this;

    this->pSig = newNode;
    this->pSig->pSig->pAtn = newNode;
}

float cNodo::eliminarAdelante() {
    float d;
    d = this->pSig->dato;

    this->pSig = this->pSig->pSig;
    delete this->pSig->pAtn;
    this->pSig->pAtn = this;

    return d;
}
