#ifndef CLASEARCSOCIOS_H_INCLUDED
#define CLASEARCSOCIOS_H_INCLUDED
#include "ClaseSocios.h"

class ArcSocios {
    private:
        std::string Archivo;
    public:
    /// Constructor:
        ArcSocios (std::string archivo);
    /// Funciones Guardar / Modificar:
        bool Guardar (Socios Socio);
        bool Modificar (Socios Socio, int);
    /// Funcion Buscar:
        int Buscar (int);
    /// Funcion Cant Registros:
        int CantRegistros ();
    /// Funcion Leer:
        Socios Leer (int);

};

#endif // CLASEARCSOCIOS_H_INCLUDED
