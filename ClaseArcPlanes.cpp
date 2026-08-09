#include <iostream>
#include "ClasePlanes.h"
#include "ClaseArcPlanes.h"
using namespace std;

/// Constructor:
ArcPlanes::ArcPlanes (std::string archivo){
    Archivo=archivo;
}
/// Funciones Guardar / Modificar:
bool ArcPlanes::Guardar (Planes Plan){
    FILE *pPlan=fopen (Archivo.c_str(), "ab");
    if (pPlan==NULL){
        return false;
    }
    bool Ok=fwrite (&Plan, sizeof (Planes), 1, pPlan);
    fclose (pPlan);
    return Ok;
}
bool ArcPlanes::Modificar (Planes Plan, int Pos){
    FILE *pPlan=fopen (Archivo.c_str(), "rb+");
    if (pPlan==NULL){
        return false;
    }
    fseek (pPlan, sizeof (Planes)*Pos, SEEK_SET);
    bool Ok=fwrite (&Plan, sizeof (Planes), 1, pPlan);
    fclose (pPlan);
    return Ok;
}
/// Funcion Buscar:
int ArcPlanes::Buscar (int IdPlan){
    FILE *pPlan=fopen (Archivo.c_str(), "rb");
    if (pPlan==NULL){
        return -1;
    }
    int Pos=0;
    Planes Plan;
    while (fread (&Plan, sizeof (Planes), 1, pPlan)==1){
        if (IdPlan==Plan.getIdPlan ()){
            fclose (pPlan);
            return Pos;
        }
        Pos++;
    }
    fclose (pPlan);
    return -1;
}
/// Funcion Cant Registros:
int ArcPlanes::CantRegistros (){
    FILE *pPlan=fopen (Archivo.c_str(), "rb");
    if (pPlan==NULL){
        return 0;
    }
    fseek (pPlan, 0, SEEK_END);
    int Cant=ftell (pPlan) / sizeof (Planes);
    fclose (pPlan);
    return Cant;
}
/// Funcion Leer:
Planes ArcPlanes::Leer (int Pos){
    Planes Plan;
    FILE *pPlan=fopen (Archivo.c_str(), "rb");
    if (pPlan==NULL){
        return Plan;
    }
    fseek (pPlan, sizeof (Planes)*Pos, SEEK_SET);
    fread (&Plan, sizeof (Planes), 1, pPlan);
    fclose (pPlan);
    return Plan;
}

