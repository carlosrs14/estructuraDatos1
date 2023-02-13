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

void insertarCabeza(int d, Nodo*&cab, Nodo*&cola){
    Nodo *p =crearNodo(d, cab);
    cab=p;
    if(cola==NULL){
        cola=p;
    }
}

void insertarCola(int d, Nodo*&cab, Nodo*&cola){

    Nodo *p=cab;
    if(p==NULL){
        cab=crearNodo(d, NULL);
    }else{
        while(p->sgt!=NULL){
            p=p->sgt;
        }
        Nodo *nuevo =crearNodo(d, NULL);
        p->sgt=nuevo;
        cola=nuevo;
    }
}

void insertarDespues(int d, int db, Nodo*cab,Nodo*&cola){
    Nodo *q=buscar(db, cab);
    if(q!=NULL){
        Nodo *p =crearNodo(d, NULL); 
        p->sgt=q->sgt;
        q->sgt=p;
        if(q==cola){
            cola=p;
        }
    }else{
        cout<<"No se encontro el elemento a buscar"<<endl;
    }
}

void insertarAntes(int di,int db,Nodo *&cab, Nodo *&cola){
	Nodo *ant=NULL;
	for(Nodo *p=cab;p!=NULL;p=p->sgt){
		if(p->dato==db){
			if(p==cab){
				insertarCabeza(di, cab, cola);
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

void insertarColaOptimo(int d, Nodo * &cola){
    Nodo *p=crearNodo(d,NULL);
    cola->sgt=p;
    cola=p;
}

void modificarPorIndice(){
    return;
}

void eliminarCabeza(Nodo *&cab){
    if(cab==NULL){
        cout<<"Lista vacia"<<endl;
    }else{
        cab=cab->sgt;
    }
}

void eliminarIndice(int i, Nodo *&cab, Nodo *&cola){
    Nodo * p=cab;
    Nodo * ant=NULL;
    int indice=0;
    while(p!=NULL){
        if(i==0){
            if(p->sgt==NULL){
                cola=NULL;
            }
            eliminarCabeza(cab);
            return;
        }
        if(indice==i){
            ant->sgt=p->sgt;
            return;
        }
        indice++;
        ant=p;
        p=p->sgt;
    }
    cout<<"Fuera de rango"<<endl;
    return;
}

void eliminarDato(int d, Nodo *&cab, Nodo *&cola){
    Nodo * ant=NULL;
    Nodo * p=cab;
    while(p!=NULL){
        if(d==cab->dato){
            if(p->sgt==NULL){
                cola=NULL;
            }
            eliminarCabeza(cab);
            return;
        }
        if(d==p->dato){
            ant->sgt=p->sgt;
            return;
        }
        ant=p;
        p=p->sgt;
    }
    cout<<"Valor no encontrado"<<endl;
    return;
}

int contarRepeticiones(int d, Nodo * cab){
    int cont=0;
    while(cab!=NULL){
        if(d==cab->dato){
            cont++;
        }
        cab=cab->sgt;
    }
    return cont;
}