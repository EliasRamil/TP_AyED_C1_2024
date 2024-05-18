#ifndef COLA_H_INCLUDED
#define COLA_H_INCLUDED

typedef struct Cola Cola;

Cola* crearCola();

int getTamanioLista(Cola*);

void agregarALaCola(Cola*);
void* obtenerDatoDeLaCola(Cola*);
void* eliminarDatoDeLaCola(Cola*);

void destruirLista(Cola*);
void destruirListaYDatos(Cola*, void eliminarDatos(void*));

#endif // COLA_H_INCLUDED
