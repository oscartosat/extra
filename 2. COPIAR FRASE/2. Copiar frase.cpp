#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char frase1[20],frase2[20];
	
	cout<<"Escriba la frase: "; cin.getline(frase1,20,'\n');
	
	strcpy(frase2,frase1);
	
	cout<<"La frase se ha copiado a frase2: "<<frase2;
	
	
	cout<<"\n\n";
	getch();
	return 0;
}
