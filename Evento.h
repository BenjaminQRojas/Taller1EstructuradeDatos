#pragma once
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "Asistente.h"
#include <vector>

using namespace std;

class Evento
{
    private:
        std::string nombre;
        std::string tipo;
        int duracion;
        std::string ubicacion;
        std::string tema;
        std:: vector<Asistente*> listAsistente;
    public:
        //constructor
        Evento(std::string,std::string,int,std::string,std::string);
        //destructor
        ~Evento();
        //metodos
        bool agregarAsistente(Asistente* asistente);
        //getters
        std::string getNombre();
        std::string getTipo();
        int getDuracion();
        std::string getUbicacion();
        std::string getTema();
        std::vector<Asistente*> getListAsistente;
        //setters
        void setNombre(std::string nombre);
        void setTipo(std::string tipo);
        void setDuracion(int duracion);
        void setUbicacion(std::string ubicacion);
        void setTema(std::string tema);
        std::string toString();
};
