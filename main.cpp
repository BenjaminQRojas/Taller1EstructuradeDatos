#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "Evento.h"
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
    /*Evento p1("a","b",2,"c","d");
    std::cout<<p1.getNombre()<<std::endl;*/
    return 0;
    //Interfaz de usuario
    int opcion = 0;
    cout << "Bienvenido" << endl;
    cout << "1.Crear eventos" << endl;
    cout << "2.Registrar asistentes" << endl;
    cout << "3.Mostrar asistentes" << endl;
    cout << "4.Generar informe << endl;
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
       //crearEvednto();
        break;
    case 2:
       //registrarAsistentes();
        break;
    case 3:
       //ListarAsistente();
        break;
    case 4:
        //informe();
        break;
    case 5:
        cout << "Saliendo del programa..." << endl;
        break;
    }
    
    
    
    
}

