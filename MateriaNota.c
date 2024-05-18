#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "MateriaNota.h"

struct MateriaNota{
    int id;
    int idMateria;
    int nota;
};

MateriaNota* crearMateriaNota(int id, int idMateria, int nota){
    MateriaNota* m = (MateriaNota*)malloc(sizeof(MateriaNota));

    m->id = id;
    m->idMateria = idMateria;
    m->nota = nota;

    return m;
}

int getIdMateriaNota(MateriaNota* m){
    return m->id;
}

int getIdMateriaMateriaNota(MateriaNota* m){
    return m->idMateria;
}

int getNota(MateriaNota* m){
    return m->nota;
}

void setNotaMateriaNota(MateriaNota* m, int n){
    m->nota = n;
}

const char* MateriaNotaToString(MateriaNota* m){
    char str[50];

    sprintf(str, "ID: %d --- ID Materia: %d --- Nota: %d", m->id, m->idMateria, m->nota);

    return strdup(str); // Duplicar y devolver una copia de la cadena
}

void destruirMateriaNota(MateriaNota* m){
    free(m);
}
