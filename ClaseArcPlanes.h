#ifndef CLASEARCPLANES_H_INCLUDED
#define CLASEARCPLANES_H_INCLUDED
#include "ClasePlanes.h"

class ArcPlanes {
    private:
        std::string Archivo;
    public:
    /// Constructor:
        ArcPlanes (std::string archivo);
    /// Funciones Guardar / Modificar:
        bool Guardar (Planes Plan);
        bool Modificar (Planes Plan, int);
    /// Funcion Buscar:
        int Buscar (int IdPlan);
    /// Funcion Cant Registros:
        int CantRegistros ();
    /// Funcion Leer:
        Planes Leer (int);
};

#endif // CLASEARCPLANES_H_INCLUDED
