#ifndef GESTIONES_H_INCLUDED
#define GESTIONES_H_INCLUDED

/// Registros Socios:
void CargarRegistroSocio ();
void ModificarRegistroSocio ();
void EliminarRegistroSocio ();
void ListarRegistrosSocios ();

/// Registros Planes:
void CargarRegistroPlan ();
void ModificarRegistroPlan ();
void EliminarRegistroPlan ();
void ListarRegistrosPlanes ();

/// Registros Inscripciones:
void CargarRegistroInscripcion ();
void ModificarRegistroInscripcion ();
void EliminarRegistroInscripcion ();
void ListarRegistrosInscripciones ();

/// Reportes:
void PlanMasContratado ();
void SociosSinInscripciones ();
void CantInscripcionesPorPlan ();

#endif // GESTIONES_H_INCLUDED
