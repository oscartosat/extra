#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[100],n,mayor=0;
	
	cout<<"Dime el numero de elementos del arreglo: ";
	cin>>n;
	
	for(int i=0;i<n;i++){
		cout<<i+1<<". Introduzca un numero: ";
		cin>>numeros[i];
		
		if(numeros[i]>mayor){
			mayor=numeros[i];
		}
	}
	
	cout<<"\nEl numero mayor del vector es; "<<mayor<<endl;
	
	getch();
	return 0;
}

