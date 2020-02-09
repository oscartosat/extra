#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char palabra[20];
	int longitud=0;
	
	cin.getline(palabra,20,'\n');
	
	longitud=strlen(palabra);
	
	cout<<"Numero de letras: "<<longitud<<endl;	
	
	getch();
	return 0;
}
