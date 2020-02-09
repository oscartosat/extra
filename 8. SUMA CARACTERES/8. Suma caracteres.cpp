#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int main(){
	char cad1[20], cad2[20];
	int num1;
	float num2, resultado;
	
	cout<<"Introduzca numero entero: "; cin.getline(cad1,20,'\n');
	cout<<"Introduzca numero real: "; cin.getline(cad2,20,'\n');
	
	num1=atoi(cad1);
	num2=atof(cad2);
	
	resultado=num1+num2;
	
	cout<<"La suma es:"<<resultado<<endl;
	
	
	getch();
	return 0;
}
