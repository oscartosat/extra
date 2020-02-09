#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char cad1[20],cad2[20];
	
	cout<<"Introduzca frase: "; cin.getline(cad1,20,'\n');
	cout<<"Introduzca frase: "; cin.getline(cad2,20,'\n');
	
	strupr(cad1);
	strupr(cad2);
	
	if(strcmp(cad1,cad2)==0){
		cout<<"Ambas cadenas son iguales";
	}
	else{
		cout<<"Ambas cadenas son distintas";
	}
	
	cout<<"\n";
	getch();
	return 0;
}
