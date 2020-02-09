#include<iostream>

int main() {
    //Definicion de variables
    int naltura;
    int count;
    int espacio;
    int asterisco;
    char salir;
    std::cout<< "Que altura quieres que tenga la piramide: ";
    std::cin>> naltura;
    for (count=0;count<=naltura;count++){
            for (espacio=0;espacio<=naltura-count;espacio++){
                std::cout <<" ";
                }
            for(asterisco=0;asterisco<=count*2-2;asterisco++){
                std::cout<<"*";
                }      
                std::cout<<"\n";
        } 
    
    std::cin>> salir;
}
