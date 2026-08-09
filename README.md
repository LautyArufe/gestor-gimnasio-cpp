# Gestor de Gimnasio
Gimnasio LautyArufe

## Descripción
Sistema de gestión de archivos relacionados de un gimnasio desarrollado en C++ utilizando archivos binarios. El proyecto implementa Programación Orientada a Objetos (POO), manejo de archivos y lógica de programación para administrar la información y generar 3 reportes.

## Tecnologías utilizadas
- C++
- Programación Orientada a Objetos (POO)
- Archivos binarios
- Code::Blocks

## Funcionalidades
- Gestión de socios
- Gestión de planes
- Gestión de inscripciones
- Cargas, modificaciones consultas y bajas lógicas de registros
- Relación entre los archivos: socios, planes e inscripciones
- Generación de 3 reportes
  
 ## Archivos principales
- socios.dat:
- planes.dat
- inscripciones.dat

  ## Conceptos aplicados
- Programación Orientada a Objetos
- Clases y objetos
- Herencia
- Encapsulamiento
- Manejo de archivos binarios
- Relaciones entre archivos
- Validaciones
- Búsqueda y modificación de registros
- Generación de reportes

## Clases Principales:
class Fecha {
private:
//Atributos:
- Dia: int;
- Mes: int;
- Anio: int;
public:
//Constructor:
- Fecha ();
//Setters:
- void setDia (int);
- void setMes (int);
- void setAnio (int;
//Getters:
- int getDia ();
- int getMes ();
- int getAnio ();
//Metodos:
- void CargarFecha ();
- void MostrarFecha ();

class Personas {
private:
- Nombre: char [30];
- Apellido: char [30];
- DNI: int;
- Telefono: char [30]
- Email: char [30]
- FechaNacimiento: Fecha;
public:
//Constructor:
- Personas ();
//Setters:
- void setNombre (const char*);
- void setApellido (const char*);
- void setDNI (int);
- void setTelefono (const char*);
- void setEmail (const char*);
//Getters:
- const char* getNombre ();
- const char* getApellido ();
- int getDNI ();
- const char* getTelefono ();
- const char* getEmail ();
- Fecha getFechaNacimiento ();
//Metodos:
- void CargarPersona ();
- void MostrarPersona ();

class Socios: public Personas {
private:
- IdSocio: int;
- Estado: bool;
public:
//Constructor:
- Socios ();
//Setters:
- void setIdSocio (int);
- void setEstado (bool);
//Getters:
- int getIdSocio ();
- bool getEstado ();
//Metodos:
- void CargarSocio ();
- void ModificarSocio ();
- void MostrarSocio ();

## Autor
Lautaro Arufe
Tecnicatura Universitaria en Programación – UTN FRGP
