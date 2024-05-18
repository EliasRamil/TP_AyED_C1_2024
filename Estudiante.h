#ifndef ESTUDIANTE_H_INCLUDED
#define ESTUDIANTE_H_INCLUDED

#include "Lista.h"

typedef struct Estudiante Estudiante;

Estudiante* crearEstudiante(int dni, char apellido[30], char nombre[30]);

int getDNI(Estudiante*);
const char* getApellidoEstudiante(Estudiante*);
const char* getNombreEstudiante(Estudiante*);
const Lista* getListaCalificaciones(Estudiante*);

void setApellidoEstudiante(Estudiante*, char apellido[30]);
void setNombreEstudiante(Estudiante*, char nombre[30]);

void agregarMateriaAprobada(Estudiante*, int id, int idMateria, int nota);

void destruirEstudiante(Estudiante*);

#endif // ESTUDIANTE_H_INCLUDED
