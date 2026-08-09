#include <iostream>
#include <cstring>
#include "ClaseFecha.h"
#include "ClasePersonas.h"
#include "CargarCadena.h"
using namespace std;

/// Constructor:
Personas::Personas (){
    strncpy (Nombre, "0", 30);
    strncpy (Apellido, "0", 30);
    DNI=0;
    strncpy (Telefono, "0", 30);
    strncpy (Email, "0", 30);
}
/// Setters:
void Personas::setNombre (const char* nombre){
    strncpy (Nombre, nombre, 30);
}
void Personas::setApellido (const char* apellido){
    strncpy (Apellido, apellido, 30);
}
void Personas::setDNI (int dni){
    DNI=dni;
}
void Personas::setTelefono (const char* telefono){
    strncpy (Telefono, telefono, 30);
}
void Personas::setEmail (const char* email){
    strncpy (Email, email, 30);
}
/// Getters:
const char* Personas::getNombre (){
    return Nombre;
}
const char* Personas::getApellido (){
    return Apellido;
}
int Personas::getDNI (){
    return DNI;
}
const char* Personas::getTelefono (){
    return Telefono;
}
const char* Personas::getEmail (){
    return Email;
}
Fecha Personas::getFechaNacimiento (){
    return FechaNacimiento;
}
/// Funciones Cargar / Mostrar:
void Personas::CargarPersona (){
    cout<< "Ingrese El Nombre: ";
    CargarCadena (Nombre, 30);
    cout<< "Ingrese El Apellido: ";
    CargarCadena (Apellido, 30);
    cout<< "Ingrese El DNI: ";
    cin>> DNI;
    cout<< "Ingrese La Fecha De Nacimiento: "<<endl;
    FechaNacimiento.CargarFecha ();
    cout<< "Ingrese El Numero De Telefono: ";
    CargarCadena (Telefono, 30);
    cout<< "Ingrese El Email: ";
    CargarCadena (Email, 30);
}
void Personas::MostrarPersona (){
    cout<< "Nombre: "<<Nombre<<endl;
    cout<< "Apellido: "<<Apellido<<endl;
    cout<< "DNI: "<<DNI<<endl;
    cout<< "Fecha De Nacimiento: "<<endl;
    FechaNacimiento.MostrarFecha ();
    cout<< "Telefono: "<<Telefono<<endl;
    cout<< "Email: "<<Email<<endl;
    cout<< " "<<endl;
}





