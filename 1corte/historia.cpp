//Realizar un programa que pida un nombre, un apellido y un lugar y
//a raíz de ahí muestre en pantalla una pequeña historia (se debe usar funciones y estructuras). 

#include <iostream>
#include <time.h>
using namespace std;

struct elementos{
    char nombre[10];
    char apellido[10];
    char lugar[10];
};


struct secundario{
    char *op1;
    char *op2;
    char *op3;
    char *op4;
    char *op5;
};

struct accion{
    char *op1;
    char *op2;
    char *op3;
    char *op4;
    char *op5;
};

elementos obtenerElementos();

int main(){

    int num;

    secundario personaje_secundarios;
    personaje_secundarios.op1=" papa";
    personaje_secundarios.op2=" amigo";
    personaje_secundarios.op3=" hermano";
    personaje_secundarios.op4=" novi@";
    personaje_secundarios.op5=" amiga";

    accion acciones_a_realizar;
    acciones_a_realizar.op1=" jugaron fútbol en ";
    acciones_a_realizar.op2=" salieron a caminar rumbo a ";
    acciones_a_realizar.op3=" leyeron un libro juntos en ";
    acciones_a_realizar.op4=" pasearon en el carro desde su casa hasta ";
    acciones_a_realizar.op5=" fueron a bailar a ";

    elementos e = obtenerElementos();
    
    srand((unsigned) time(NULL));
    num = rand() % 5;
    
    switch (num){
        case 0:
            cout<<e.nombre<<" "<<e.apellido<<" y su"<<personaje_secundarios.op1;
            break;
        case 1:
            cout<<e.nombre<<" "<<e.apellido<<" y su"<<personaje_secundarios.op2;
            break;
        case 2:
            cout<<e.nombre<<" "<<e.apellido<<" y su"<<personaje_secundarios.op3;
            break;
        case 3:
            cout<<e.nombre<<" "<<e.apellido<<" y su"<<personaje_secundarios.op4;
            break;
        case 4:
            cout<<e.nombre<<" "<<e.apellido<<" y su"<<personaje_secundarios.op5;
            break;    
        default:
            break;
    }

    num = rand() % 5;
    
    switch (num){
        case 0:
            cout<<acciones_a_realizar.op1;
            break;
        case 1:
            cout<<acciones_a_realizar.op2;
            break;
        case 2:
            cout<<acciones_a_realizar.op3;
            break;
        case 3:
            cout<<acciones_a_realizar.op4;
            break;
        case 4:
            cout<<acciones_a_realizar.op5;
            break;    
        default:
            break;
    }
    cout<<e.lugar<<endl;


    return 0;
}

elementos obtenerElementos(){
    elementos e;

    cout<<"Ingrese el nombre de la persona: ";
    cin>>e.nombre;
    cout<<"Ingrese el apellido de la persona: ";
    cin>>e.apellido;
    cout<<"Ingrese el lugar de los hechos: ";
    cin>>e.lugar;
    return e;
}
