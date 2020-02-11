#include<iostream>
#include<conio.h>

struct atleta{
	char nombre[20];
	char pais[20];
	int n_medallas;
	
}atl[100];

using namespace std;

int main(){
	int n_atletas, posM=0, posm=0, mayor=0, menor=99999999;
	
	cout<<"Dime el numero de atletas: ";
	cin>>n_atletas;
	
	for (int i=0;i<n_atletas;i++){
		fflush(stdin);
		cout<<"Introduzca el nombre: ";
		cin.getline(atl[i].nombre,20,'\n');
		cout<<"Introduzca el pais: ";
		cin.getline(atl[i].pais,20,'\n');
		cout<<"Introduzca el numero de medallas ganadas: ";
		cin>>atl[i].n_medallas;
		
		if(atl[i].n_medallas>mayor){
			mayor=atl[i].n_medallas;
			posM=i;
		}
		
		if(atl[i].n_medallas<menor){
			menor=atl[i].n_medallas;
			posm=i;
		}
		cout<<"\n";
	}
	
	cout<<"El atleta que mas medallas ha ganado ha sido "<<atl[posM].nombre<<" con un total de "<<atl[posM].n_medallas;
	
	getch();
	return 0;
}
