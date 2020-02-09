#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int saldo_inicial=1000, opc;
	float extra, saldo=0, retiro;
	
	cout<<"/tBienvenido a su Cajero Virtual: "<<endl;
	cout<<"1. Ingresar dinero en cuenta"<<endl;
	cout<<"2. Retirar dinero de la cuenta"<<endl;
	cout<<"3. Salir"<<endl;
	cout<<"Opcion"<<endl;
	cin>>opc;
	
	switch(opc){
		case 1:
			cout<<"Introduzca la cantidad de dinero a ingresar: ";
			cin>>extra;
			saldo=saldo_inicial+extra;
			cout<<"Dinero en la cuenta: "<<saldo<<endl; break;
		case 2:
			cout<<"Introduzca la cantidad de dinero que desea retirar: ";
			cin>>retiro;
			
			if(retiro>saldo_inicial){
				cout<<"NO tiene esa cantidad de dinero"<<endl;
			}
			else{
				saldo=saldo_inicial-retiro;
				cout<<"Dinero en cuenta: "<<saldo<<endl;
			}
		case 3: break;
	}
	
	
	system("pause");
	return 0;
}
