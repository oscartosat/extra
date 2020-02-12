#include<iostream>
#include<conio.h>

using namespace std;

//Prototipo de funcion
int potencia(int, int);

int main(){
	int base,exponente;
	
	//Pedir datos usuario
	cout<<"Introduzca la base: "; cin>>base;
	cout<<"Introduzca el exponente: "; cin>>exponente;
	
	cout<<"\nPotencia de "<<base<<" elevado a "<<exponente<<" es: "<<potencia(base,exponente)<<endl;
	
	getch();
	return 0;
}

int potencia(int x,int y){
	int pot;
	
	if(y==1){ //Caso base
		pot=x;
	}
	else{ //Caso general
		pot=x*potencia(x,y-1);
	}
	return pot;
}
