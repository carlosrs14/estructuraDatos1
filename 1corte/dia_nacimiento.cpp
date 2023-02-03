//Escribir un programa que dado la fecha de nacimiento y la fecha actual, diga el día de la semana que nació la persona
//falta bisiesto año de nacimiento

#include <iostream>
using namespace std;

bool isBisiesto(int);
int calcular(int nacimiento[3], int actual[3], int hoy);

int main(){
    int fecha_ac[3], fecha_na[3], diaint, dia_hoy=5;

    cout<<"Lunes\t\t1\nmartes\t\t2\nmiercoles\t3\njueves\t\t4\nviernes\t\t5\nsabado\t\t6\ndomingo\t\t7"<<endl;
    cout<<"Ingrese el día de la semana de hoy: ";
    cin>>dia_hoy;
    cout<<"Ingrese el día de actual(00): ";
    cin>>fecha_ac[0];
    cout<<"Ingrese el mes de actual(00): ";
    cin>>fecha_ac[1];
    cout<<"Ingrese el año de actual(0000): ";
    cin>>fecha_ac[2];

    cout<<endl;
    
    cout<<"Ingrese el día de nacimiento(00): ";
    cin>>fecha_na[0];
    cout<<"Ingrese el mes de nacimiento(00): ";
    cin>>fecha_na[1];
    cout<<"Ingrese el año de nacimiento(0000): ";
    cin>>fecha_na[2];
    cout<<endl;
 
    
    diaint=calcular(fecha_na, fecha_ac, dia_hoy);

    switch (diaint){
        case 1: cout<<"Nació un lunes";
        break;
        case 2: cout<<"Nació un martes";
        break;
        case 3: cout<<"Nació un miercoles";
        break;
        case 4: cout<<"Nació un jueves";
        break;
        case 5: cout<<"Nació un viernes";
        break;
        case 6: cout<<"Nació un sabado";
        break;
        case 7: cout<<"Nació un domingo";
        break;
    }
    cout<<endl;

    return 0;
}


bool isBisiesto(int anio){
    anio-=2000;
    if(anio%4==0)
        return true;
    else
        return false;
}

int calcular(int nacimiento[3], int actual[3], int hoy){ 
    int meses[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int dias=0, dia_semana_nc;
    
    for(int i = nacimiento[2]; i <= actual[2]; i++){
        
        //printf("[%d dias]", dias);
        if(i==nacimiento[2]){
            
            for(int j = nacimiento[1]; j<=12; j++){
                if(j==nacimiento[1]){
                    dias+=meses[j-1]-nacimiento[0]+1;
                }else{
                    dias+=meses[j-1];
                }
            }
        }else
            if(i==actual[2]){
                for(int j = 0; j<=actual[1]; j++){
                    if(j==actual[1]){
                        dias+=actual[0];
                    }else{
                        dias+=meses[j-1];
                    }
                }   

            }else{
                if (isBisiesto(i)){
                    dias+=366;
                }else{
                    dias+=365;
                }

            }
    }


    dia_semana_nc = dias%7;//arroja valores de 0 a 6, siendo 1 el mismo dia que nació, 2 siguiente...
    if(dia_semana_nc==0){
        dia_semana_nc=7;
    }
    hoy-=dia_semana_nc-1;

    if(hoy<1){
        return hoy+7;
    }else{
        return hoy;
    }

}
