#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char palabra[]="Oscar";
	char palabra2[20];
	
	strcpy(palabra2,palabra); //Copiar el contenido de una cadena a otra
	
	cout<<palabra2<<endl;
	
	getch ();
	return 0;
}
