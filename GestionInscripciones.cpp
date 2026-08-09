#include <iostream>
#include <cstring>
#include "Gestiones.h"
#include "ClaseArcInscripciones.h"
#include "ClaseInscripciones.h"
using namespace std;

/// Funcion Cargar Registro:
void CargarRegistroInscripcion (){
    ArcInscripciones InscripcionesDat ("inscripciones.dat");
    Inscripciones Inscripcion;
    Inscripcion.CargarInscripcion ();
    bool Ok=InscripcionesDat.Guardar (Inscripcion);
    if (Ok){
        cout<< "La Inscripcion Se Registro Correctamente "<<endl;
        system ("pause");
        system ("cls");
    }
    else {
        cout<< "Error!! "<<endl;
        system ("pause");
        system ("cls");
    }
}
/// Funcion Modificar Registro:
void ModificarRegistroInscripcion (){
    ArcInscripciones InscripcionesDat ("inscripciones.dat");
    if (InscripcionesDat.CantRegistros ()==0){
        cout<< "No Hay Inscripciones Registradas "<<endl;
        system ("pause");
        system ("cls");
    }
    else {
        cout<< "Ingrese El ID De La Inscripcion Que Desea Modificar: ";
        int IdInscripcion;
        cin>> IdInscripcion;
        system ("cls");
        while (InscripcionesDat.Buscar (IdInscripcion)==-1){
            cout<< "El ID Ingresado No Existe "<<endl;
            cout<< "Ingrese Un ID Valido "<<endl;
            cin>> IdInscripcion;
            system ("cls");
        }
        int Pos=InscripcionesDat.Buscar (IdInscripcion);
        Inscripciones Inscripcion=InscripcionesDat.Leer (Pos);
        if (Inscripcion.getEstado ()==true){
        Inscripcion.ModificarInscripcion ();
        bool Ok=InscripcionesDat.Modificar (Inscripcion, Pos);
        if (Ok){
            cout<< "Se Modifico El Registro Correctamente "<<endl;
            system ("pause");
            system ("cls");
        }
        else {
            cout<< "Error!! "<<endl;
            system ("pause");
            system ("cls");
        }
        }
        else {
            cout<< "La Inscripcion Del ID Ingresado Se Dio De Baja "<<endl;
            system ("pause");
            system ("cls");
        }
    }
}
/// Funcion Listar Registros:
void ListarRegistrosInscripciones (){
    ArcInscripciones InscripcionesDat ("inscripciones.dat");
    if (InscripcionesDat.CantRegistros ()==0){
        cout<< "No Hay Inscripciones Registradas "<<endl;
        system ("pause");
        system ("cls");
    }
    else {
        Inscripciones Inscripcion;
        int Cant=InscripcionesDat.CantRegistros ();
        for (int i=0; i<Cant; i++){
            Inscripcion=InscripcionesDat.Leer (i);
            if (Inscripcion.getEstado ()==true){
            Inscripcion.MostrarInscripcion ();
            }
        }
        system ("pause");
        system ("cls");
    }
}
/// Funcion Eliminar Registro:
void EliminarRegistroInscripcion (){
    ArcInscripciones InscripcionesDat ("inscripciones.dat");
    if (InscripcionesDat.CantRegistros ()==0){
        cout<< "No Hay Inscripciones Registradas Para Dar De Baja "<<endl;
        system ("pause");
        system ("cls");
    }
    else {
    cout<< "Ingrese El ID De La Inscripcion Que Desea Dar De Baja: ";
    int IdInscripcion;
    cin>> IdInscripcion;
    while (InscripcionesDat.Buscar (IdInscripcion)==-1){
        cout<< "El ID Ingresado No Existe "<<endl;
        cout<< "Ingrese Un ID Valido "<<endl;
        cin>> IdInscripcion;
        system ("cls");
    }
    int Pos=InscripcionesDat.Buscar (IdInscripcion);
    Inscripciones Inscripcion=InscripcionesDat.Leer (Pos);
    if (Inscripcion.getEstado ()==true){
        Inscripcion.setEstado (false);
        bool Ok=InscripcionesDat.Modificar (Inscripcion, Pos);
        if (Ok){
            cout<< "La Inscripcion Se Dio De Baja Correctamente "<<endl;
            system ("pause");
            system ("cls");
        }
        else {
            cout<< "Error!! "<<endl;
            system ("pause");
            system ("cls");
        }
        }
    }
}
