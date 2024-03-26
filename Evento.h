#pragma once
#include <iostream>
#include <stdlib.h>
#include <string.h>

class Evento
{
    private:
        std::string nombre;
        std::string tipo;
        int duracion;
        std::string ubicacion;
        std::string tema;
    public:
        //constructor
        Evento(std::string,std::string,int,std::string,std::string);
        //getters
        std::string getNombre();
        std::string getTipo();
        int getDuracion();
        std::string getUbicacion();
        std::string getTema();
        //setters
        void setNombre(std::string nombre);
        void setTipo(std::string tipo);
        void setDuracion(int duracion);
        void setUbicacion(std::string ubicacion);
        void setTema(std::string tema);
};