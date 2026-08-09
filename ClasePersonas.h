#ifndef CLASEPERSONAS_H_INCLUDED
#define CLASEPERSONAS_H_INCLUDED
#include "ClaseFecha.h"

class Personas {
    protected:
        char Nombre[30];
        char Apellido[30];
        int DNI;
        char Telefono[30];
        char Email[30];
        Fecha FechaNacimiento;
    public:
    /// Constructor:
        Personas ();
    /// Setters:
        void setNombre (const char*);
        void setApellido (const char*);
        void setDNI (int);
        void setTelefono (const char*);
        void setEmail (const char*);
    /// Getters:
        const char* getNombre ();
        const char* getApellido ();
        int getDNI ();
        const char* getTelefono ();
        const char* getEmail ();
        Fecha getFechaNacimiento ();
    /// Funciones Cargar / Mostrar:
        void CargarPersona ();
        void MostrarPersona ();
};

#endif // CLASEPERSONAS_H_INCLUDED
