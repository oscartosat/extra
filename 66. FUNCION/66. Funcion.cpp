#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

//Prototipos de Funcion
void pedirDatos();
void funpot(int x, int y);

int numero, exponente;

int main(){
	pedirDatos();
	funpot(numero,exponente);
	
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Introduzca un numero: ";
	cin>>numero;
	cout<<"Introduzca exponente de elevacion: ";
	cin>>exponente;
}

void funpot(int x, int y){
	long resultado=1;
	for(int i=1;i<=y;i++){
		resultado*=x;
	}
	
	cout<<"El resultado es: "<<resultado<<endl;
}
