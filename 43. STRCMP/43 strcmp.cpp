#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char palabra1[]="becerro";
	char palabra2[]="aviom";
	
	if(strcmp(palabra1,palabra2)>0){
		cout<<palabra1<<" esta despues alfabeticamente";
	}
	cout<<"\n\n";
	getch();
	return 0;
}
