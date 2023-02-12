#include <iostream>
#include <stdlib.h>
#include "listas.h"
using namespace std;

int main(){
    Nodo * cab=NULL;
    Nodo * cola=cab;
    //imprimirLista(cab);
    
    insertarCabeza(15, cab, cola);
    insertarCabeza(16, cab, cola);
    insertarCabeza(17, cab, cola);
    insertarCabeza(17, cab, cola);
    //imprimirLista(cab);

    insertarCola(18, cab, cola);
    insertarCola(19, cab, cola);
    insertarCola(20, cab, cola);
    insertarCola(17, cab, cola);
    //imprimirLista(cab);

    insertarDespues(21, 17, cab, cola);
    insertarDespues(22, 18, cab, cola);
    //imprimirLista(cab);

    insertarAntes(23, 18, cab, cola);
    insertarAntes(24, 21, cab, cola);
    insertarAntes(25, 24, cab, cola);
    insertarAntes(17, 20, cab, cola);
    //imprimirLista(cab);

    insertarAntes(26, 17, cab, cola);
    //imprimirLista(cab);

    insertarColaOptimo(27, cola);
    insertarColaOptimo(28, cola);
    insertarColaOptimo(29, cola);
    imprimirLista(cab);
    
    eliminarIndice(7,cab);
    eliminarIndice(0,cab);
    eliminarIndice(80,cab);
    imprimirLista(cab);


    eliminarDato(15, cab);
    eliminarDato(17, cab);
    imprimirLista(cab);

    eliminarTodos(17, cab);
    imprimirLista(cab);

    return 0;
}