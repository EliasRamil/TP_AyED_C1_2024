#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "MateriaSistema.h"

struct MateriaSistema{
    Materia* materia;
    int cupo;
    Lista* inscriptos;
};

MateriaSistema* crearMateriaSistema(Materia* mat, int cupo){
    MateriaSistema* m = (MateriaSistema*)malloc(sizeof(MateriaSistema));

    m->materia = mat;
    m->cupo = cupo;
    m->inscriptos = crearLista();

    return m;
}

int getIdMateriaSistema(MateriaSistema* m){
    return getIdMateria(m->materia);
}

const char* getNombreMateriaSistema(MateriaSistema* m){
    return getNombreMateria(m->materia);
}

int getCupoMateriaSistema(MateriaSistema* m){
    return m->cupo;
}

const Lista* getListaInscriptosMateriaSistema(MateriaSistema* m){
    return m->inscriptos;
}

void destruirMateriaSistema(MateriaSistema* m){
    free(m);
}
