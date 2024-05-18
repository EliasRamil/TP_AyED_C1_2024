#include <stdio.h>
#include <stdlib.h>

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

void destruirMateriaNota(MateriaNota* m){
    free(m);
}
