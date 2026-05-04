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
    void setPosicion(std::string p) {
        this->posicion = p;
    }
    void mostrarInfo(){
        std::cout << "--- Equipo Jugador ---" << std::endl << getNombre() << std::endl << "Puntos por temporada: " << this->puntosTemporada << std::endl << "Goles anotados: " << this->golesAnotados << std::endl << "Posicion: " << this->posicion << std::endl;
    }
};

class Entrenador : public EquipoFutbol{
    private:
    int aniosexperiencia;
    std::string equipoDirigido;

    public:

    void setAniosExperiencia(int a) {
        this->aniosexperiencia = a;
    }

    void setEquipoDirigido(std::string e) {
        this->equipoDirigido = e;
    }

    void mostrarInfo() {
        std::cout << "--- Equipo Entrenador ---" << std::endl << "Puntos por temporada: " << this->puntosTemporada << std::endl << "Anios de experiencia: " << this->aniosexperiencia << std::endl << "Equipo dirigido: " << this->equipoDirigido << std::endl;
    }
};

int main(){
    Jugador Jugador;
    Entrenador Entrenador;

    Jugador.setNombre("Real Madrid");
    Jugador.setPuntosTemporada(40);
    Jugador.setGolesanotados(20);
    Jugador.setPosicion("Delantero");

    
    Entrenador.setPuntosTemporada(30);
    Entrenador.setAniosExperiencia(18);
    Entrenador.setEquipoDirigido("Barcelona");

    
    Jugador.mostrarInfo();
    Entrenador.mostrarInfo();

    std::cout << "---COMPARACION---" << std::endl;

    if(Jugador.getPuntosTemporada() > Entrenador.getPuntosTemporada()){
        std::cout << "El equipo del jugador tiene mas puntos" << std::endl;
    }
    else if(Jugador.getPuntosTemporada() < Entrenador.getPuntosTemporada()){
         std::cout << "El equipo del Entrenador tiene mas puntos" << std::endl;
    }
    else{
         std::cout << "Los dos equipos tuvieron los mismos puntos." << std::endl;
    } 

    return 0;
}
