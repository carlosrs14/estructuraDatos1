#include <stdlib.h>
#include <iostream>
#include "listasD.h"

using namespace std; 

int main(){

    NodoDoble *cab=NULL;

    insertarCabD(cab, 15);
    insertarCabD(cab, 16);
    insertarCabD(cab, 17);
    insertarCabD(cab, 18);
    mostrarListaD(cab);

    insertarColaD(cab, 19);
    insertarColaD(cab, 20);
    insertarColaD(cab, 21);
    mostrarListaD(cab);

    insertarAntesD(cab, 22, 20);
    insertarAntesD(cab, 23, 16);
    insertarAntesD(cab, 24, 18);
    mostrarListaD(cab);
    
    insertarDespuesD(cab, 25,21);
    insertarDespuesD(cab, 26,18);
    mostrarListaD(cab);

    eliminarD(cab,24);
    eliminarD(cab,25);
    eliminarD(cab,15);
    mostrarListaD(cab);

    return 0;
}