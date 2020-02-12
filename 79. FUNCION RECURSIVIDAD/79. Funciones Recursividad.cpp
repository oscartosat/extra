#include<iostream>
#include<conio.h>

using namespace std;

int factorial(int);


int main(){

	cout<<"Factorial: "<<factorial(6)<<endl;
	
	getch();
	return 0;
}

int factorial(int n){
	if(n==0){ //Caso base
		n=1;
	}
	else{ //Caso general
		n=n*factorial(n-1);
	}
	return n;
}


