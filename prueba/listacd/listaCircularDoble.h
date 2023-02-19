#include <iostream>
#include <stdlib.h>

using namespace std;

typedef struct nodoc{
    int dato;
    struct nodoc *sgt;
    struct nodoc *ant;
}NodoC;

NodoC * crearNodo(NodoC *a, int d, NodoC *s){
    NodoC * p=(NodoC *)malloc(sizeof(NodoC));
    p->ant=a;
    p->dato=d;
    p->sgt=s;
    return p;
}

void insertarCab(NodoC *&cab, int d){
    NodoC *p=crearNodo(NULL, d, NULL);
    if(cab==NULL){
        p->ant=p;
        p->sgt=p;
    }else{
        p->ant=cab;
        p->sgt=cab->sgt;
        p->sgt->ant=p;
        cab->sgt=p;
    }
    cab=p;
}

NodoC * buscar(NodoC *cab, int d){
    if(cab->dato==d){
        return cab;
    }
    for (NodoC * p=cab->sgt; p!=cab; p=p->sgt){
        if(p->dato==d){
            return p;
        }
    }
    return NULL;
    
}

void eliminar(NodoC *&cab, int d){
    NodoC *p=buscar(cab, d);
    if(p!=NULL){
        p->ant->sgt=p->sgt;
        p->sgt->ant=p->ant;
        if(p==cab){
            cab=p->ant;
        }
        cout<<"Eliminado"<<endl;
        return;
    }
    cout<<"NO encontrado"<<endl;
}

void imprimir(NodoC * cab){
    NodoC*p=cab->sgt;
    for(p; p!=cab; p=p->sgt){
        cout<<"["<<p->dato<<"]<=>";
    }
    cout<<"["<<p->dato<<"]<=>"<<endl;
    for(p; p!=cab->sgt; p=p->ant){
        cout<<"["<<p->dato<<"]<=>";
    }
    cout<<"["<<p->dato<<"]<=>"<<endl<<endl;
}