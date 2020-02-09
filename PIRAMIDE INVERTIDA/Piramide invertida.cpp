#include<iostream>
int main(){
    //Definicion de variable//
    int naltura;
    int count;
    int espacio;
    int asterisco;
    char salir;
    std::cout<<"Esctiba la altura de la piramide: ";
    std::cin>> naltura;
    for (count=1;count<=naltura;count++){
        for (espacio=1;espacio<=count;espacio++){
            std::cout<<" ";
            }
            for (asterisco=1;asterisco<=(naltura-count)*2-1;asterisco++){
                std::cout<<"*";
                }
                std::cout<<"\n";          
    }      
                
    



std::cin>> salir;
}
