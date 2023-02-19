//Dada una estructura con elementos repetidos hacer un algoritmo que deje una sola ocurrencia de los elementos.
#include <iostream>
using namespace std;

typedef struct nodo{
    int dato;
    struct nodo *sgt;
    struct nodo *ant;    
}Nodo;

Nodo * crearNodo(Nodo *a, int d, Nodo *s){
    Nodo * p =(Nodo *) malloc(sizeof(Nodo));
    p->ant=a;
    p->dato=d;
    p->sgt=s;
    return p;

}

void insertarCab(Nodo *&cab, int d){
    Nodo * p=crearNodo(NULL, d, cab);
    if(cab!=NULL)
        cab->ant=p;
    cab=p;
}

void imprimir(Nodo *cab){
    for(Nodo *p=cab; p!=NULL; p=p->sgt){
        cout<<"["<<p->dato<<"]->";
    }
    cout<<"NULL"<<endl;
}

void eliminarRepetidos(Nodo *cab){
    int cont=0;
    for(Nodo *p=cab;p!=NULL; p=p->sgt){
        for(Nodo *q=p->sgt;q!=NULL; q=q->sgt){
            if(p->dato==q->dato){
                if(q==NULL)
                    return;
                if(q->sgt!=NULL){
                    q->sgt->ant=q->ant;
                }
                q->ant->sgt=q->sgt;
                delete(q);
                q=q->ant;
                cont++;
            }
        }

    }
    if(cont==0){
        cout<<"Ningún dato ha sido borrado"<<endl;

    }
}

int main(){
    Nodo * cab=NULL;
    insertarCab(cab,1);
    insertarCab(cab,9);
    insertarCab(cab,4);
    insertarCab(cab,4);
    insertarCab(cab,4);
    insertarCab(cab,3);
    insertarCab(cab,1);
    insertarCab(cab,2);
    insertarCab(cab,1);
    insertarCab(cab,5);
    insertarCab(cab,7);
    insertarCab(cab,1);

    imprimir(cab);
    eliminarRepetidos(cab);
    imprimir(cab);

    return 0;
}


