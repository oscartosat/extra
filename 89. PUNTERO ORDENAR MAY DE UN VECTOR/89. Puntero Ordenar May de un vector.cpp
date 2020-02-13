#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

void pedirDatos();
void ordenarVector(int*,int);
void mostrarDatos(int*,int);

int nElementos,*elemento;

int main(){
	pedirDatos();
	ordenarVector(elemento,nElementos);
	mostrarDatos(elemento,nElementos);
	
	delete[]elemento; //Liberar la memoria utilizada para el arreglo dinamico
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Introduzca el numero de elementos del vector: ";
	cin>>nElementos;
	
	elemento=new int[nElementos]; //Crear el vector dinamico
	
	for(int i=0;i<nElementos;i++){
		cout<<"Introduzca un numero ["<<i<<"]: ";
		cin>>*(elemento+i);//elemento[i]
	}
}

void ordenarVector(int *elemento,int nElementos){
	int aux;
	
	//Ordenar el vector con metodo burbuja
	for(int i=0;i<nElementos;i++){
		for(int j=0;j<nElementos-1;j++){
			if(*(elemento+j)>*(elemento+j+1)){ //elemento[j]>elemento[j+1]
				aux=*(elemento+j);
				*(elemento+j)=*(elemento+j+1);
				*(elemento+j+1)=aux;
			}
		}
	}
}

void mostrarDatos(int *elemento,int nElementos){
	cout<<"\n\nMostrando el vector ordenado: ";
	for(int i=0;i<nElementos;i++){
		cout<<*(elemento+i)<<" "; //elemento[i]
	}
}
