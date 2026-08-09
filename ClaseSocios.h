#ifndef CLASESOCIOS_H_INCLUDED
#define CLASESOCIOS_H_INCLUDED
#include "ClasePersonas.h"

class Socios: public Personas {
    private:
        int IdSocio;
        bool Estado;
    public:
    /// Constructor:
        Socios ();
    /// Setters:
        void setIdSocio (int);
        void setEstado (bool);
    /// Getters:
        int getIdSocio ();
        bool getEstado ();
    /// Funciones Cargar / Modificar / Mostrar / Eliminar:
        void CargarSocio ();
        void ModificarSocio ();
        void MostrarSocio ();
};

#endif // CLASESOCIOS_H_INCLUDED
