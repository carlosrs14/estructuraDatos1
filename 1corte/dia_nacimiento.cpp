//Escribir un programa que dado la fecha de nacimiento y la fecha actual, diga el día de la semana que nació la persona

#include <iostream>
using namespace std;

bool isBisiesto(int);

int main(){

    int dia, mes, año;


    return 0;
}

bool isBisiesto(int anio){
    anio-=2000;
    if(anio%4==0)
        return true;
    else
        return false;
}