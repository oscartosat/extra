#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int matriz[2][2]={{1,2},{3,4}};
	int matriz2[2][2];
	
	//Pasando el contenido de numeros hacia matriz2
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			matriz2[i][j]=matriz[i][j];
		}
	}
	
	//Mostrando matriz2
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<<" ";
			cout<<matriz[i][j];
		}
		cout<<"\n";
	}		
		
	system("pause");
	return 0;
}
