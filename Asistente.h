#pragma once
#include <iostream>
#include <stdlib.h>
#include <string.h>

//clase padre de Profesional y Estudiante
class Asistente
{
    private:
        //atributos
        std::string nombre;
        int edad;
        std::string email;
        std::string password;
    public:
        //constructor  
        Asistente(std::string, int, std::string, std::string);
        //getters
        std::string getNombre();
        int getEdad();
        std::string getEmail();
        std::string getPassword();
        //setters
        void setNombre(std::string nombre);
        void setEdad(int edad);
        void setEmail(std::string email);
        void setPassword(std::string password);
};
