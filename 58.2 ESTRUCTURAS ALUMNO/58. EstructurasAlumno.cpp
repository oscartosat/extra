#include<iostream>
#include<conio.h>

using namespace std;

struct alumno{
	char nombre[20];
	int edad;
	double nota1,nota2,nota3;
	double promedio;
}alumno[3];

int main(){
	int aux=0, posicion;
	
	for(int i=0; i<3; i++){
		cout<<"Introduzca datos del alumno: "<<endl;
		fflush(stdin);
		cout<<"Nombre:  "; cin.getline(alumno[i].nombre,20,'\n');
		cout<<"Edad:  "; cin>>alumno[i].edad;
		cout<<"Nota 1:  "; cin>>alumno[i].nota1;
		cout<<"Nota 2:  "; cin>>alumno[i].nota2;
		cout<<"Nota 3:  "; cin>>alumno[i].nota3;
		alumno[i].promedio=(alumno[i].nota1+alumno[i].nota2+alumno[i].nota3)/3;
		cout<<"\n";
	}
	
	for(int i=0; i<3; i++){
		if(alumno[i].promedio>aux){
			aux=alumno[i].promedio;
			posicion=i;
		}
	}
	
	cout<<"El alumno con el promedio mas alto es "<<alumno[posicion].nombre<<" de "<<alumno[posicion].edad;
	cout<<" anos con un "<<alumno[posicion].promedio<<" de promedio"<<endl;;
	
	getch();
	return 0;
}
