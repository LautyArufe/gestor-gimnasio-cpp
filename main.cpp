#include <iostream>
#include <cstring>
#include "Funciones.h"

using namespace std;

int main(){
    int Opc;
    do {
        MenuPrincipal ();
        cin>> Opc;
        system ("cls");
        switch (Opc){
        case 1:
            FuncionSocios ();
            break;
        case 2:
            FuncionPlanes ();
            break;
        case 3:
            FuncionInscripciones ();
            break;
        case 4:
            FuncionReportes ();
            break;
        case 0:
            CartelSalir ();
            break;
        default:
            CartelDefault ();
            break;
        }
    }while (Opc!=0);
}
