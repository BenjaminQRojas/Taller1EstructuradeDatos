#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>
#include <vector>
#include "Evento.h"
#include "Asistente.h"

//using namespace std;

// DECLARACION DE FUNCIONES
// =========== EVENTO ============//
Evento* crearEvento(std::string nombre, 
                    std::string tipo, 
                    int duracion, 
                    std::string ubicacion,
                    std::string tema){
    return new Evento(nombre,tipo,duracion,ubicacion,tema);
}

Asistente* crearAsistente(std::string nombre,
                          int edad, 
                          std::string email, 
                          std::string password, 
                          std::string ocupacion){ 
    return new Asistente(nombre,edad,email,password,ocupacion);
}

//leer archivo txt
int leerArchivoEventos(/*std::vector<Evento> eventos*/){
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
    /*
    // El archivo está abierto correctamente, ahora puedes leer su contenido
    std::string linea;

    // Lee el archivo línea por línea
    while (std::getline(archivo, linea)) {
        // Procesa cada línea como desees
        std::cout << linea << std::endl;
    }
    */
    // Cierra el archivo
    archivo.close();
    
}

int leerArchivoAsistentes(/*std::vector<Asistente> asistentes*/){
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
    /*
    // El archivo está abierto correctamente, ahora puedes leer su contenido
    std::string linea;

    // Lee el archivo línea por línea
    while (std::getline(archivo, linea)) {
        // Procesa cada línea como desees
        std::cout << linea << std::endl;
    }
    */
    // Cierra el archivo
    archivo.close();
}
// =========== Asistente =============//
//Asistente registrarAsistente();


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
    por hacer:
        agregar const a los metodos getters y a los setters
        quitar los metodos que no se usaran
        quitar includes que no se usaran
*/
int main(){
    vector<Evento*> eventos; // Vector para almacenar los eventos creados
    vector<Asistente*> asistentes; // Vector para almacenar los asistentes registrados
  /*
    /*Evento p1("a","b",2,"c","d");
    std::cout<<p1.getNombre()<<std::endl;*/
    /*
    return 0;
    //Interfaz de usuario
    int opcion = 0;
    cout << "Bienvenido" << endl;
    cout << "1.Crear eventos" << endl;
    cout << "2.Registrar asistentes" << endl;
    cout << "3.Mostrar asistentes" << endl;
    cout << "4.Generar informe" << endl;
    cout << "5.salir" << endl;

    cout << "Ingrese una opcion:" << endl;
    cin >> opcion;
    
    while (opcion != 1 && opcion != 2 && opcion != 3 && opcion != 4 && opcion != 5){
        cin.clear();

        cout << "opcion ingresada no valida" << endl;
        cout << "Ingrese una opcion:" << endl;
        cin >> opcion;
    }

    switch (opcion) {
    case 1:
       //crearEvento(eventos);
        break;
    case 2:
       //registrarAsistentes(asistentes);
        break;
    case 3:
       //ListarAsistente(asistentes);
        break;
    case 4:
        //informe(eventos,asistentes);
        break;
    case 5:
        cout << "Saliendo del programa..." << endl;
        break;
    }
    */
    int a = leerArchivoEventos();
    int b = leerArchivoAsistentes();
    
}

Evento *crearEvento(vector<Evento*>& eventos){
string nombre,codigo,ubicacion,tema;
int duracion;
cout<< "****** Crear Evento ******" << endl;
cout << "Ingresar el nombre del evento:" << endl;
cin >> nombre;
cout << "Ingresar el codigo de evento:" << endl;
cin >> codigo;
cout << "Ingresar la ubicacion del evento:" << endl;
cin>> ubicacion;
cout << "Ingresar el tema del evento:" << endl;
cin>> tema;
cout << "Ingresar la duracion del evento:" << endl;
cin >> duracion;

// Crear un nuevo evento y lo agrega al vector de eventos
Evento* nuevoEvento = new Evento(nombre,codigo,duracion,ubicacion,tema);
eventos.push_back(nuevoEvento);
}
/*
*/
Asistente *crearAsistente(vector<Asistente*>& asistentes){
string nombre,email,password,ocupacion;
int edad;
cout<< "****** Crear Asistente ******" << endl;
cout << "Ingresar el nombre del asistente:" << endl;
cin >> nombre;
cout << "Ingresar el email del asistente:" << endl;
cin >> email;
cout << "Ingresar la contraseña del asistente:" << endl;
cin>> password;
cout << "Ingresar la ocupacion del asistente:" << endl;
cin>> ocupacion;
cout << "Ingresar la edad del asistente:" << endl;
cin >> edad;

// Registra un nuevo asistente y lo agrega al vector asistente
Asistente *nuevoAsistente = new Asistente(nombre,edad,email,password,ocupacion);       
 asistentes.push_back(nuevoAsistente);
}

void listarAsistentes(const vector<Asistente*>& asistentes){
  cout << "****** Lista de Asistentes ******" << endl;
  // Interara sobre el vector de asistente
  for(const auto& asistente: asistentes){
    cout << asistente -> toString() << endl;
  }
}

void listarEvento(const vector<Evento*>& eventos){
  for(const auto& evento: eventos){
    cout << evento -> toString() << endl;
  }
}

void CalcularEdad(const vector<Asistente*>& asistentes){
  //variable 
  int edadPromedio = 0; 
  for(const auto& asistente : asistentes){
    edadPromedio += asistente -> getEdad();
  }
  // calcula la edad si exiten asistentes, si es diferente a vacio.
  if(!asistentes.empty()){
    edadPromedio /= asistentes.size();
    cout << "Edad promedio de los asistentes: " << edadPromedio << "años" << endl;
  }else{
    cout << "No hay asistentes registrados" << endl;
}

void informe(const vector<Evento*>& eventos, const vector<Asistente*>& asistentes){
  cout << "****** Informe ******" << endl;
  //mostra la cantidad de eventos
  cout << "Cantidad de eventos programados: " <<eventos.size() << endl;
  //mostra la lista de eventos que existen
  cout << "Lista de eventos programados: "  << endl;
  listarEvento(eventos);
  // mostrar la cantidad de asistentes registrados
  cout << "Cantidad total de asistentes registrados: " << asistentes.size() << endl;
  // mostrar la edad promedio 
  CalcularEdad(asistentes);
  //mostrar la ocupacion mas comun
  cout << "Ocupacion mas comun: " << endl;
  
}



