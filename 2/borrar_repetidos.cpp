//Dada una estructura con elementos repetidos hacer un algoritmo que deje una sola ocurrencia de los elementos.
#include "funciones.h"
#include <iostream>
using namespace std;

void quitarRepetidos(int vector[], int &tope);

int main(){

    int vect[]={2,1,4,3,5,1,5,6,2,9,7,7,1,5,4}, tope=sizeof vect/sizeof vect[0];

    mostrarVector(vect, tope);  
    quitarRepetidos(vect, tope);
    mostrarVector(vect, tope);

    cout<<"\n\n\n";
    return 0;
}


void quitarRepetidos(int vector[], int &tope){
    int bandera, indice;
    for(int i=0; i<tope; i++){      
        bandera=0;
        for(int j=i+1; j<tope; j++){
            if(vector[i]==vector[j]){ 
                indice=j;
                for(int k=indice; k<tope; k++){
                    vector[k]=vector[k+1]; 
                }
                tope--;
            }
        }
        
    
    }

}