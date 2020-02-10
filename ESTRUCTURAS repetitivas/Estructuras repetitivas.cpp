#include<iostream>

int main(){
	//La sentencia if
		int numero=0;
		
		if(numero=0){
			cout<<"El numero es cero";
		}
		else{
			cout<<"El numero no es cero;"
		}
		
	//La sentencia switch
		int numero;
		
		cin numero;
		
		switch(numero){
			case 1: cout<<"El numero es 1"; break;
			case 2: cout<<"El numero es 2"; break;
			case 3: cout<<"El numero es 3"; break;
			default: cout<<"El numero no es ninguno"; break;
		}
		
	//La sentencia while
		int i;
		
		i=1;
		
		while(i<10){
			cout<<i;
			i++;
		}
		
	//La sentencia do while
		int i;
		
		i=10;
		
		do{
			cout<<i;
			i--;//decrementa el iterador de uno en uno
		}while(i>=1);
		
	//La sentencia for
		int i;
		
		for(i=1;i<=10;i++){
			cout<<i;
		}
	
	
	
	
	
	
	
	
}
