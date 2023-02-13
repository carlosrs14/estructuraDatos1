#include <iostream>
#include <stdlib.h>

using namespace std;

typedef struct nodo{
    int dato;
    struct nodo *sgt;
}Nodo;

Nodo * crearNodo(int d, Nodo *s){
    Nodo *p=(Nodo *) malloc(sizeof(Nodo));
    p->dato=d;
    p->sgt=s;
    return p;
}

void insertarCabeza(int d, Nodo *&cab){
    Nodo *p=crearNodo(d, cab);
    cab=p;
}

void imprimirLista(Nodo * cab){
    for(Nodo *p= cab; p!=NULL; p=p->sgt){
        cout<<"["<<p->dato<<"]->";
    }
    cout<<"NULL"<<endl;
}