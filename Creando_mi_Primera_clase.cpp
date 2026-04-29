#include <iostream>
#include <string.h>


class Coche{

private:
    //Atributos

    //std::string fabricante;
    int cilindraje;
    int potencia;
    //std::string color;
    double precio;

    //Metodos

    void encender(){

        std::cout << "El coche esta encendido" << std::endl;
    }
     void acelerar(){

        std::cout << "El coche esta en marcha" << std::endl;
    }
     void frenar(){

        std::cout << "El coche se detuvo" << std::endl;
    }
};

int main(){

    Coche Coche;
    return 0;
}