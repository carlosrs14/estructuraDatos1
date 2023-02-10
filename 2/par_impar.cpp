//Dada una estructura A  y otra B las cuales contienen dígitos,
//deje los elementos pares en la estructura A y los impares en la estructura B.
#include <iostream>
#include "funciones.h"

#define tam 10

using namespace std;

void par_impar(int vectorA[], int vectorB[], int &cont_par, int &cont_imp);

int main(){
    int pares, impares;
    //inicializar vectores con el doble de tamaño, ya que todos los elementos pueden estar en una sol categoría
    int A[tam*2]={12,6,25,3,5,3,9,4,22,26}, 
        B[tam*2]={3,7,8,45,3,33,25,6,35,3};

    par_impar(A, B, pares, impares);
    mostrarVector(A, pares);
    mostrarVector(B, impares);

    return 0;
}

void par_impar(int vectorA[], int vectorB[], int &cont_par, int &cont_imp){
    cont_par=0, cont_imp=0;
    int vector_apoyo[tam*2] , j=0;

    for(int i=0; i<tam; i++){
        vector_apoyo[i]=vectorA[i];
    }
    
    for(int i=tam; i<tam*2; i++){
        vector_apoyo[i]=vectorB[j];
        j++;
    }

    for (int i = 0; i < tam*2; i++){
        if(vector_apoyo[i]%2==0){
            vectorA[cont_par]=vector_apoyo[i];
            cont_par++;
        }else{
            vectorB[cont_imp]=vector_apoyo[i];
            cont_imp++;
        }
    }
}