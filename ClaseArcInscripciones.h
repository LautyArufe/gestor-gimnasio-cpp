#ifndef CLASEARCINSCRIPCIONES_H_INCLUDED
#define CLASEARCINSCRIPCIONES_H_INCLUDED
#include "ClaseInscripciones.h"

class ArcInscripciones {
    private:
        std::string Archivo;
    public:
    /// Constructor:
        ArcInscripciones (std::string);
    /// Funciones Guardar / Modificar:
        bool Guardar (Inscripciones Inscripcion);
        bool Modificar (Inscripciones Inscripcion, int);
    /// Funcion Buscar:
        int Buscar (int IdInscripcion);
    /// Funcion Cant Registros:
        int CantRegistros ();
    /// Funcion Leer:
        Inscripciones Leer (int);
};

#endif // CLASEARCINSCRIPCIONES_H_INCLUDED
