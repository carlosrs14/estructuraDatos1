#include <iostream>
#include "funciones.h"

using namespace std;

void llenarLista(Nodo *&cab, int vec[], int num){

    for(int i=0; i<num; i++){
        insertarCabeza(vec[i], cab);
    }

}
void borrarRepetidos(Nodo *cab){

    

    for(Nodo *p=cab; p!=NULL; p=p->sgt){
        Nodo * antq=p;
        
        for(Nodo *q=p->sgt; q!=NULL; q=q->sgt){
            if(p->dato==q->dato){
                //cout<<antq->sgt->dato<<" "<<q->sgt->dato;
                antq->sgt=q->sgt;
                imprimirLista(cab);
                q=antq;
            }

            antq=q;
        }   
    }
}

int main(){
    int vect[]={1,2,1,1,1,1,6,4,2,4,7,4,3,2,7,0,9,1,4,4,1};
    int num=sizeof vect/sizeof vect[0];

    Nodo * cab=NULL;
    cout<<num<<endl;
    llenarLista(cab, vect, num);
    imprimirLista(cab);

    borrarRepetidos(cab);
    imprimirLista(cab);

    return 0;
}
