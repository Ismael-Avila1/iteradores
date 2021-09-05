#include <iostream>

#include "clista.h"
#include "citerador.h"

using namespace std;

int main() {

    cLista lst;

    lst.insertarAdelante(6);
    lst.insertarAdelante(68);
    lst.insertarAdelante(29);
    lst.insertarAdelante(4);
    lst.insertarAdelante(23);
    lst.insertarAdelante(5);
    lst.insertarAdelante(42);
    lst.insertarAdelante(1);
    lst.insertarAdelante(11);

    lst.insertarAlFinal(4);
    lst.insertarAlFinal(6);
    lst.insertarAlFinal(1);
    lst.insertarAlFinal(2);
    lst.insertarAlFinal(34);
    lst.insertarAlFinal(68);
    lst.insertarAlFinal(7);
    lst.insertarAlFinal(7);
    lst.insertarAlFinal(6);
    lst.insertarAlFinal(12);


    // imprimr
    cIterador it;

    for(it.setNodo(lst.begin()); it.getNodo()!=lst.end(); it.avanzar())
        cout << it.getContenido() << ", ";

    cout << endl << endl;


    // cuente
    int cont = 0;
    float num = 68;

    for(it.setNodo(lst.begin()); it.getNodo()!=lst.end(); it.avanzar())
        if(it.getContenido() == num)
            cont++;
    cout << "Hay " << cont << " numero " << num << endl;

    cout << endl << endl;



    // elimine
    float eliminarNum = 11;
    for(it.setNodo(lst.begin()); it.getNodo()!=lst.end(); it.avanzar()) {
        if(it.getContenido() == eliminarNum){
            it.retroceder();
            cout << "Eliminando... " <<it.eliminarAdelante() << endl;
        }
    }

    // imprimr de nuevo
    for(it.setNodo(lst.begin()); it.getNodo()!=lst.end(); it.avanzar())
        cout << it.getContenido() << ", ";

    cout << endl << endl;


    // duplicar
    float duplicarNum = 4;

    for(it.setNodo(lst.begin()); it.getNodo()!=lst.end(); it.avanzar())
        if(it.getContenido() == duplicarNum) {
            it.retroceder();
            it.insertarAdelante(duplicarNum);
            it.avanzar();
            it.avanzar();
        }

    // imprimir de nuevo
    for(it.setNodo(lst.begin()); it.getNodo()!=lst.end(); it.avanzar())
        cout << it.getContenido() << ", ";

    return 0;
}







