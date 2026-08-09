#include <iostream>
#include "ClaseFecha.h"
#include "ClaseInscripciones.h"
#include "ClaseArcInscripciones.h"
#include "ClaseArcSocios.h"
#include "ClaseArcPlanes.h"
#include "ClaseSocios.h"
#include "ClasePlanes.h"

using namespace std;

/// Constructor:
Inscripciones::Inscripciones (){
    IdInscripcion=0;
    IdSocio=0;
    IdPlan=0;
    Estado=true;
}
/// Setters:
void Inscripciones::setIdInscripcion (int idinscripcion){
    IdInscripcion=idinscripcion;
}
void Inscripciones::setIdSocio (int idsocio){
    IdSocio=idsocio;
}
void Inscripciones::setIdPlan (int idplan){
    IdPlan=idplan;
}
void Inscripciones::setEstado (bool estado){
    Estado=estado;
}
/// Getters:
int Inscripciones::getIdInscripcion (){
    return IdInscripcion;
}
int Inscripciones::getIdSocio (){
    return IdSocio;
}
int Inscripciones::getIdPlan (){
    return IdPlan;
}
Fecha Inscripciones::getFechaInicio (){
    return FechaInicio;
}
Fecha Inscripciones::getFechaVencimiento (){
    return FechaVencimiento;
}
bool Inscripciones::getEstado (){
    return Estado;
}
/// Funciones Cargar / Modificar / Mostrar:
void Inscripciones::CargarInscripcion (){
    ArcInscripciones InscripcionesDat ("inscripciones.dat");
    ArcSocios SociosDat ("socios.dat");
    ArcPlanes PlanesDat ("planes.dat");
    cout<< "| INSCRIPCION | "<<endl;
    IdInscripcion=InscripcionesDat.CantRegistros () + 1;
    cout<< "ID: "<<IdInscripcion<<endl;
    cout<< "Ingrese El ID Del Socio: ";
    cin>> IdSocio;
    int PosSocio=SociosDat.Buscar (IdSocio);
    Socios Socio=SociosDat.Leer (PosSocio);
    while (PosSocio==-1 || Socio.getEstado ()==false){
        cout<< "El ID De Socio Ingresado No Existe "<<endl;
        cout<< "Ingrese Uno Valido "<<endl;
        cin>> IdSocio;
        PosSocio=SociosDat.Buscar (IdSocio);
        Socio=SociosDat.Leer (PosSocio);
    }
    cout<< "Ingrese El ID Del Plan: "<<endl;
    cin>> IdPlan;
    int PosPlan=PlanesDat.Buscar (IdPlan);
    Planes Plan=PlanesDat.Leer (PosPlan);
    while (PosPlan==-1 || Plan.getEstado ()==false){
        cout<< "El ID De Plan Ingresado No Existe "<<endl;
        cout<< "Ingrese Uno Valido: ";
        cin>> IdPlan;
        PosPlan=PlanesDat.Buscar (IdPlan);
        Plan=PlanesDat.Leer (PosPlan);
    }
    cout<< "Ingrese La Fecha De Inicio: "<<endl;
    FechaInicio.CargarFecha ();
    cout<< "Ingrese La Fecha De Vencimiento: "<<endl;
    FechaVencimiento.CargarFecha ();
}
void Inscripciones::ModificarInscripcion (){
    cout<< "| INSCRIPCION | "<<endl;
    cout<< "Que Desea Modificar?: "<<endl;
    cout<< "1 - Fecha De Inicio "<<endl;
    cout<< "2 - Fecha De Vencimiento "<<endl;
    cout<< "Ingrese Una Opcion: "<<endl;
    int Opc;
    do {
        cin>> Opc;
        switch (Opc){
        case 1:
            cout<< "Fecha De Inicio Actual: "<<endl;
            FechaInicio.MostrarFecha ();
            cout<< "Ingrese La Nueva Fecha De Inicio: "<<endl;
            FechaInicio.CargarFecha ();
            break;
        case 2:
            cout<< "Fecha De Vencimiento Actual: "<<endl;
            FechaVencimiento.MostrarFecha ();
            cout<< "Ingrese La Nueva Fecha De Vencimiento: "<<endl;
            FechaVencimiento.CargarFecha ();
            break;
        }
    }while (Opc<1 || Opc>2);
}
void Inscripciones::MostrarInscripcion (){
    cout<< "| INSCRIPCION | "<<endl;
    cout<< "ID: "<<IdInscripcion<<endl;
    cout<< "ID Del Socio: "<<IdSocio<<endl;
    cout<< "ID Del Plan: "<<IdPlan<<endl;
    cout<< "Fecha De Inicio: "<<endl;
    FechaInicio.MostrarFecha ();
    cout<< "Fecha De Vencimiento: "<<endl;
    FechaVencimiento.MostrarFecha ();
    cout<< " "<<endl;
}


