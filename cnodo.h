#ifndef CNODO_H
#define cNODO_H

class cNodo {
private:
    float dato;
    cNodo* pAtn;
    cNodo* pSig;

    cNodo();
    cNodo(float);

    void insertarAdelante(float);
    float eliminarAdelante();

    friend class cLista;
};

#endif // NODE_H
