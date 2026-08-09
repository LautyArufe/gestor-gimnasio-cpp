#include <iostream>
#include "ClaseFecha.h"
using namespace std;

/// Constructor:
Fecha::Fecha (){
    Dia=0;
    Mes=0;
    Anio=0;
}
/// Setters:
void Fecha::setDia (int dia){
    Dia=dia;
}
void Fecha::setMes (int mes){
    Mes=mes;
}
void Fecha::setAnio (int anio){
    Anio=anio;
}
/// Getters:
int Fecha::getDia (){
    return Dia;
}
int Fecha::getMes (){
    return Mes;
}
int Fecha::getAnio (){
    return Anio;
}
/// Funciones Cargar / Mostrar:
void Fecha::CargarFecha (){
    cout<< "Ingrese El Dia: ";
    cin>> Dia;
    cout<< "Ingrese El Mes: ";
    cin>> Mes;
    cout<< "Ingrese El Anio: ";
    cin>> Anio;
}
void Fecha::MostrarFecha (){
    cout<<Dia<<" / "<<Mes<<" / "<<Anio<<endl;
}

