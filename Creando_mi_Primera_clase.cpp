#include <iostream>
#include <string>


class Coche{

public:
    //Atributos

    std::string fabricante;
    int cilindraje;
    int potencia;
    std::string color;
    double precio;

    //Metodos

    void encender(){

        std::cout << "El coche esta encendido" << std::endl;
    }
    void acelerar(){

        std::cout << "El coche esta en marcha" << std::endl;
    }
    void frenar(){

        std::cout << "El coche freno" << std::endl;
    }
    void girar(){
        std::cout << "El coche giro" << std::endl;
    }
    void Setfabricante(std::string fabricante){
        this->fabricante = fabricante;
    }
    std::string Getfabricante(){
        return fabricante;
    }
};

int main(){

    //Primer objeto
    Coche CocheJose;
    //Segundo objeto
    Coche CocheMaria;

    CocheJose.Setfabricante("Toyota");

    std::cout << "El fabricante es: " <<  CocheJose.Getfabricante() << std::endl;
    return 0;
}