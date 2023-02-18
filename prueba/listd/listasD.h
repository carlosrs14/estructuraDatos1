#include <stdlib.h>
#include <iostream>

using namespace std;

typedef struct nodo_d{
    int dato;
    struct nodo_d * ant;
    struct nodo_d * sgt;
}NodoDoble;

NodoDoble * crearNodoD(NodoDoble *a, int d, NodoDoble * s){
    NodoDoble *p= (NodoDoble *) malloc(sizeof(NodoDoble));
    p->ant=a;
    p->dato=d;
    p->sgt=s;
    return p;
}

void insertarCabD(NodoDoble *&cab, int d){
    if(cab==NULL){
        cab=crearNodoD(NULL, d, NULL);
    }else{
        cab->ant=crearNodoD(NULL, d, cab);
        cab=cab->ant;
    }
}

void insertarColaD(NodoDoble *&cab, int d){
    if(cab==NULL){
        cab=crearNodoD(NULL, d, NULL);
    }else{
        for(NodoDoble *p=cab; p!=NULL; p=p->sgt){
            if(p->sgt==NULL){
                p->sgt=crearNodoD(p,d,NULL);
                p->sgt->ant=p;
                return;
            }
        }
    }
}

NodoDoble * buscar(NodoDoble *cab, int d){
    for(NodoDoble *p=cab; p!=NULL; p=p->sgt){
        if(p->dato==d){
            return p;
        }
    }
    return NULL;
}

void insertarAntesD(NodoDoble *&cab, int di, int db){
    NodoDoble *p=buscar(cab, db);
    if(p!=NULL){
        if(p==cab){
            insertarCabD(cab, di);
        }else{
            p->ant=crearNodoD(p->ant, di, p);
            p->ant->ant->sgt=p->ant;
        }
    }else{
        cout<<"No se encontro el dato"<<endl;
    }
}

void insertarDespuesD(NodoDoble *cab, int di, int db){
    NodoDoble *p = buscar(cab, db);
    if(p!=NULL){
        p->sgt=crearNodoD(p,di,p->sgt);
        if(p->sgt->sgt!=NULL){
            p->sgt->sgt->ant=p->sgt;
        }
    }else{
        cout<<"No se encontro el dato"<<endl;
    }
}

void eliminarD(NodoDoble *&cab, int de){
    NodoDoble *p=buscar(cab, de);
    if(p!=NULL){
        if(p==cab){
            p->sgt->ant=NULL;
            cab=p->sgt;
        }else{
            p->ant->sgt=p->sgt;
            if(p->sgt!=NULL){
                p->sgt->ant=p->ant;
            }
        }
    }else{
        cout<<"No se encontro el dato"<<endl;
    }
}

void mostrarListaD(NodoDoble *cab){
    NodoDoble *p;
    for(p=cab; p!=NULL; p=p->sgt){
        cout<<"["<<p->dato<<"]<=>";
        if(p->sgt==NULL)
            break;
    }
    cout<<"NULL"<<endl;
    for(; p!=NULL; p=p->ant){
        cout<<"["<<p->dato<<"]<=>";
        if(p->ant==NULL)
            break;
    }
    cout<<"NULL"<<endl<<endl;   
}