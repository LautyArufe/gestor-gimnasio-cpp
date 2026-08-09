#include <iostream>
#include <cstring>
#include "ClaseArcInscripciones.h"
#include "ClaseInscripciones.h"
using namespace std;

/// Constructor:
ArcInscripciones::ArcInscripciones (std::string archivo){
    Archivo=archivo;
}
/// Funciones Guardar / Modificar:
bool ArcInscripciones::Guardar (Inscripciones Inscripcion){
    FILE *pInscripcion=fopen (Archivo.c_str(), "ab");
    if (pInscripcion==NULL){
        return false;
    }
    bool Ok=fwrite (&Inscripcion, sizeof (Inscripciones), 1, pInscripcion);
    fclose (pInscripcion);
    return Ok;
}
bool ArcInscripciones::Modificar (Inscripciones Inscripcion, int Pos){
    FILE *pInscripcion=fopen (Archivo.c_str(), "rb+");
    if (pInscripcion==NULL){
        return false;
    }
    fseek (pInscripcion, sizeof (Inscripciones)*Pos, SEEK_SET);
    bool Ok=fwrite (&Inscripcion, sizeof (Inscripciones), 1, pInscripcion);
    fclose (pInscripcion);
    return Ok;
}
/// Funcion Buscar:
int ArcInscripciones::Buscar (int IdInscripcion){
    FILE *pInscripcion=fopen (Archivo.c_str(), "rb");
    if (pInscripcion==NULL){
        return -1;
    }
    int Pos=0;
    Inscripciones Inscripcion;
    while (fread (&Inscripcion, sizeof (Inscripciones), 1, pInscripcion)==1){
        if (IdInscripcion==Inscripcion.getIdInscripcion ()){
            fclose (pInscripcion);
            return Pos;
        }
        Pos++;
    }
    fclose (pInscripcion);
    return -1;
}
/// Funcion Cant Registros:
int ArcInscripciones::CantRegistros (){
    FILE *pInscripcion=fopen (Archivo.c_str(), "rb");
    if (pInscripcion==NULL){
        return 0;
    }
    fseek (pInscripcion, 0, SEEK_END);
    int Cant=ftell (pInscripcion) / sizeof (Inscripciones);
    fclose (pInscripcion);
    return Cant;
}
/// Funcion Leer:
Inscripciones ArcInscripciones::Leer (int Pos){
    Inscripciones Inscripcion;
    FILE *pInscripcion=fopen (Archivo.c_str(), "rb");
    if (pInscripcion==NULL){
        return Inscripcion;
    }
    fseek (pInscripcion, sizeof (Inscripciones)*Pos, SEEK_SET);
    fread (&Inscripcion, sizeof (Inscripciones), 1, pInscripcion);
    fclose (pInscripcion);
    return Inscripcion;
}


