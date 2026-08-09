#include <iostream>
#include <cstring>
#include "Gestiones.h"
#include "ClaseArcSocios.h"
#include "ClaseSocios.h"
using namespace std;

/// Funcion Cargar Registro:
void CargarRegistroSocio (){
    ArcSocios SociosDat ("socios.dat");
    Socios Socio;
    Socio.CargarSocio ();
    bool Ok=SociosDat.Guardar (Socio);
    if (Ok){
        cout<< "El Socio Se Registro Correctamente "<<endl;
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
void ModificarRegistroSocio (){
    ArcSocios SociosDat ("socios.dat");
    if (SociosDat.CantRegistros ()==0){
        cout<< "No Hay Ningun Socio Registrado Para Modificar "<<endl;
        system ("pause");
        system ("cls");
    }
    else {
        cout<< "Ingrese El ID Del Socio Que Desea Modificar: ";
        int IdSocio;
        cin>> IdSocio;
        system ("cls");
        while (SociosDat.Buscar (IdSocio)==-1){
            cout<< "El ID Ingresado No Existe "<<endl;
            cout<< "Ingrese Un ID Valido: ";
            cin>> IdSocio;
            system ("cls");
        }
        int Pos=SociosDat.Buscar (IdSocio);
        Socios Socio=SociosDat.Leer (Pos);
        if (Socio.getEstado ()==true){
        Socio.ModificarSocio ();
        bool Ok=SociosDat.Modificar (Socio, Pos);
        if (Ok){
            cout<< "Se Modifico El Registro Del Socio Correctamente "<<endl;
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
            cout<< "El Socio Del ID Ingresado Se Dio De Baja "<<endl;
            system ("pause");
            system ("cls");
        }
    }
}
/// Funcion Listar Registros:
void ListarRegistrosSocios (){
    ArcSocios SociosDat ("socios.dat");
    if (SociosDat.CantRegistros ()==0){
        cout<< "No Hay Socios Registrados "<<endl;
        system ("pause");
        system ("cls");
    }
    else {
    Socios Socio;
    int Cant=SociosDat.CantRegistros ();
    for (int i=0; i<Cant; i++){
        Socio=SociosDat.Leer (i);
        if (Socio.getEstado ()==true){
            Socio.MostrarSocio ();
        }
        }
        system ("pause");
        system ("cls");
    }
}
/// Funcion Eliminar Registro:
void EliminarRegistroSocio (){
    ArcSocios SociosDat ("socios.dat");
    if (SociosDat.CantRegistros ()==0){
        cout<< "No Hay Socios Registrados Para Dar De Baja "<<endl;
        system ("pause");
        system ("cls");
    }
    else {
    cout<< "Ingrese El ID Del Socio Que Desea Dar De Baja: ";
    int IdSocio;
    cin>> IdSocio;
    while (SociosDat.Buscar (IdSocio)==-1){
        cout<< "El ID Ingresado No Existe "<<endl;
        cout<< "Ingrese Un ID Valido: ";
        cin>> IdSocio;
        system ("cls");
    }
    int Pos=SociosDat.Buscar (IdSocio);
    Socios Socio=SociosDat.Leer (Pos);
    if (Socio.getEstado ()==true){
        Socio.setEstado (false);
        bool Ok=SociosDat.Modificar (Socio, Pos);
        if (Ok){
            cout<< "El Socio Se Dio De Baja Correctamente "<<endl;
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

