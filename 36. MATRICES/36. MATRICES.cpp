#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int numeros[100][100], filas, columnas;
	
	cout<<"Introduzca el numero de filas: ";
	cin>>filas;
	cout<<"Introduzca el numero de columnas: ";
	cin>>columnas;
	
	//Almacenando elementos en la matriz
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<"Introduzca un numero ["<<i<<"]["<<j<<"]: ";//[0][1]
			cin>>numeros[i][j];
		}
	}
	
	//Mostrarndo la matriz
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<numeros[i][j];
		}
		cout<<"\n";
	}
	
	
	system("pause");
	return 0;
}
