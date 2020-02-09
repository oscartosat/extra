#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char frase[20];
	int longitud;
	
	cout<<"Escriba la frase: ";
	cin.getline(frase,20,'\n');
	
	longitud=strlen(frase);
	
	if(longitud>=10){
		cout<<"Su frase es '"<<frase<<"' y tiene mas de 10 caracteres";
	}
	else{
		cout<<"Su frase es '"<<frase<<"'h y no tiene mas de 10 caracteres";
	}
	
	cout<<"\n\n";
	getch();
	return 0;
}
