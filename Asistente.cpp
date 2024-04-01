#include "Asistente.h"

Asistente::Asistente(std::string nombre,
                     int edad,
                     std::string email,
                     std::string password)
{
    this -> nombre = nombre;
    this -> edad = edad;
    this -> email = email;
    this -> password = password;
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
std:: string Asistente:: getPassword()
{
  return password;
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
void Asistente::setPassword(std::string password)
{
    this -> password = password;
};
//listar asistente
//string Asistente:: toString(){}

