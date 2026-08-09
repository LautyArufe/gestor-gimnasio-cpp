#include <iostream>
#include "ClaseArcSocios.h"
#include "ClaseSocios.h"
using namespace std;

/// Constructor:
ArcSocios::ArcSocios (std::string archivo){
    Archivo=archivo;
}
/// Funciones Guardar / Modificar:
bool ArcSocios::Guardar (Socios Socio){
    FILE *pSocio=fopen (Archivo.c_str(), "ab");
    if (pSocio==NULL){
        return false;
    }
    bool Ok=fwrite (&Socio, sizeof (Socios), 1, pSocio);
    fclose (pSocio);
    return Ok;
}
bool ArcSocios::Modificar (Socios Socio, int Pos){
    FILE *pSocio=fopen (Archivo.c_str(), "rb+");
    if (pSocio==NULL){
        return false;
    }
    fseek (pSocio, sizeof (Socios)*Pos, SEEK_SET);
    bool Ok=fwrite (&Socio, sizeof (Socios), 1, pSocio);
    fclose (pSocio);
    return Ok;
}
/// Funcion Buscar:
int ArcSocios::Buscar (int IdSocio){
    FILE *pSocio=fopen (Archivo.c_str(), "rb");
    if (pSocio==NULL){
        return -1;
    }
    int Pos=0;
    Socios Socio;
    while (fread (&Socio, sizeof (Socios), 1, pSocio)==1){
        if (Socio.getIdSocio()==IdSocio){
            fclose (pSocio);
            return Pos;
        }
        Pos++;
    }
    fclose (pSocio);
    return -1;
}
/// Funcion Cant Registros:
int ArcSocios::CantRegistros (){
    FILE *pSocio=fopen (Archivo.c_str(), "rb");
    if (pSocio==NULL){
        return 0;
    }
    fseek (pSocio, 0, SEEK_END);
    int Cant=ftell (pSocio) / sizeof (Socios);
    fclose (pSocio);
    return Cant;
}
/// Funcion Leer:
Socios ArcSocios::Leer (int Pos){
    Socios Socio;
    FILE *pSocio=fopen (Archivo.c_str(), "rb");
    if (pSocio==NULL){
        return Socio;
    }
    fseek (pSocio, sizeof (Socios)*Pos, SEEK_SET);
    fread (&Socio, sizeof (Socios), 1, pSocio);
    fclose (pSocio);
    return Socio;
}

