#include<iostream>

int main(){
	//Declarar una matriz --> tipo nombre[nfilas][ncolumnas];
		int numeros[2][3];
		char letras[3][2];
	
	//Agregar elementos a la matriz declarada
		int numeros[2][3]={{1,2,3},{4,5,6}};
		
		cout<<numeros[1][2];//6
		cout<<numeros[0][1];//2
		
	//Rellenar matriz usuario
		int numeros[100][100],filas,columnas;
		
		cout<<"n filas: ", cin>>filas;
		cout<<"n columnas: "; cin>>columnas;
		
		//Almacenando elementos en la matriz
		for(int i=0;i<filas;i++){
			for (int j=0;j<columnas;j++){
				cout<<"Introduzca un numero:"; cin>>numeros[i][j];
			}
		}
		
		//Mostrando la matriz
		for(int i=0;i<filas;i++){
			for (int j=0;j<columnas;j++){
				cout<<" ";
				cout<<numeros[i][j];
			}
			cout<<"\n";
		}
		
	//Copiar contenido de una matriz a otra
		int numeros[2][2]={{1,2},{3,4}};
		int matriz2[2][2];
		
		//Pasando contenido de numeros hacia matriz2
		for(int i=0;i<2;i++){
			for (int j=0;j<2;j++){
				matriz2[i][j]=numeros[i][j];
			}
		}
		
		//Mostrando matriz2
		for(int i=0;i<2;i++){
			for (int j=0;j<2;j++){
				cout<<" ";
				cout<<matriz2[i][j];
			}
			cout<<"\n";
		}
	
	//Matriz transpuesta
		int numeros[3][3];
		
		for(int i=0;i<3;i++){
			for (int j=0;j<3;j++){
				cout<<"Introduzca numeros: ";
				cin>>numeros[i][j];
			}
		}
	
		cout<<"Matriz original\n";
		for(int i=0;i<3;i++){
			for (int j=0;j<3;j++){
				cout<<numeros[i][j];
			}
			cout<<"\n";
		}
		
		cout<<"Matriz transpuesta\n";
		for(int i=0;i<3;i++){
			for (int j=0;j<3;j++){
				cout<<numeros[j][i];
			}
			cout<<"\n";
		}
	
	//Saber si matriz es simetrica --> cuadrada y tranpuesta igual
		int numeros[100][100],filas,columnas;
		char band='F';
		
		cout<<"n filas: ", cin>>filas;
		cout<<"n columnas: "; cin>>columnas;
		
		for(int i=0;i<filas;i++){
			for (int j=0;j<columnas;j++){
				cout<<"Introduzca un numero:"; cin>>numeros[i][j];
			}
		}
		
		if(filas==columnas){
			for(int i=0;i<3;i++){
				for (int j=0;j<3;j++){
					if(numeros[i][j]==numeros[j][i]){
						band='v';
					}
				}
			}
		}
		
		if(band=='v'){
			cout<<"La matriz es simetrica";
		}
		else{
			cout<<"La matriz no es simetrica";
		}
		
	//Calcular diagonal
		int matriz[3][3]={1,2,3 , 4,5,6 , 7,8,9};
	
		cout<<"La matriz es: \n";
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				cout<<" ";
				cout<<matriz[i][j];
			}
			cout<<"\n";
		}
		cout<<"La diagonal principal de la matriz es: \n";
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
			
				if (i==j){
					cout<<" "<<matriz[i][j];
				}
				else {
					cout<<" "<<0;
				}
			}
			cout<<"\n";
		}
	
	//Matriz aleatoria
		int matriz[100][100],filas,columnas;
	
		cout<<"n filas: "; cin>>filas;
		cout<<"n columnas: "; cin>>columnas;
	
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
			
	
	
}
