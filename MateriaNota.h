#ifndef MATERIANOTA_H_INCLUDED
#define MATERIANOTA_H_INCLUDED

typedef struct MateriaNota MateriaNota;

MateriaNota* crearMateriaNota(int id, int idMateria, int nota);

int getIdMateriaNota(MateriaNota*);
int getIdMateriaMateriaNota(MateriaNota*);
int getNota(MateriaNota*);

void setNotaMateriaNota(MateriaNota*, int);

const char* MateriaNotaToString(MateriaNota*);

void destruirMateriaNota(MateriaNota*);

#endif // MATERIANOTA_H_INCLUDED
