#include<iostream>
#include<conio.h>
#include<stdlib.h> //Funciona new y delete

using namespace std;

void pedirNotas();
void mostrarNotas();

int numCalif,*calif;

int main(){
	pedirNotas();
	mostrarNotas();
	
	delete[] calif; //Liberando el espacio en bytes utilizados anteriormente
	
	getch();
	return 0;
}

void pedirNotas(){
	cout<<"Introduzca el numero de calificaciones: ";
	cin>>numCalif;
	
	calif= new int[numCalif]; //Crear el vector dinamico
	
	for(int i=0;i<numCalif;i++){
		cout<<"Introduzca una nota: ";
		cin>>calif[i];
	}
}

void mostrarNotas(){
	cout<<"\nEstamos mostrando notas del Usuario: \n";
	for(int i=0;i<numCalif;i++){
		cout<<calif[i]<<endl;
	}
}
