#include <iostream>
#include <stdlib.h>
#include "listaCircularDoble.h"

using namespace std;

int main(){
    NodoC * cab=NULL;
    insertarCab(cab, 15);
    insertarCab(cab, 16);
    insertarCab(cab, 17);
    insertarCab(cab, 18);
    insertarCab(cab, 19);
    insertarCab(cab, 20);
    imprimir(cab);

    eliminar(cab, 20);
    imprimir(cab);


    return 0;
}