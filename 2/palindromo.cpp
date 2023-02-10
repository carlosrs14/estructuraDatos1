//Dada una estructura  decir si la estructura es palindrome
//(Palindrome es leerla de abajo hacia arriba igual que de arriba abajo).
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

bool esPalindroma(char [],int &);
void borrarEspacios(char[], int &);

int main(){
    char palabra[]="Hola", palabra2[]="anita lava la tina";
    int nplabra1 = sizeof palabra/sizeof palabra[0];
    int nplabra2 = sizeof palabra2/sizeof palabra2[0];

    cout<<palabra<<endl;
    esPalindroma(palabra, nplabra1);

    cout<<palabra2<<endl;
    borrarEspacios(palabra2, nplabra2);
    cout<<palabra2<<endl;
    esPalindroma(palabra2, nplabra2);
    
    return 0;
}

bool esPalindroma(char palabra[], int &tam){
    
    int tam_sec=tam;

    for(int i=0; i<tam; i++){
        tam_sec--;
        if(palabra[i]!=palabra[tam_sec]){
            
            cout<<"NO es palindroma"<<endl;
            return false;
        }
    }
        cout<<"SI es palindroma"<<endl;
        return true;
}

void borrarEspacios(char palabra[], int &tam){
    int indice;
    char vacio[]=" ";

    for(int i=0;i<tam;i++){
        if(palabra[i]==vacio[0]){
            indice=i;
            for(int j=indice; j<tam; j++){
                palabra[j]=palabra[j+1];
            }
            tam--;
        }   
    }
    tam--;
}
