#include <iostream>
#include <cstring>
#include "Funciones.h"
#include "Gestiones.h"
using namespace std;

/// Funcion Menu Principal:
void MenuPrincipal (){
    cout<< "     | MENU | "<<endl;
    cout<< "------------------- "<<endl;
    cout<< "1 - Socios "<<endl;
    cout<< "2 - Planes "<<endl;
    cout<< "3 - Inscripciones "<<endl;
    cout<< "4 - Reportes "<<endl;
    cout<< "0 - Salir "<<endl;
    cout<< "------------------"<<endl;
    cout<< "Ingrese Una Opcion: ";
}
/// Funcion Socios:
void FuncionSocios (){
    cout<< "       | SOCIO | "<<endl;
    cout<< "----------------------"<<endl;
    cout<< "1 - Registrar Socio "<<endl;
    cout<< "2 - Modificar Socio "<<endl;
    cout<< "3 - Listar Socios "<<endl;
    cout<< "4 - Dar De Baja Un Socio "<<endl;
    cout<< "----------------------"<<endl;
    cout<< "Ingrese Una Opcion: ";
    int Opc;
    do {
        cin>> Opc;
        system ("cls");
        switch (Opc){
        case 1:
            CargarRegistroSocio ();
            break;
        case 2:
            ModificarRegistroSocio ();
            break;
        case 3:
            ListarRegistrosSocios ();
            break;
        case 4:
            EliminarRegistroSocio ();
            break;
        default:
            cout<< "Opcion Invalida "<<endl;
            cout<< "Ingrese Otra Opcion "<<endl;
            break;
        }
    }while (Opc<1 || Opc>4);
}
/// Funcion Planes:
void FuncionPlanes (){
    cout<< "| PLANES | "<<endl;
    cout<< "-------------------- "<<endl;
    cout<< "1 - Registrar Plan "<<endl;
    cout<< "2 - Modificar Plan "<<endl;
    cout<< "3 - Listar Planes "<<endl;
    cout<< "4 - Dar De Baja Un Plan "<<endl;
    cout<< "-------------------- "<<endl;
    cout<< "Ingrese Una Opcion: ";
    int Opc;
    do {
        cin>> Opc;
        system ("cls");
        switch (Opc){
        case 1:
            CargarRegistroPlan ();
            break;
        case 2:
            ModificarRegistroPlan ();
            break;
        case 3:
            ListarRegistrosPlanes ();
            break;
        case 4:
            EliminarRegistroPlan ();
            break;
        default:
            cout<< "Opcion Invalida "<<endl;
            cout<< "Ingrese Otra Opcion "<<endl;
            break;
        }
    }while (Opc<1 || Opc>4);
}
/// Funcion Inscripciones:
void FuncionInscripciones (){
    cout<< "| INSCRIPCIONES | "<<endl;
    cout<< "--------------------------- "<<endl;
    cout<< "1 - Registrar Inscripcion "<<endl;
    cout<< "2 - Modificar Inscripcion "<<endl;
    cout<< "3 - Listar Inscripciones "<<endl;
    cout<< "4 - Dar De Baja Inscripcion "<<endl;
    cout<< "--------------------------- "<<endl;
    cout<< "Ingrese Una Opcion: ";
    int Opc;
    do {
        cin>> Opc;
        system ("cls");
        switch (Opc){
        case 1:
            CargarRegistroInscripcion ();
            break;
        case 2:
            ModificarRegistroInscripcion ();
            break;
        case 3:
            ListarRegistrosInscripciones ();
            break;
        case 4:
            EliminarRegistroInscripcion ();
            break;
        default:
            cout<< "Opcion Invalida "<<endl;
            cout<< "Ingrese Una Opcion Valida "<<endl;
            break;
        }
    }while (Opc<1 || Opc>4);
}
/// Funcion Reportes:
void FuncionReportes (){
    cout<< "          | REPORTES | "<<endl;
    cout<< "----------------------------------- "<<endl;
    cout<< "1 - Plan Mas Contratado "<<endl;
    cout<< "2 - Socios Sin Inscripciones "<<endl;
    cout<< "3 - Cant De Inscripciones x Plan "<<endl;
    cout<< "----------------------------------- "<<endl;
    cout<< "Ingrese Una Opcion: ";
    int Opc;
    do {
        cin>> Opc;
        system ("cls");
        switch (Opc){
        case 1:
            PlanMasContratado ();
            break;
        case 2:
            SociosSinInscripciones ();
            break;
        case 3:
            CantInscripcionesPorPlan ();
            break;
        default:
            cout<< "Opcion Incorrecta "<<endl;
            cout<< "Ingrese Una Opcion Valida: ";
        }
    }while (Opc<1 || Opc>3);
}
/// Otras Funciones:
void CartelDefault (){
    cout<< "Opcion Incorrecta. Ingrese Una Opcion Valida: "<<endl;
    system ("pause");
    system ("cls");
}
void CartelSalir (){
    cout<< "Saliendo "<<endl;
}
