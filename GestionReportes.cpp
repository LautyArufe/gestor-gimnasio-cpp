#include <iostream>
#include <cstring>
#include "Gestiones.h"
#include "ClaseArcSocios.h"
#include "ClaseSocios.h"
#include "ClaseArcPlanes.h"
#include "ClasePlanes.h"
#include "ClaseArcInscripciones.h"
#include "ClaseInscripciones.h"
using namespace std;

/// Plan Mas Contratado:
void PlanMasContratado (){
    ArcInscripciones InscripcionesDat ("inscripciones.dat");
    if (InscripcionesDat.CantRegistros ()==0){
        cout<< "No Se Registraron Inscripciones "<<endl;
        system ("pause");
        system ("cls");
    }
    else {
    Inscripciones Inscripcion;
    ArcPlanes PlanesDat ("planes.dat");
    Planes Plan;
    int MaxPlan=-1;
    int MaxCant=0;
    int CantInscripciones=InscripcionesDat.CantRegistros ();
    int CantPlanes=PlanesDat.CantRegistros ();
    int *vMaxCantPlanes=new int [CantPlanes]{0};
    for (int i=0; i<CantInscripciones; i++){
        Inscripcion=InscripcionesDat.Leer (i);
        if (Inscripcion.getEstado ()==true){
        for (int x=0; x<CantPlanes; x++){
            Plan=PlanesDat.Leer (x);
            if (Plan.getIdPlan ()==Inscripcion.getIdPlan ()){
                vMaxCantPlanes [Plan.getIdPlan ()-1]++;
            }
        }
        }
    }
    for (int z=0; z<CantPlanes; z++){
        if (vMaxCantPlanes[z]>MaxCant){
            MaxCant=vMaxCantPlanes [z];
            MaxPlan=z+1;
        }
    }
    cout<< "El Plan Mas Constratado Es El: "<<MaxPlan<<endl;
    cout<< "Cant. De Contrataciones: "<<MaxCant<<endl;
    delete [] vMaxCantPlanes;
    system ("pause");
    system ("cls");
    }
}
/// Listado de Socios sin Inscripciones:
void SociosSinInscripciones (){
    ArcSocios SociosDat ("socios.dat");
    if (SociosDat.CantRegistros ()==0){
        cout<< "No Se Registraron Socios "<<endl;
        system ("pause");
        system ("cls");
    }
    else {
        Socios Socio;
        ArcInscripciones InscripcionesDat ("inscripciones.dat");
        Inscripciones Inscripcion;
        int CantInscripciones=InscripcionesDat.CantRegistros ();
        int CantSocios=SociosDat.CantRegistros ();
        bool *vSocios=new bool [CantSocios]{false};
        for (int i=0; i<CantSocios; i++){
            Socio=SociosDat.Leer (i);
            for (int x=0; x<CantInscripciones; x++){
                Inscripcion=InscripcionesDat.Leer (x);
                if (Inscripcion.getEstado ()==true){
                if (Socio.getIdSocio ()==Inscripcion.getIdSocio ()){
                    vSocios[i]=true;
                }
                }
            }
        }
        for (int z=0; z<CantSocios; z++){
            Socio=SociosDat.Leer (z);
            if (!vSocios [z] && Socio.getEstado ()!= false){
                cout<< "Socio Sin Inscripcion: "<<endl;
                cout<<"ID: "<<Socio.getIdSocio ()<<". Nombre: "<<Socio.getNombre ()<<" "<<Socio.getApellido ()<<endl;
            }
        }
        delete [] vSocios;
        system ("pause");
        system ("cls");

    }
}
/// Listado de Cant. De Inscripciones x Plan Activo:
void CantInscripcionesPorPlan (){
    ArcInscripciones InscripcionesDat ("inscripciones.dat");
    if (InscripcionesDat.CantRegistros ()==0){
        cout<< "No Se Registraron Inscripciones "<<endl;
        system ("pause");
        system ("cls");
    }
    else {
        Inscripciones Inscripcion;
        ArcPlanes PlanesDat ("planes.dat");
        Planes Plan;
        int CantInscripciones=InscripcionesDat.CantRegistros ();
        int CantPlanes=PlanesDat.CantRegistros ();
        int *vPlanes=new int [CantPlanes]{0};
        for (int i=0; i<CantPlanes; i++){
            Plan=PlanesDat.Leer (i);
            if (Plan.getEstado ()==true){
                for (int x=0; x<CantInscripciones; x++){
                    Inscripcion=InscripcionesDat.Leer (x);
                    if (Inscripcion.getEstado ()==true){
                        if (Inscripcion.getIdPlan ()==Plan.getIdPlan ()){
                            vPlanes[i]++;
                        }
                    }
                }
            }
            if (Plan.getEstado ()==true){
            cout<< "ID De Plan: "<<Plan.getIdPlan ()<< ". Cant. De Inscripciones: "<<vPlanes [i]<<endl;
            }
    }
    delete [] vPlanes;
    system ("pause");
    system ("cls");
}
}
