#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int matriz1[3][3];
	int matriz2[3][3];
	int matriz[3][3];
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			matriz1[i][j]=1+rand()%9;
			matriz2[i][j]=1+rand()%9;
		}
	}
	
	cout<<"La primera matriz es: \n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<" "<<matriz1[i][j];
		}
		cout<<"\n";
	}
	
	cout<<"La segunda matriz es: \n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<" "<<matriz2[i][j];
		}
		cout<<"\n";
	}
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			matriz[i][j]=matriz1[i][j]+matriz2[i][j];
		}
	}
	
	cout<<"La suma de las matrices es: \n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<" "<<matriz[i][j];
		}
		cout<<"\n";
	}
	
	
	cout<<"\n\n";
	system("pause");
	return 0;
}
