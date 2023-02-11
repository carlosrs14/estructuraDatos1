#include <iostream>
#include <stdlib.h>
#include "listas.h"
using namespace std;

int main(){
    Nodo * cab=NULL;
    imprimirLista(cab);
    
    insertarCabeza(15, cab);
    insertarCabeza(16, cab);
    insertarCabeza(17, cab);
    imprimirLista(cab);

    insertarCola(18, cab);
    insertarCola(19, cab);
    insertarCola(20, cab);
    imprimirLista(cab);

    insertarDespues(21, 17, cab);
    insertarDespues(22, 18, cab);
    imprimirLista(cab);

    insertarAntes(23, 18, cab);
    insertarAntes(24, 21, cab);
    insertarAntes(25, 24, cab);
    imprimirLista(cab);
    
    insertarAntes(26, 17, cab);
    imprimirLista(cab);
    
    return 0;
}