#pragma once
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <string>
#include "Asistente.h"
#include <vector>

using namespace std;

class Evento
{
    private:
        std::string nombre;
        int codigo;
        int duracion;
        std::string ubicacion;
        std::string tema;
        std:: vector<Asistente*> listAsistente;
    public:
        //constructor
        Evento(std::string,int,int,std::string,std::string);
        //destructor
        ~Evento();
        //metodos
        bool agregarAsistente(Asistente* asistente);
        int getCantidadAsistentes();
        //getters
        std::string getNombre();
        int getCodigo();
        int getDuracion();
        std::string getUbicacion();
        std::string getTema();
        std::vector<Asistente*> getListAsistente();
        //setters
        void setNombre(std::string nombre);
        void setCodigo(int codigo);
        void setDuracion(int duracion);
        void setUbicacion(std::string ubicacion);
        void setTema(std::string tema);
        //to_string
        std::string toString();
};
