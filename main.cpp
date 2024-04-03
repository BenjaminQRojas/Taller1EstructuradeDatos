#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include "Evento.h"
#include "Asistente.h"

/*
    REQUERIMIENTOS
    1.- crear eventos
    2.- registrar asistentes
    3.- mostrar asistentes
    4.- leer y crear archivos .txt (leer datos anteriores y guardar datos)
    5.- Los informes generados podrían incluir datos como:
    6.- Lista de eventos programados.
    7.- Lista de asistentes registrados para cada evento.
    8.- Estadísticas sobre la asistencia a los eventos (por ejemplo, número total de asistentes, asistencia promedio por evento, etc.).
    9.- Detalles sobre los asistentes (por ejemplo, edad promedio, ocupaciones más comunes, etc.).
    10.- Información sobre eventos específicos, como la duración, la ubicación y el tema.
*/

/*
    FALTA:
        ENLAZAR ASISTENTE CON EVENTO
        CONTROL DE ERRORES
        ACTUALIZAR Y GUARDAR DATOS REGISTRADOS (modificar archivos txt)

*/

/**
 * funcion que retorna un puntero de la clase evento
*/
Evento* crearEvento(std::string nombre, 
                    int codigo, 
                    int duracion, 
                    std::string ubicacion,
                    std::string tema){
    return new Evento(nombre,codigo,duracion,ubicacion,tema);
}

/**
 * funcion para crear un evento mediante input
*/
void crearEvento(vector<Evento*>& eventos){
    std::string nombre,ubicacion,tema;
    int codigo,duracion;
    std::cout<< "****** Crear Evento ******" << std::endl;
    std::cout << "Ingresar el nombre del evento:" << std::endl;
    std::cin >> nombre;
    std::cout << "Ingresar el codigo de evento:" << std::endl;
    std::cin >> codigo;
    std::cout << "Ingresar la ubicacion del evento:" << std::endl;
    std::cin>> ubicacion;
    std::cout << "Ingresar el tema del evento:" << std::endl;
    std::cin>> tema;
    std::cout << "Ingresar la duracion del evento:" << std::endl;
    std::cin >> duracion;
    // Crear un nuevo evento y lo agrega al vector de eventos
    Evento* nuevoEvento = new Evento(nombre,codigo,duracion,ubicacion,tema);
    eventos.push_back(nuevoEvento);
}

/**
 * funcion que retorna un puntero de la clase asistente
*/
Asistente* crearAsistente(std::string nombre,
                          int edad, 
                          std::string email, 
                          std::string password, 
                          std::string ocupacion){ 
    return new Asistente(nombre,edad,email,password,ocupacion);
}

/**
 * funcion para crear asistente mediante input
*/
void crearAsistente(vector<Asistente*>& asistentes){
    std::string nombre,email,password,ocupacion;
    int edad;
    std::cout<< "****** Crear Asistente ******" << std::endl;
    std::cout << "Ingresar el nombre del asistente:" << std::endl;
    std::cin >> nombre;
    std::cout << "Ingresar el email del asistente:" << std::endl;
    std::cin >> email;
    std::cout << "Ingresar la contraseña del asistente:" << std::endl;
    std::cin>> password;
    std::cout << "Ingresar la ocupacion del asistente:" << std::endl;
    std::cin>> ocupacion;
    std::cout << "Ingresar la edad del asistente:" << std::endl;
    std::cin >> edad;

    // Registra un nuevo asistente y lo agrega al vector asistente
    Asistente *nuevoAsistente = new Asistente(nombre,edad,email,password,ocupacion);       
    asistentes.push_back(nuevoAsistente);
}

