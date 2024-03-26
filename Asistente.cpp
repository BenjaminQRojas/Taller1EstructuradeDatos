#include "Asistente.h"

Asistente::Asistente(std::string nombre,
                     int edad,
                     std::string email,
                     std::string contraseña)
{
    this -> nombre = nombre;
    this -> edad = edad;
    this -> email = email;
    this -> contraseña = contraseña;
};

//getters
std:: string Asistente::getNombre()
{
    return nombre;
};

int Asistente::getEdad()
{
    return edad;
};

std:: string Asistente::getEmail()
{
    return email;
};
std:: string Asistente:: getContraseña()
{
  return contraseña;
};

//setters
void Asistente::setNombre(std::string nombre)
{
    this -> nombre = nombre;
};
void Asistente::setEdad(int edad)
{
    this -> edad = edad;
};
void Asistente::setEmail(std::string email)
{
    this -> email = email;
};
void Asistente::setContraseña(std::string contraseña)
{
    this -> contraseña = contraseña;
};
//listar asistente
//string Asistente:: toString(){}

