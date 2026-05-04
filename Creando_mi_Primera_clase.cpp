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
    void SetCilindraje(int cilindraje){
        this->cilindraje = cilindraje;
    }
    int GetCilindraje(){
        return cilindraje;
    }
};

int main(){

    //Primer objeto
    Coche CocheJose;
    //Segundo objeto
    Coche CocheMaria;

    /*CocheJose.Setfabricante("Toyota");
    CocheJose.setCilindraje(1600);
    std::cout << "El fabricante es: " <<  CocheJose.Getfabricante() << std::endl;
    std::cout << "El cilindraje: " << CocheJose.GetCilindraje() << std::endl;
    */
   Coche* ptrCocheJose = &CocheJose;
   Coche* ptrCocheMaria = &CocheMaria;

   ptrCocheJose->SetCilindraje(1600);
   std::cout << "El cilindraje es: " << ptrCocheJose->GetCilindraje() << std::endl;
    return 0;
}