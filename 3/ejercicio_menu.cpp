//Crear una lista circular con palabras leídas del teclado.​
//El programa debe presentar las siguientes opciones:​

//Mostrar las cadenas que forman la lista​
//Borrar una palabra dada​
//Recorrer la lista eliminando nodos

#include <iostream>
#include <stdlib.h>
#include <cstring>

using namespace std;

typedef struct nodo{
    char dato[10];
    struct nodo *sgt;
}Nodo;

Nodo * crearNodo(char d[10], Nodo *s){
    Nodo *p= (Nodo *)malloc(sizeof(Nodo));
    strcpy(p->dato, d);
    p->sgt =s;
    return p;
}

void insertarCab(Nodo *&cab,char d[10]){
    Nodo *p=crearNodo(d, NULL);
    p->sgt=p;
    if(cab!=NULL){
        p->sgt=cab->sgt;
        cab->sgt=p;
    }
    cab=p;
}

void imprimirMenu(Nodo *cab){
    Nodo *p;
    if(cab==NULL){
        cout<<endl<<"No hay palabras en la lista"<<endl;
        return;
    }
    cout<<endl<<"Las palabras en tu lista son:\n";
    for(p=cab->sgt; p!=cab; p=p->sgt){
        cout<<"["<<p->dato<<"]\n";
    }
    cout<<"["<<p->dato<<"]\n\n";
}

void eliminar(Nodo *&cab, char d[10], int &total){
    if(cab==NULL){
        return;
    }
    Nodo *p=cab->sgt, *ant=cab;
    for(;p!=cab; p=p->sgt){
        if(strcmp(d, p->dato)==0){
            ant->sgt=p->sgt;
            cout<<"Eliminado"<<endl;
            delete(p);
            total--;
            return;
        }
        ant=p;
    }
    if(strcmp(d, cab->dato)==0){
        ant->sgt=p->sgt;
        delete(p);
        cout<<"Eliminado(cab)"<<endl;
        total--;
        if(total==0){
            cab=NULL;
        }else{
            cab=cab->sgt;
        }
        return;
    }
    cout<<"No se encontro el dato"<<endl;
}

void eliminarTodos(Nodo *&cab){

    Nodo *p=cab->sgt, *ant=cab;
    for(;p!=cab; p=p->sgt){
        ant->sgt=p->sgt;
        delete(p);
        ant=p;
    }
    delete(p);
}

int main(){
    int n, sw=1, total=0;
    char palabra[10], opcion;
    Nodo *cab=NULL;
    cout<<"Cuantas palabras va ingresar: ";
    cin>>n;
    total+=n;

    for(int i=0; i<n; i++){
        cout<<"Ingrese la palabra número "<<i+1<<": ";
        cin>>palabra;
        insertarCab(cab, palabra);
    }

    while (sw!=0){
        if(sw==3){
            cab=NULL;
            sw=1;
        }

        imprimirMenu(cab);
        cout<<endl<<"Que deseas hacer?"<<endl;
        cout<<"1 - insertar una nueva palabra"<<endl;
        cout<<"2 - eliminar una palabra"<<endl;
        cout<<"3 - eliminar todos los datos"<<endl;
        cout<<"4 - salir"<<endl;
        cout<<"Su opcion: ";
        cin>>opcion;

        switch (opcion)
        {
        case '1':
            cout<<"Ingrese la palabra: ";
            cin>>palabra;
            insertarCab(cab, palabra);
            total++;
            break;
        case '2':
            cout<<"Escriba la palabra que desea eliminar: ";
            cin>>palabra;
            eliminar(cab, palabra, total);
            break;
        case '3':
            eliminarTodos(cab);
            sw=3;
            cab=NULL;
            total=0;
            break;
        case '4':
            sw=0;
            break;
        default:
            cout<<"Opción invalida"<<endl;
            break;
        }
    }
    cout<<"Fin del programa";
    return 0;
}