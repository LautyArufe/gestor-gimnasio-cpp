#include <iostream>
#include <cstring>
#include "Gestiones.h"
#include "ClasePlanes.h"
#include "ClaseArcPlanes.h"
using namespace std;

/// Funcion Cargar Registro:
void CargarRegistroPlan (){
    ArcPlanes PlanesDat ("planes.dat");
    Planes Plan;
    Plan.CargarPlan ();
    bool Ok=PlanesDat.Guardar (Plan);
    if (Ok){
        cout<< "Se Registro El Plan Correctamente "<<endl;
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
void ModificarRegistroPlan (){
    ArcPlanes PlanesDat ("planes.dat");
    if (PlanesDat.CantRegistros ()==0){
        cout<< "No Hay Ningun Plan Registrado Para Modificar "<<endl;
        system ("pause");
        system ("cls");
    }
    else {
        cout<< "Ingrese El ID Del Plan Que Desea Modificar: ";
        int IdPlan;
        cin>> IdPlan;
        system ("cls");
        while (PlanesDat.Buscar (IdPlan)==-1){
            cout<< "El ID Ingresado No Existe "<<endl;
            cout<< "Ingrese Un ID Valido: ";
            cin>> IdPlan;
            system ("cls");
        }
        int Pos=PlanesDat.Buscar (IdPlan);
        Planes Plan=PlanesDat.Leer (Pos);
        if (Plan.getEstado ()==true){
        Plan.ModificarPlan ();
        bool Ok=PlanesDat.Modificar (Plan, Pos);
        if (Ok){
            cout<< "Se Modifico El Registro Del Plan Correctamente "<<endl;
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
            cout<< "El Plan Del ID Ingresado Se Dio De Baja "<<endl;
            system ("pause");
            system ("cls");
        }
    }
}
/// Funcion Listar Registros:
void ListarRegistrosPlanes (){
    ArcPlanes PlanesDat ("planes.dat");
    if (PlanesDat.CantRegistros ()==0){
        cout<< "No Hay Planes Registrados "<<endl;
        system ("pause");
        system ("cls");
    }
    else {
        Planes Plan;
        int Cant=PlanesDat.CantRegistros ();
        for (int i=0; i<Cant; i++){
            Plan=PlanesDat.Leer (i);
            if (Plan.getEstado ()==true){
            Plan.MostrarPlan ();
            }
        }
        system ("pause");
        system ("cls");
    }
}
/// Funcion Eliminar Registro:
void EliminarRegistroPlan (){
    ArcPlanes PlanesDat ("planes.dat");
    if (PlanesDat.CantRegistros ()==0){
        cout<< "No Hay Planes Registrados "<<endl;
        system ("pause");
        system ("cls");
    }
    else {
        cout<< "Ingrese El ID Del Plan Que Desea Dar De Baja: "<<endl;
        int IdPlan;
        cin>> IdPlan;
        system ("cls");
        while (PlanesDat.Buscar (IdPlan)==-1){
            cout<< "El ID Ingresado No Existe "<<endl;
            cout<< "Inrese Un ID Valido "<<endl;
            cin>> IdPlan;
            system ("cls");
        }
        int Pos=PlanesDat.Buscar (IdPlan);
        Planes Plan=PlanesDat.Leer (Pos);
        if (Plan.getEstado ()==true){
            Plan.setEstado (false);
            bool Ok=PlanesDat.Modificar (Plan, Pos);
            if (Ok){
                cout<< "El Plan Se Dio De Baja Correctamente "<<endl;
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
