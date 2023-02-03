//Escribir un programa que dado dos puntos en plano cartesiano, calcule la distancia entre ellos.

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int x1, y1, x2, y2;
    float distancia;

    cout<<"Ingrese la coordenada x del punto A"<<endl;
    cin>>x1;
    cout<<"Ingrese la coordenada y del punto A"<<endl;
    cin>>y1;
    cout<<"Ingrese la coordenada x del punto B"<<endl;
    cin>>x2;
    cout<<"Ingrese la coordenada y del punto B"<<endl;
    cin>>y2;


    distancia = (float) sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));
    cout<<"La distancia del punto A al B es: "<<distancia<<" unidades"<<endl;

    return 0;
}