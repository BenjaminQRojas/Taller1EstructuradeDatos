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
    this -> eventoAsistido = nullptr;
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
Evento* Asistente:: getEventoAsistido(){
  return eventoAsistido()
}

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
void Asistente:: setEventoAsistido(Evento* evento){
  this -> eventoAsistido = evento;
}

//toString

std::string Asistente:: toString()
{
    return "nombre: "+nombre+", email: "+email+", ocupacion: "+ocupacion;
};

