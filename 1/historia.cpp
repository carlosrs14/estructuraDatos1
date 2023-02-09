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

elementos obtenerElementos();
secundario llenar_campos(char[30],char[30],char[30],char[30],char[30]);

int main(){

    int num;
    char a[10]=" papa", b[10]=" amigo", c[10]=" hermano", d[10]=" amiga", f[10]=" novi@";
    char comp1[40]=" jugaron fútbol en ", comp2[40]=" salieron a caminar rumbo a ", comp3[40]=" leyeron un libro juntos en ";
    char comp4[40]=" fueron en el carro a ", comp5[40]=" fueron a bailar a ";

    secundario sec=llenar_campos(a,b,c,d,f);
    elementos e = obtenerElementos();
    
    srand((unsigned) time(NULL));
    num = rand() % 5;
    
    switch (num){
        case 0: cout<<e.nombre<<" "<<e.apellido<<" y su"<<sec.op1; break;
        case 1: cout<<e.nombre<<" "<<e.apellido<<" y su"<<sec.op2; break;
        case 2: cout<<e.nombre<<" "<<e.apellido<<" y su"<<sec.op3; break;
        case 3: cout<<e.nombre<<" "<<e.apellido<<" y su"<<sec.op4; break;
        case 4: cout<<e.nombre<<" "<<e.apellido<<" y su"<<sec.op5; break;    
    }
    sec=llenar_campos(comp1, comp2, comp3, comp4, comp5);

    num = rand() % 5;
    
    switch (num){
        case 0: cout<<sec.op1; break;
        case 1: cout<<sec.op2; break;
        case 2: cout<<sec.op3; break;
        case 3: cout<<sec.op4; break;
        case 4: cout<<sec.op5; break;    
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

secundario llenar_campos(char a[30], char b[30], char c[30], char d[30], char e[30]){
    secundario s;
    s.op1=a;
    s.op2=b;
    s.op3=c;
    s.op4=d;
    s.op5=e;
    return s;
}