/**
 * funcion para leer archivo Eventos.txt
*/
int leerArchivoEventos(std::vector<Evento*>& eventos){
    // Abre el archivo en modo de lectura
    std::ifstream archivo("Eventos.txt");

    // Verifica si se pudo abrir correctamente
    if (!archivo.is_open()) {
        std::cerr << "El archivo no existe. Creando el archivo Eventos.txt" << std::endl;
        
        // Intenta crear el archivo
        std::ofstream nuevoArchivo("Eventos.txt");
        
        // Verifica si se pudo crear correctamente
        if (!nuevoArchivo.is_open()) {
            std::cerr << "Error al crear el archivo." << std::endl;
            return 1;
        }
        
        // Cierra el nuevo archivo
        nuevoArchivo.close();
        
        // Intenta abrir el archivo nuevamente en modo de lectura
        archivo.open("Eventos.txt");
        
        // Verifica si se pudo abrir correctamente
        if (!archivo.is_open()) {
            std::cerr << "Error al abrir el archivo después de crearlo." << std::endl;
            return 1;
        }
    }
    
    // El archivo está abierto correctamente, ahora puedes leer su contenido
    std::string linea;

    // Lee el archivo línea por línea
    while (std::getline(archivo, linea)) {
        std::stringstream ss(linea);
        std::string nombre, ubicacion, tema;
        int codigo, duracion;
        char comma;
        if (std::getline(ss, nombre, ',') &&
            (ss >> codigo >> comma) &&
            (ss >> duracion >> comma) &&
            std::getline(ss, ubicacion, ',') &&
            std::getline(ss, tema)) {
            // Crea un objeto Evento con los datos extraídos y lo agrega al vector
            eventos.push_back(crearEvento(nombre,codigo,duracion,ubicacion,tema));
        } else {
            std::cerr << "Error al analizar la línea: " << linea << std::endl;
        }
    }
    
    // Cierra el archivo
    archivo.close();
    
}

/**
 * funcion para leer archivo Asistentes.txt
*/
int leerArchivoAsistentes(std::vector<Asistente*>& asistentes){
    // Abre el archivo en modo de lectura
    std::ifstream archivo("Asistentes.txt");

    // Verifica si se pudo abrir correctamente
    if (!archivo.is_open()) {
        std::cerr << "El archivo no existe. Creando el archivo Asistentes.txt" << std::endl;
        
        // Intenta crear el archivo
        std::ofstream nuevoArchivo("Asistentes.txt");
        
        // Verifica si se pudo crear correctamente
        if (!nuevoArchivo.is_open()) {
            std::cerr << "Error al crear el archivo." << std::endl;
            return 1;
        }
        
        // Cierra el nuevo archivo
        nuevoArchivo.close();
        
        // Intenta abrir el archivo nuevamente en modo de lectura
        archivo.open("Asistentes.txt");
        
        // Verifica si se pudo abrir correctamente
        if (!archivo.is_open()) {
            std::cerr << "Error al abrir el archivo después de crearlo." << std::endl;
            return 1;
        }
    }
    
    // El archivo está abierto correctamente, ahora puedes leer su contenido
    std::string linea;

    // Lee el archivo línea por línea
    while (std::getline(archivo, linea)) {
        std::stringstream ss(linea);
        std::string nombre, password, email, ocupacion;
        int edad;
        char comma;
        if (std::getline(ss, nombre, ',') &&
            (ss >> edad >> comma) &&
            std::getline(ss, email , ',') &&
            std::getline(ss, password, ',') &&
            std::getline(ss, ocupacion)) {
            // Crea un objeto Evento con los datos extraídos y lo agrega al vector
            asistentes.push_back(crearAsistente(nombre,edad,email,password,ocupacion));
        } else {
            std::cerr << "Error al analizar la línea: " << linea << std::endl;
        }
    }
    
    // Cierra el archivo
    archivo.close();
}

/**
 * funcion para mostrar todos los asistentes registrados
*/
void listarAsistentes(const vector<Asistente*>& asistentes){
    std::cout << "****** Lista de Asistentes ******" << std::endl;
    // Interara sobre el vector de asistente
    for(const auto& asistente: asistentes){
        std::cout << asistente -> toString() << std::endl;
    }
}

