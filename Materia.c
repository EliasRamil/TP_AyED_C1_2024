#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Materia.h"

struct Materia{
    int id;
    char nombre[30];
};

Materia* crearMateria(int id, char nombre[30]){
    Materia* m = (Materia*)malloc(sizeof(Materia));

    m->id = id;
    strcpy(m->nombre, nombre);

    return m;
}

void mostrarMateria(Materia* m){
    printf("ID: %d\n", m->id);
    printf("Nombre: %s\n", m->nombre);
}

int getIdMateria(Materia* m){
    return m->id;
}

const char* getNombreMateria(Materia* m){
    return m->nombre;
}

void setNombreMateria(Materia* m, char nombre[30]){
    strcpy(m->nombre, nombre);
}

void destruirMateria(Materia* m){
    free(m);
}
