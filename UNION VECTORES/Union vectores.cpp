#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	char vector1[]={'a','b','c','d','e'};
	char vector2[]={'f','g','h','i','j'};
	char vector3[10];
	
	//Copiando los elementos del vector1 hacia vector3
	for (int i=0;i<5;i++){
		vector3[i]=vector1[i];
	}
	
	//Copiando los elementos del vector2 hacia vector3
	for (int i=5;i<10;i++){
		vector3[i]=vector2[i-5];
	}
	
	//Mostrar nuevo vector
	for(int i=0;i<10;i++){
		cout<<vector3[i]<<endl;
	}
	
	getch();
	return 0;
}
