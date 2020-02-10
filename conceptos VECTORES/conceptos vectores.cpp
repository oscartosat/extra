#include<iostream>

int main(){
	//Declarar vector --> tipo nombre[tamaño]
		int numeros[10];
		char letras[5];
		float reales[15];
		
	//Suma elementos vector
		int numeros[]={1,2,3,4,5};
		int suma=0;
		
		for(int i=0;i<5;i++){
			suma+=numeros[i];//suma=suma+numeros[i];
		}
		
		cout<<suma;
	
	//Mostrar los elementos de un vector con indices asociados
		int numeros[100],n;
		
		cin>>"Numero elementos vector: "n;
		
		for(int i=0;i<n;i++){
			cout<<"Introducir numero:"; cin>>numeros[i];
		}
		
		//Ahora mostramos los elementos en sus indices asociasdos
		for(int i=0;i<n;i++){
			cout<<numeros[i];
		}
	
	//Determinar elemento < o > de un vector
		int numeros[100], n, mayor=0;
		
		cout<<"Numero elementos";
		cin>>n;
		
		for (int i=0;i<n;i++){
			cout<<"Introducir numero: "; cin>>numeros[i];
			
			//1 2 4 10 5
			if(numeros[i] > mayor){
				mayor=numeros[i];//1 2 4 10
			}
		}
		
		cout<<"Mayor numero del vector: "<<mayor;
	
	//Vector nuevo con contenido de 2 vectores anteriores
		char letras1[]={'a','b','c','d','e',};
		char letras2[]={'f','g','h','i','j'};
		char letras3[10];
		
		//Copiando los elementos de letras1 hacia letras3
		for(int i=0;i<5;i++){
			letras3[i]=letras1[i];
		}
		
		//Copiando los elementos de letras2 hacia letras3
		for(int i=5;i<10;i++){
			letras3[i]=letras2[i-5];
		}
		
		//Mostrar nuevo vector
		for(int i=0;i<10;i++){
			cout<<letras3[i];
		}
		
		
		
		
		
		
}
