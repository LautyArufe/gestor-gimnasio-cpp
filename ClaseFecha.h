#ifndef CLASEFECHA_H_INCLUDED
#define CLASEFECHA_H_INCLUDED

class Fecha {
    private:
        int Dia;
        int Mes;
        int Anio;
    public:
    /// constructor:
        Fecha ();
    /// setters:
        void setDia (int);
        void setMes (int);
        void setAnio (int);
    /// getters:
        int getDia ();
        int getMes ();
        int getAnio ();
    /// Funciones Cargar / Mostrar:
        void CargarFecha ();
        void MostrarFecha ();
};

#endif // CLASEFECHA_H_INCLUDED
