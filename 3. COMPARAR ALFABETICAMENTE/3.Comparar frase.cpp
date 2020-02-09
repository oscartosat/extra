#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char frase1[20],frase2[20],longitud;
	
	cout<<"Escriba la primera frase: "; cin.getline(frase1,20,'\n');
	cout<<"Escriba la segunda frase: "; cin.getline(frase2,20,'\n');
	
	if(strcmp(frase1,frase2)!=0){
		if(strcmp(frase1,frase2)>0){
			cout<<frase1<<": es mayor alfabeticamente que frase 2";
		}
		else{
			cout<<frase2<<": es mayor alfabeticamente que frase 1";
		}
	}	
	else{
		cout<<"Ambas frases son iguales";
	}
	
	cout<<"\n\n";
	getch();
	return 0;
}
