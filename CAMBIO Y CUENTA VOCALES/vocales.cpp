#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	char palabra[30], vocales[]={'a','e','i','o','u'};
	int nvocales;
	int cont_voc=0;
	int cont=0;
	
	cout<<"Introduzca su palabra: "; cin.getline(palabra,30,'\n');

	
		for(cont=0;cont<strlen(palabra);cont++){
       		for(nvocales=0;nvocales<5;nvocales++){
           		if (palabra[cont]==vocales[nvocales]){
           		cont_voc++;
      			}
    		}
    	}
    	for(cont=0;cont<strlen(palabra);cont++){
       		for(nvocales=0;nvocales<5;nvocales++){
           		if (palabra[cont]==vocales[nvocales]){
              		palabra[cont]='u';
           		}
       		}
    	}
	
	cout<<"Numero de Vocales: "<<cont_voc;
	cout<<"\nPalabra nueva: "<<palabra<<endl;
	getch();
	return 0;
}
