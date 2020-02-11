#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

void pedirDato();
float al_cuadrado(int x);

float numero;

int main(){
	pedirDato();
	al_cuadrado(numero);
	
	getch();
	return 0;
}

void pedirDato(){
	cout<<"Introduzca un numero: ";
	cin>>numero;
}

float al_cuadrado(int x){
	float cuadrado=pow(x,2);
	
	cout<<"El numero elevado al cuadrado es: "<<cuadrado<<endl;
}
