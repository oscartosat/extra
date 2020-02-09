#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int matriz[100][100],filas,columnas;
	
	cout<<"Escriba el numero de filas de la matriz: ";
	cin>>filas;
	cout<<"Escriba el numero de columnas de las matriz: ";
	cin>>columnas;
	
	
	for(int i=0;i<filas;i++){
		for (int j=0;j<columnas;j++){
			matriz[i][j] = 1+rand()%9; //Generar matriz aleatoria
		}
	}
	
	cout<<"La matriz aleatoria es: \n";
		for(int i=0;i<filas;i++){
			for (int j=0;j<columnas;j++){
				cout<<" "<<matriz[i][j];
			}
			cout<<"\n";
		}
	
	cout<<"\n";
	system("pause");
	return 0;
}
