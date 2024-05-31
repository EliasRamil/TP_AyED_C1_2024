#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include <stdbool.h>

void limpiarPantalla();
void pedidoDeOpciones(char opcion[30]);

void mostrarCalificaciones(void*);
void mostrarMaterias(void*);
void mostrarEstudiantes(void*);
void mostrarEstudiantesCompletos(void*);
void mostrarMateriasEnElSistema(void*);

bool compararPromediosEstudiantes(void*, void*);
bool compararCantidadDeMateriasAprobadas(void*, void*);

bool esIdDeMateriaCorrecto(void*, void*);
bool esMateria(void*, void*);

void destruirDatoListaMateriaNota(void*);
void destruirDatoListaMaterias(void*);
void destruirDatoListaEstudiantes(void*);
void destruirDatoListaMateriaSistema(void*);

void menuSimple();
void menuComplejo();

#endif // FUNCIONES_H_INCLUDED
