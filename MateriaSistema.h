#ifndef MATERIASISTEMA_H_INCLUDED
#define MATERIASISTEMA_H_INCLUDED

#include "Lista.h"
#include "Materia.h"

typedef struct MateriaSistema MateriaSistema;

MateriaSistema* crearMateriaSistema(Materia*, int);

int getIdMateriaSistema(MateriaSistema*);
const char* getNombreMateriaSistema(MateriaSistema*);
int getCupoMateriaSistema(MateriaSistema*);
const Lista* getListaInscriptosMateriaSistema(MateriaSistema*);

void destruirMateriaSistema(MateriaSistema*);

#endif // MATERIASISTEMA_H_INCLUDED
