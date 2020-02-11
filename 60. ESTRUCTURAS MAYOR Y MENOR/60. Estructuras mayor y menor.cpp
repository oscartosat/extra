#include<iostream>
#include<conio.h>

struct empleado{
	char nombre[20];
	float salario;
	
}emp[100];

using namespace std;

int main(){
	int n_empleados, posM=0, posm=0;
	float mayor=0,menor=99999999;
	
	cout<<"Introduzca el numero de empleados: ";
	cin>>n_empleados;
	
	//Empleado de mayor salario
	for(int i=0;i<n_empleados;i++){
		fflush(stdin);
		cout<<"Nombre: "; cin.getline(emp[i].nombre,20,'\n');
		cout<<"Salario: "; cin>>emp[i].salario;
		
		//Empleado con mayor salario
		if(emp[i].salario>mayor){
			mayor=emp[i].salario;
			posM=i;
		}
		
		//Empleado con menor salario
		if(emp[i].salario<menor){
			menor=emp[i].salario;
			posm=i;
		}
		
		cout<<"\n";
	}
	
	cout<<"\nDatos del empleado con mayor salario: \n";
	cout<<"Nombre: "<<emp[posM].nombre<<endl;
	cout<<"Salario: "<<emp[posM].salario<<endl;
	
	cout<<"\nDatos del empleado con menor salario: \n";
	cout<<"Nombre: "<<emp[posm].nombre<<endl;
	cout<<"Salario: "<<emp[posm].salario<<endl;
	
	getch();
	return 0;
}
