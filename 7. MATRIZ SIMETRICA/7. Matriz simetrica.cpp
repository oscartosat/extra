#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int matriz[100][100],filas,columnas;
	char band='F';
	
	cout<<"Introduzca el numero de filas: "; cin>>filas;
	cout<<"Introduzca el mumero de columnas: "; cin>>columnas;
	
	for (int i=0;i<filas;i++){
		for (int j=0;j<columnas;j++){
			cout<<"Escriba un numero["<<i<<"]["<<j<<"]: ";
			cin>>matriz[i][j];
		}
	}
	
	if(filas==columnas){
		for (int i=0;i<filas;i++){
			for (int j=0;j<columnas;j++){
				if(matriz[i][j]==matriz[j][i]){
					band='V';
				}
			}
		}
	}
	
	if(band=='V'){
		cout<<"La matriz es simetrica";
	}
	else{
		cout<<"La matriz no es simetrica";
	}
	
	getch();
	return 0;
}
