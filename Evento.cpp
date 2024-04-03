#include "Evento.h"

//constructor
Evento::Evento(std::string nombre,
               int codigo, 
               int duracion, 
               std::string ubicacion, 
               std::string tema):listAsistente()
{
    this -> nombre = nombre;
    this -> codigo = codigo;
    this -> duracion = duracion;
    this -> ubicacion = ubicacion;
    this -> tema = tema;
};

//destructor
Evento::~Evento(){};

//metodos
bool Evento::agregarAsistente(Asistente* asistente)
{
    try {
        listAsistente.push_back(asistente);
        return true; 
    } catch (const std::bad_alloc& e) {
        std::cerr << "Error: No se pudo agregar el asistente debido a la falta de memoria." << std::endl;
        return false; 
    }
};

//getters
std::string Evento::getNombre()
{
    return nombre;
};

int Evento::getCodigo()
{
    return codigo;
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

void Evento::setCodigo(int codigo)
{
    this -> codigo = codigo;
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

//toString()
std::string Evento:: toString()
{
    return "nombre: "+nombre+", codigo: " + std::to_string(codigo) + ", duracion: " +std::to_string(duracion);
};
