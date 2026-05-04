#include <iostream>

class EquipoFutbol{
    private:
    std::string nombre;
    
    protected:
    int puntosTemporada;
    
    public:
    void setNombre(std::string n){
        this->nombre=n;
    }
    std::string getNombre(){
        return nombre;
    }
    void setPuntosTemporada(int numero){
        this->puntosTemporada=numero;
    }
    std::string getNombre(){
        return puntosTemporada;

    }
};

class Jugador : public EquipoFutbol{
    public:
    int golesAnotados;
    std::string posicion;

    void mostrarInfo(){
        std::cout << 
    }
};