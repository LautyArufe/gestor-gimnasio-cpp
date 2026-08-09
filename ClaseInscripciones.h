#ifndef CLASEINSCRIPCIONES_H_INCLUDED
#define CLASEINSCRIPCIONES_H_INCLUDED
#include "ClaseFecha.h"

class Inscripciones {
    private:
        int IdInscripcion;
        int IdSocio;
        int IdPlan;
        Fecha FechaInicio;
        Fecha FechaVencimiento;
        bool Estado;
    public:
    /// Constructor:
        Inscripciones ();
    /// Setters:
        void setIdInscripcion (int);
        void setIdSocio (int);
        void setIdPlan (int);
        void setEstado (bool);
    /// Getters:
        int getIdInscripcion ();
        int getIdSocio ();
        int getIdPlan ();
        Fecha getFechaInicio ();
        Fecha getFechaVencimiento ();
        bool getEstado ();
    /// Funciones Cargar / Modificar / Mostrar:
        void CargarInscripcion ();
        void ModificarInscripcion ();
        void MostrarInscripcion ();
};

#endif // CLASEINSCRIPCIONES_H_INCLUDED
