#ifndef CLASEPLANES_H_INCLUDED
#define CLASEPLANES_H_INCLUDED

class Planes {
    private:
        int IdPlan;
        char NombrePlan [30];
        float Importe;
        int DuracionDias;
        char Descripcion [100];
        bool Estado;
    public:
    /// Constructor:
        Planes ();
    /// Setters:
        void setIdPlan (int);
        void setNombrePlan (const char*);
        void setImporte (float);
        void setDuracionDias (int);
        void setDescripcion (const char*);
        void setEstado (bool);
    /// Getters:
        int getIdPlan ();
        const char* getNombrePlan ();
        float getImporte ();
        int getDuracionDias ();
        const char* getDescripcion ();
        bool getEstado ();
    /// Funciones Cargar / Modificar / Mostrar:
        void CargarPlan ();
        void ModificarPlan ();
        void MostrarPlan ();
};

#endif // CLASEPLANES_H_INCLUDED
