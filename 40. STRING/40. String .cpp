#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char palabra[]="Oscar";
	char palabra2[]={'O','s','c','a','r'};
	char nombre[30];
	
	cout<<palabra<<endl;
	cout<<palabra2<<endl;
	
	cout<<"Escriba su nombre: ";
	cin.getline(nombre,20,'\n');
	
	cout<<nombre<<endl;
	
	
	getch();
	return 0;
}