/**
 * funcion para mostrar todos los eventos registrados
*/
void listarEvento(const vector<Evento*>& eventos){
    for(const auto& evento: eventos){
        std::cout << evento -> toString() << std::endl;
    }
}

/**
 * calcula la edad promedio de los asistentes registrados
*/
void CalcularEdad(const vector<Asistente*>& asistentes){
  //variable 
    int edadPromedio = 0; 
    for(const auto& asistente : asistentes){
        edadPromedio += asistente -> getEdad();
    }
    // calcula la edad si exiten asistentes, si es diferente a vacio.
    if(!asistentes.empty()){
        edadPromedio /= asistentes.size();
        std::cout << "Edad promedio de los asistentes: " << edadPromedio << "años" << std::endl;
    }else{
        std::cout << "No hay asistentes registrados" << std::endl;
    }
}


void informe(const vector<Evento*>& eventos, const vector<Asistente*>& asistentes){
    std::cout << "****** Informe ******" << std::endl;
    //mostra la cantidad de eventos
    std::cout << "Cantidad de eventos programados: " <<eventos.size() << std::endl;
    //mostra la lista de eventos que existen
    std::cout << "Lista de eventos programados: "  << std::endl;
    listarEvento(eventos);
    // mostrar la cantidad de asistentes registrados
    std::cout << "Cantidad total de asistentes registrados: " << asistentes.size() << std::endl;
    // mostrar la edad promedio 
    CalcularEdad(asistentes);
    //mostrar la ocupacion mas comun
    std::cout << "Ocupacion mas comun: " << std::endl;
    
}

/**
 * Interfaz del usuario
*/
void interfazUsuario(std::vector<Asistente*>& asistentes, std::vector<Evento*>& eventos){
    int opcion = 0;
    std::cout << "Bienvenido" << std::endl;
    std::cout << "1.Crear eventos" << std::endl;
    std::cout << "2.Registrar asistentes" << std::endl;
    std::cout << "3.Mostrar asistentes" << std::endl;
    std::cout << "4.Generar informe" << std::endl;
    std::cout << "5.salir" << std::endl;

    std::cout << "Ingrese una opcion:" << std::endl;
    std::cin >> opcion;
    
    while (opcion != 1 && opcion != 2 && opcion != 3 && opcion != 4 && opcion != 5){
        std::cin.clear();

        std::cout << "opcion ingresada no valida" << std::endl;
        std::cout << "Ingrese una opcion:" << std::endl;
        std::cin >> opcion;
    }

    switch (opcion) {
    case 1:
        //crearEvento(eventos);
        break;
    case 2:
        //registrarAsistentes(asistentes);
        break;
    case 3:
        listarAsistentes(asistentes);
        break;
    case 4:
        //informe(eventos,asistentes);
        break;
    case 5:
        std::cout << "Saliendo del programa..." << std::endl;
        break;
    }
    
}

/**
 *  Esta función elimina los objetos apuntados por los punteros en los vectores de asistentes y eventos,
 * y luego limpia los vectores, dejándolos vacíos.
*/
void destructores(std::vector<Asistente*>& asistentes, std::vector<Evento*>& eventos){
    //libera la memoria de los objetos Evento
    for( auto& evento: eventos){
        delete evento;
    }
    //limpia el vector de punteros Evento
    eventos.clear();

    //libera la memoria de los objetos Asistente
    for( auto& asistente: asistentes){
        delete asistente;
    }
    //limpia el vector de punteros Asistente
    asistentes.clear();
}

int main(){
    vector<Evento*> eventos; // Vector para almacenar los eventos creados
    vector<Asistente*> asistentes; // Vector para almacenar los asistentes registrados
    leerArchivoAsistentes(asistentes);
    leerArchivoEventos(eventos);
    //Interfaz de usuario
    interfazUsuario(asistentes,eventos);
    
    destructores(asistentes,eventos);
    return 0;
}





