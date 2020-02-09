#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int matriz1[3][3] = {{1,2,3},{1,2,3},{1,2,3}}, matriz[3][3];
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			matriz[i][j]=matriz1[i][j]*matriz1[i][j];
		}
	}
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<" "<<matriz[i][j];
		}
		cout<<"\n";
	}
	
	cout<<"\n\n";
	getch();
	return 0;
}
