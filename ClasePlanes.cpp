#include <iostream>
#include <cstring>
#include "CargarCadena.h"
#include "ClasePlanes.h"
#include "ClaseArcPlanes.h"
using namespace std;

/// Constructor:
Planes::Planes (){
    IdPlan=0;
    strncpy (NombrePlan, "0", 30);
    Importe=0;
    DuracionDias=0;
    strncpy (Descripcion, "0", 100);
    Estado=true;
}
/// Setters:
void Planes::setIdPlan (int idplan){
    IdPlan=idplan;
}
void Planes::setNombrePlan (const char* nombreplan){
    strncpy (NombrePlan, nombreplan, 30);
}
void Planes::setImporte (float importe){
    Importe=importe;
}
void Planes::setDuracionDias (int duraciondias){
    DuracionDias=duraciondias;
}
void Planes::setDescripcion (const char* descripcion){
    strncpy (Descripcion, descripcion, 100);
}
void Planes::setEstado (bool estado){
    Estado=estado;
}
/// Getters:
int Planes::getIdPlan (){
    return IdPlan;
}
const char* Planes::getNombrePlan (){
    return NombrePlan;
}
float Planes::getImporte (){
    return Importe;
}
int Planes::getDuracionDias (){
    return DuracionDias;
}
const char* Planes::getDescripcion (){
    return Descripcion;
}
bool Planes::getEstado (){
    return Estado;
}
/// Funciones Cargar / Modificar / Mostrar:
void Planes::CargarPlan (){
    ArcPlanes PlanesDat ("planes.dat");
    cout<< "| PLAN |"<<endl;
    IdPlan=PlanesDat.CantRegistros () + 1;
    cout<< "ID: "<<IdPlan<<endl;
    cout<< "Ingrese El Nombre: ";
    CargarCadena (NombrePlan, 30);
    cout<< "Ingrese El Importe: $";
    cin>> Importe;
    cout<< "Ingrese La Duracion En Dias: ";
    cin>> DuracionDias;
    cout<< "Ingrese La Descripcion: ";
    CargarCadena (Descripcion, 100);
}
void Planes::ModificarPlan (){
    cout<< "| PLAN |"<<endl;
    cout<< "Que Desea Modificar Del Plan? "<<endl;
    cout<< "1 - Nombre "<<endl;
    cout<< "2 - Importe "<<endl;
    cout<< "3 - Duracion En Dias "<<endl;
    cout<< "4 - Descripcion "<<endl;
    cout<< "Ingrese Una Opcion: ";
    int Opc;
    do {
        cin>> Opc;
        switch (Opc){
        case 1:
            cout<< "Nombre Actual: "<<NombrePlan<<endl;
            cout<< "Ingrese El Nuevo Nombre: ";
            CargarCadena (NombrePlan, 30);
            break;
        case 2:
            cout<< "Importe Actual: "<<Importe<<endl;
            cout<< "Ingrese El Nuevo Importe: $";
            cin>> Importe;
            break;
        case 3:
            cout<< "Duracion En Dias Actual: "<<DuracionDias<<endl;
            cout<< "Ingrese La Nueva Duracion En Dias: ";
            cin>> DuracionDias;
            break;
        case 4:
            cout<< "Descripcion Actual: "<<Descripcion<<endl;
            cout<< "Ingrese La Nueva Descripcion: ";
            CargarCadena (Descripcion, 100);
            break;
        default:
            cout<< "Opcion Invalida, Vuelva A Ingresar Otra: ";
            break;
        }
    }while (Opc<1 || Opc>4);
}
void Planes::MostrarPlan (){
    cout<< "| PLAN | "<<endl;
    cout<< "ID: "<<IdPlan<<endl;
    cout<< "Nombre: "<<NombrePlan<<endl;
    cout<< "Importe: $"<<Importe<<endl;
    cout<< "Duracion: "<<DuracionDias<<" Dias "<<endl;
    cout<< "Descripcion: "<<Descripcion<<endl;
    cout<< " "<<endl;
}

