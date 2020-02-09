#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int matriz[3][3]={1,2,3 , 4,5,6 , 7,8,9};
	
	cout<<"La matriz es: \n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<" ";
			cout<<matriz[i][j];
		}
		cout<<"\n";
	}
	cout<<"La diagonal principal de la matriz es: \n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			
			if (i==j){
				cout<<" "<<matriz[i][j];
			}
			else {
				cout<<" "<<0;
			}
		}
		cout<<"\n";
	}
	
	cout<<"\n\n";
	system("pause");
	return 0;
}
