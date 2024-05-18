#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Estudiante.h"
#include "MateriaNota.h"

struct Estudiante{
    int dni;
    char apellido[30];
    char nombre[30];
    Lista* asignaturasAprobadas;
};

Estudiante* crearEstudiante(int dni, char apellido[30], char nombre[30]){
    Estudiante* e = (Estudiante*)malloc(sizeof(Estudiante));

    e->dni = dni;
    strcpy(e->apellido, apellido);
    strcpy(e->nombre, nombre);
    e->asignaturasAprobadas = crearLista();

    return e;
}

int getDNI(Estudiante* e){
    return e->dni;
}

const char* getApellidoEstudiante(Estudiante* e){
    return e->apellido;
}

const char* getNombreEstudiante(Estudiante* e){
    return e->nombre;
}

const Lista* getListaCalificaciones(Estudiante* e){
    return e->asignaturasAprobadas;
}

void setApellidoEstudiante(Estudiante* e, char apellido[30]){
    strcpy(e->apellido, apellido);
}

void setNombreEstudiante(Estudiante* e, char nombre[30]){
    strcpy(e->nombre, nombre);
}

void agregarMateriaAprobada(Estudiante* e, int id, int idMateria, int nota){
    agregarAlFinal(e->asignaturasAprobadas, crearMateriaNota(id, idMateria, nota));
}

void eliminarMateriaNota(void* m){
    destruirMateriaNota((MateriaNota*)m);
}

void destruirEstudiante(Estudiante* e){
    destruirListaYDatos(e->asignaturasAprobadas, eliminarMateriaNota);
    free(e);
}
