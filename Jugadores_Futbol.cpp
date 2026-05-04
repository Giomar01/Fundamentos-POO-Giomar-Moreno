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
    int getPuntosTemporada(){
        return puntosTemporada;

    }
};

class Jugador : public EquipoFutbol{
    private:
    int golesAnotados;
    std::string posicion;

    public:

    void setGolesanotados(int ng){
        this->golesAnotados =ng;
    }
    int
    void mostrarInfo(){
        std::cout << this->nombre << std::endl << "Puntos por temporada: " << this->puntosTemporada << std::endl << "Goles anotados: " << this->golesAnotados << std::endl << "Posicion: " this->posicion << std:endl;
    }
};