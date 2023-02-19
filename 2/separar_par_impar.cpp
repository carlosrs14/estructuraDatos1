//Dada una estructura A  y otra B las cuales contienen dígitos,
//deje los elementos pares en la estructura A y los impares en la estructura B.
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

void deParAImpar(){

}

void deImparAPar(){
    
}
int main(){
    Nodo *cab_par=NULL;
    Nodo *cab_impar=NULL;


    return 0;
}