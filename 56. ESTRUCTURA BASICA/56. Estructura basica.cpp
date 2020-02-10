#include<iostream>
#include<conio.h>

using namespace std;

struct persona{
	char nombre[20];
	int edad;
}
persona1;

int main(){
	cout<<"Escriba su nombre: ";
	cin.getline(persona1.nombre,20,'\n');
	cout<<"Edad: ";
	cin>>persona1.edad;
	
	cout<<"\nImprimiendo datos:\n";
	cout<<"Nombre: "<<persona1.nombre<<endl;
	cout<<"Edad: "<<persona1.edad<<endl;
	
	
	getch();
	return 0;
}

/*struct persona{
	char nombre[20];
	int edad;
}
persona1={"Oscar",17},
persona2={"Ruperto",20};

int main(){
	cout<<"Nombre1: "<<persona1.nombre<<endl;
	cout<<"Edad1: "<<persona1.edad<<endl;
	
	cout<<"\nNombre2: "<<persona2.nombre<<endl;
	cout<<"Edad2: "<<persona2.edad<<endl;
	
		getch();
	return 0;
}*/
