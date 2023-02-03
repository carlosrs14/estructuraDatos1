//Escribir un programa, que con funciones, verifique si un carácter introducido es un número o no.
#include <stdio.h>

bool isNum(char);

int main(){
    char caracter;

    printf("Ingrese un caracter: ");
    scanf("%c", &caracter);

    if(isNum(caracter))
        printf("El caracter ingresado si es un número");
    else
        printf("El caracter ingresado no es un número");

        
    return 0;
}


bool isNum(char a){
    switch (a)
    {
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
    case '0':
        return true;
    default:
        return false;
    }

}