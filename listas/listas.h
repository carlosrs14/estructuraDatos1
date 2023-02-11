#include <iostream>
#include <stdlib.h>
using namespace std;

typedef struct nodo{
    int dato;
    struct nodo *sgt;
}Nodo;

Nodo * crearNodo(int d, Nodo * s){
    Nodo * p =(Nodo *)malloc(sizeof(Nodo));
    p->dato=d;
    p->sgt=s;
    return p;
}

Nodo * buscar(int db, Nodo*cab){
    Nodo *p=cab;
    while (p!=NULL){
        if(p->dato==db){
            return p;
        }
        p=p->sgt;
    }
    return NULL;
}

void insertarCabeza(int d, Nodo*&cab){
    Nodo *p =crearNodo(d, cab);
    cab=p;
}

void insertarCola(int d, Nodo*&cab){

    Nodo *p=cab;
    if(p==NULL){
        cab=crearNodo(d, NULL);
    }else{
        while(p->sgt!=NULL){
            p=p->sgt;
        }
        Nodo *nuevo =crearNodo(d, NULL);
        p->sgt=nuevo;
    }
}

void insertarDespues(int d, int db, Nodo*cab){
    Nodo *q=buscar(db, cab);
    if(q!=NULL){
        Nodo *p =crearNodo(d, NULL); 
        p->sgt=q->sgt;
        q->sgt=p;
    }else{
        cout<<"No se encontro el elemento a buscar"<<endl;
    }
}

void insertarAntes(int di,int db,Nodo *&cab){
	Nodo *ant=NULL;
	for(Nodo *p=cab;p!=NULL;p=p->sgt){
		if(p->dato==db){
			if(p==cab){
				insertarCabeza(di, cab);
			}else{
				ant->sgt=crearNodo(di,p);
			}
			
		}
		ant=p;
	}
}

void imprimirLista(Nodo * cab){
    for(Nodo * p=cab; p!=NULL; p=p->sgt){
        cout<<"["<<p->dato<<"]->";
    }
    cout<<"NULL"<<endl;
}
