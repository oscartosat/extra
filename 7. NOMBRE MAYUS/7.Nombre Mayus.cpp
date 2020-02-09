#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char nombre[20];
	
	cout<<"Escriba el nombre en mayusculas: "; cin.getline(nombre,20,'\n');
	
	if(nombre[0]='a'){
		strlwr(nombre);
	}
	
	cout<<nombre<<endl;
	
	getch();
	return 0;
}
