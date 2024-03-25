#include "Evento.h"

Evento::Evento(std::string nombre,
               std::string tipo, 
               int duracion, 
               std::string ubicacion, 
               std::string tema)
{
    this -> nombre = nombre;
    this -> tipo = tipo;
    this -> duracion = duracion;
    this -> ubicacion = ubicacion;
    this -> tema = tema;
};

//getters
std::string Evento::getNombre()
{
    return nombre;
};

std::string Evento::getTipo()
{
    return tipo;
};

int Evento::getDuracion()
{
    return duracion;
};

std::string Evento::getUbicacion()
{
    return ubicacion;
};

std::string Evento::getTema()
{
    return tema;
};

//setters
void Evento::setNombre(std::string nombre)
{
    this -> nombre = nombre;
};

void Evento::setTipo(std::string tipo)
{
    this -> tipo = tipo;
};

void Evento::setDuracion(int duracion)
{
    this -> duracion = duracion;
};
void Evento::setUbicacion(std::string ubicacion)
{
    this -> ubicacion = ubicacion;
};
void Evento::setTema(std::string tema)
{
    this -> tema = tema;
};