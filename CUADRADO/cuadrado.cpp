#include<iostream>
/*Vamos a hacer un programa que dibuje un cuadrado del tamaño
que quiera el usuario*/

int main(){
    //Definicion de variables
    int lado,col,fil;
    char salir;
    std::cout<<"Escriba el tamaño del cuadrado= ";
    std::cin>> lado;
    for (col=1;col<=lado;col++){
        for (fil=1;fil<=lado;fil++){
            std::cout<<'*';
        }
        std::cout<<"\n";
    }
std::cin>> salir;
}
