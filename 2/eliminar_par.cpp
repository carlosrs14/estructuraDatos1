//Dada una estructura realizar un algoritmo que elimine los elementos con información par,
//imprima en la información y el número de elementos eliminados.

#include <iostream>
#include "funciones.h"
using namespace std;

int eliminarPares(int vector[], int &tam);
void eliminarNumero(int vector[], int num, int &tam);

int main(){
    int numeros[]={4,6,5,4,2,3,8,9,0,4}, tam=sizeof numeros/sizeof numeros[0];
    
    mostrarVector(numeros, tam);
    eliminarPares(numeros, tam);
    mostrarVector(numeros, tam);


    return 0;
}

int eliminarPares(int vector[], int &tam){
    int cont=0, indices[tam];

    for(int i=0; i<tam; i++){
        if(vector[i]%2==0){
            eliminarNumero(vector, vector[i], tam);
            cont ++;
            i--;
        }
    }
    cout<<"Se eliminaron "<<cont<<" registros"<<endl;
    return cont;
}

void eliminarNumero(int vector[], int num, int &tam){
    
    for(int i=0; i<tam; i++){
        if(vector[i]==num){

            for(int j=i; j<tam; j++){
                vector[j]=vector[j+1];
            }
            tam--;
            break;
        }        
    }
}
