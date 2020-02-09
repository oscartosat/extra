/* variable = limite_inferior + rand() % (limite_superior + 1 - limite_inferior); */
#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){
	int numero, dato, contador=0;
	
	srand(time(NULL)); //generar numero aleatorio//
	dato=1+rand()%(100+1-1);
	
	do{
		cout<<"Escriba un numero: "; cin>>numero;
		
		if (numero>dato){
			cout<<"\nEscriba un numero menor\n";
		}
			if (numero<dato){
			cout<<"\nEscriba un numero mayor\n";
		}
		contador++;
	}while(numero!=dato);
	
	cout<<"\nFelicidades, adivinaste el numero\n";
	cout<<"Numero de intentos: "<<contador<<endl;
	
	system("pause");
	return 0;
}
