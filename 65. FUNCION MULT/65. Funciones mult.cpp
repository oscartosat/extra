#include<iostream>
#include<conio.h>

using namespace std;

//Prototipos de Funcion
void pedirDatos();
void mult(float x, float y);

float num1,num2; //Vatiables globales

int main(){
	pedirDatos();
	mult(num1,num2);
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Introduzca 2 numeros: ";
	cin>>num1>>num2;
}

void mult(float x, float y){
	float multiplicacion=x*y; //Variable local
	
	cout<<"La multiplicacion es: "<<multiplicacion<<endl;
}
