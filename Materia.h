#ifndef MATERIA_H_INCLUDED
#define MATERIA_H_INCLUDED

#include "Lista.h"

typedef struct Materia Materia;

Materia* crearMateria(int id, char nombre[30]);

void mostrarMateria(Materia*);

int getIdMateria(Materia*);
const char* getNombreMateria(Materia*);

void setNombreMateria(Materia*, char nombre[30]);

void destruirMateria(Materia*);

#endif // MATERIA_H_INCLUDED
