#include <iostream>
#include "ClaseSocios.h"
#include "ClaseArcSocios.h"
#include "CargarCadena.h"
using namespace std;

/// Constructor:
Socios::Socios (){
    IdSocio=0;
    Estado=true;
}
/// Setters:
void Socios::setIdSocio (int idsocio){
    IdSocio=idsocio;
}
void Socios::setEstado (bool estado){
    Estado=estado;
}
/// Getters:
int Socios::getIdSocio (){
    return IdSocio;
}
bool Socios::getEstado (){
    return Estado;
}
/// Funciones Cargar / Modificar / Mostrar:
void Socios::CargarSocio (){
    ArcSocios SociosDat ("socios.dat");
    cout<< "| SOCIO |"<<endl;
    IdSocio=SociosDat.CantRegistros () + 1;
    cout<< "ID: "<<IdSocio<<endl;
    Personas::CargarPersona ();
}
void Socios::ModificarSocio (){
        cout<< "| SOCIO |"<<endl;
        cout<< "¿Que Desea Modificar Del Socio?: "<<endl;
        cout<< "1 - Nombre "<<endl;
        cout<< "2 - Apellido "<<endl;
        cout<< "3 - DNI "<<endl;
        cout<< "4 - Telefono "<<endl;
        cout<< "5 - Email "<<endl;
        cout<< "6 - Fecha De Nacimiento "<<endl;
        cout<< "Ingrese Una Opcion: "<<endl;
        int Opc;
        do{
        cin>> Opc;
            switch (Opc){
            case 1:
                cout<< "Nombre Actual: "<<Nombre<<endl;
                cout<< "Ingrese El Nuevo Nombre:"<<endl;
                CargarCadena (Nombre, 30);
                break;
            case 2:
                cout<< "Apellido Actual: "<<Apellido<<endl;
                cout<< "Ingrese El Nuevo Apellido:"<<endl;
                CargarCadena (Apellido, 30);
                break;
            case 3:
                cout<< "DNI Actual: "<<DNI<<endl;
                cout<< "Ingrese El Nuevo DNI"<<endl;
                cin>> DNI;
                break;
            case 4:
                cout<< "Telefono Actual: "<<Telefono<<endl;
                cout<< "Ingrese El Nuevo Telefono:"<<endl;
                CargarCadena (Telefono, 30);
                break;
            case 5:
                cout<< "Email Actual: "<<Email<<endl;
                cout<< "Ingrese El Nuevo Emal:"<<endl;
                CargarCadena (Email, 30);
                break;
            case 6:
                cout<< "Fecha De Nacimiento Actual:"<<endl;
                FechaNacimiento.MostrarFecha ();
                cout<< "Ingrese La Nueva Fecha De Nacimiento:"<<endl;
                FechaNacimiento.CargarFecha ();
                break;
            default:
                cout<< "Opcion Invalida, Vuelva A Ingresar Otra: "<<endl;
                break;
            }
        }while (Opc<1 || Opc>6);
}
void Socios::MostrarSocio (){
    cout<< "| SOCIO | "<<endl;
    cout<< "ID: "<<IdSocio<<endl;
    Personas::MostrarPersona ();
}
