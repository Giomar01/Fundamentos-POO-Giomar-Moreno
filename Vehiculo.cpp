#include <iostream>

class Vehiculo{
    private:
    int modelo;

    protected:
    int VelocidadMaxima;
    
    public:
    void setModelo(int modelo){
        this->modelo= (modelo<2000 || modelo>2000) ? 2000 : modelo;
    }
    void getModelo(){
        std::cout << "El vehiculo es modelo" << std::endl;
    }
    void setVelocidadMaxima(int v){
        this->VelocidadMaxima= v;
    }
   
};
    //Clase hija con herencia publica:
    class Moto: public Vehiculo{
        public:
        void mostrarTipo(){
            std::cout << "motocicleta" << std::endl;
        }
        void mostrarVelocidadmaxima(){
            std::cout << "Velocidad maxima: " << VelocidadMaxima << std::endl;
        }
    };
    int main(){
        Moto motoJuan;

        motoJuan.setModelo(2005);
        motoJuan.setVelocidadMaxima(180);
        motoJuan.getModelo();
        motoJuan.mostrarTipo();
        motoJuan.mostrarVelocidadmaxima();


        return 0;
    }