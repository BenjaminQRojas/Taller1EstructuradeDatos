#pragma once
#include <iostream>
#include <stdlib.h>
#include <string.h>


class Asistente
{
    private:
        //atributos
        std::string nombre;
        int edad;
        std::string email;
        std::string password;
        std::string ocupacion;
    public:
        //constructor  
        Asistente(std::string, int, std::string, std::string, std::string);
        //destructor
        ~Asistente();
        //getters
        std::string getNombre();
        int getEdad();
        std::string getEmail();
        std::string getPassword();
        std::string getOcupacion();
        //setters
        void setNombre(std::string nombre);
        void setEdad(int edad);
        void setEmail(std::string email);
        void setPassword(std::string password);
        void setOcupacion(std::string ocupacion);
        //toString
        std::string toString();
};
