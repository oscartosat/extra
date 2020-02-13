#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

//Prototipo de funcion
void pedirDatos();
int contandoVocales(char*);

//Variable tipo general
char nombreUsuario[30];

int main(){
	pedirDatos();
	cout<<"\nEl numero de vocales del nombre es: "<<contandoVocales(nombreUsuario)<<endl;
	
	
	getch();
	return 0;
}

//Definicion de la Funcion
void pedirDatos(){
	cout<<"Introduzca su nombre: ";
	cin.getline(nombreUsuario,30,'\n');
	
	strupr(nombreUsuario); //Transformando a mayuscula el nombre (Asi da igual si introduces el nombre en mayusculas o minusculas
}

int contandoVocales(char *nombre){
	int cont=0;
	
	while(*nombre){//va a seguir mientras nombre no sea nulo '\0'
		switch(*nombre){
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U': cont++;
		}
		nombre++;
	}
	return cont;
}

