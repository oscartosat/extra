#include<iostream>
#include<conio.h>

using namespace std;

struct Complejo{
	float real,imaginaria;
}z1,z2;

void pedirDatos();
Complejo suma(Complejo,Complejo);
void muestra(Complejo);

int main(){
	pedirDatos();
	Complejo x=suma(z1,z2);
	
	muestra(x);
	
	
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Introduzca los datos para el primer numero complejo: "<<endl;
	cout<<"Parte Real: "; cin>>z1.real;
	cout<<"\nParte Imaginaria: "; cin>>z1.imaginaria;
	
	cout<<"Introduzca los datos para el segundo numero complejo: "<<endl;
	cout<<"Parte Real: "; cin>>z2.real;
	cout<<"\nParte Imaginaria: "; cin>>z2.imaginaria;
}

Complejo suma(Complejo z1,Complejo z2){
	z1.real+=z2.real;
	z1.imaginaria+=z2.imaginaria;
	return z1;
}

void muestra(Complejo x){
	cout<<"\nResultado de la suma es: "<<x.real<<" . "<<x.imaginaria<<endl;
}
