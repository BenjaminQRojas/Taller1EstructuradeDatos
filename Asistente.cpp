#include "Asistente.h"

//constructor
Asistente::Asistente(std::string nombre,
                     int edad,
                     std::string email,
                     std::string password,
                     std::string ocupacion)
{
    this -> nombre = nombre;
    this -> edad = edad;
    this -> email = email;
    this -> password = password;
    this -> ocupacion = ocupacion;
};

//destructor
Asistente::~Asistente(){};

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
std:: string Asistente:: getOcupacion()
{
    return ocupacion;
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
void Asistente::setOcupacion(std::string ocupacion)
{
    this -> ocupacion = ocupacion;
};

//toString

std::string Asistente:: toString()
{
    return "nombre: "+nombre+", email: "+email+", ocupacion: "+ocupacion;
};

