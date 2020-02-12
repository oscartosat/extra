#include<iostream>
#include<conio.h>

using namespace std;

void pedirDatos();
void cambiarSigno(int vec[], int);
void mostrarVector(int vec[],int tam);

int vec[100],tam;

int main(){
	pedirDatos();
	cambiarSigno(vec,tam);
	mostrarVector(vec,tam);
	
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Introduzca el tamaño del vector: ";
	cin>>tam;
	
	for(int i=0;i<tam;i++){
		cout<<"Introduzca un numero: ";
		cin>>vec[i];
	}
}

void cambiarSigno(int vec[], int){
	for(int i=0;i<tam;i++){
		vec[i]*=-1;
	}
}

void mostrarVector(int vec[],int tam){
	cout<<"\nMostrando los elementos del vector con signo cambiado: \n";
	for(int i=0;i<tam;i++){
		cout<<vec[i]<<" ";
	}
	
}
