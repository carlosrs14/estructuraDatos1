#include<iostream>
using namespace std;
typedef struct estudiante{
	int codigo;
	char *nombre;
	int edad;
}Est;
void holaMundo(){
	cout<<"Hola Mundo!"<<endl;
}
int retornarInt(int x, int y,char z){
	if(z=='v'){
		return x;
	}else{
		return y;
	}
}
void copiar(Est e2[10]){
	for(int i=1;i<10;i++){
		e2[i]=e2[0];
	}
}
void imprimir(Est e2[10]){
	for(int i=0;i<10;i++){
		cout<<e2[i].codigo<<" -  "<<e2[i].nombre<<" - "<<e2[i].edad<<endl; 
	}
}
	
int main(){
	holaMundo();
	int x=0;
	cout<<retornarInt(5,6,'f')<<endl;
	Est e1[10];
	e1[0].codigo=123;
	e1[0].nombre="Jairo";
	e1[0].edad=30;
	
	copiar(e1);
	imprimir(e1);
	
	e1[0].codigo=321;
	e1[0].nombre="Maria";
	e1[0].edad=20;
	copiar(e1);
	imprimir(e1);

	
	
	return 0;
}


