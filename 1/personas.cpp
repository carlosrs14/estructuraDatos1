//Realizar un programa que guarde la información de 5 personas y las muestre en pantalla de forma tabulada (usar funciones y estructuras)

#include <iostream>

using namespace std;

struct persona{
    char nombre[10];
    char apellido[10];
    int edad;
};

void mostrarPersona(persona);
persona guardarPersona();

int main(){
    
    int i, num = 5;

    persona lista_personas[num];
    for(i=0; i<num; i++){
        cout<<"Persona número "<<i+1<<endl;
        lista_personas[i] = guardarPersona();
        cout<<endl<<endl;
    }

    for(i=0; i<num; i++){
        cout<<"Persona "<<i+1<<endl;
        mostrarPersona(lista_personas[i]);
    }
    return 0;
}

persona guardarPersona(){
    persona p;
    cout<<"Ingrese el nombre: ";
    cin>>p.nombre;
    cout<<"Ingrese el apellido: ";
    cin>>p.apellido;
    cout<<"Ingrese la edad: ";
    cin>>p.edad;
    
    return p;
}

void mostrarPersona(persona p){
    cout<<"Nombre: "<<p.nombre<<endl;
    cout<<"apellido: "<<p.apellido<<endl;
    cout<<"Edad: "<<p.edad<<endl<<endl;

}