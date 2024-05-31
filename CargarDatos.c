#include <stdio.h>
#include <stdlib.h>

#include "Materia.h"
#include "MateriaNota.h"
#include "MateriaSistema.h"
#include "Estudiante.h"
#include "CargarDatos.h"

Lista* cargarMaterias(){
    Lista* list = crearLista();

    insertarDatoAlFinalDeLaLista(list, (void*)crearMateria(8600, "Programacion"));
    insertarDatoAlFinalDeLaLista(list, (void*)crearMateria(8604, "Matematicas"));
    insertarDatoAlFinalDeLaLista(list, (void*)crearMateria(5030, "Ingles"));
    insertarDatoAlFinalDeLaLista(list, (void*)crearMateria(8603, "Arquitectura de Computadoras"));
    insertarDatoAlFinalDeLaLista(list, (void*)crearMateria(8607, "IPC"));
    insertarDatoAlFinalDeLaLista(list, (void*)crearMateria(8611, "AyED"));
    insertarDatoAlFinalDeLaLista(list, (void*)crearMateria(8612, "POO"));
    insertarDatoAlFinalDeLaLista(list, (void*)crearMateria(8615, "BB.DD."));
    insertarDatoAlFinalDeLaLista(list, (void*)crearMateria(8620, "Sist. y Org."));
    insertarDatoAlFinalDeLaLista(list, (void*)crearMateria(11, "Seminario de DD.HH."));
    return list;
}

Lista* cargarEstudiantes(Lista* materias){
    Lista* list = crearLista();

    //Alumno 1:
    Estudiante* e1 = crearEstudiante(127, "Lopez", "Luis");
    agregarMateriaAprobada(e1, (Materia*)obtenerDatoEnLaLista(materias, 3), 8);
    agregarMateriaAprobada(e1, (Materia*)obtenerDatoEnLaLista(materias, 1), 5);
    agregarMateriaAprobada(e1, (Materia*)obtenerDatoEnLaLista(materias, 0), 4);
    insertarDatoAlFinalDeLaLista(list, (void*)e1);
    //Alumno 2:
    Estudiante* e2 = crearEstudiante(254, "Sanchez", "Nicole");
    insertarDatoAlFinalDeLaLista(list, (void*)e2);
    //Alumno 3:
    Estudiante* e3 = crearEstudiante(239, "Sanchez", "Juan");
    agregarMateriaAprobada(e3, (Materia*)obtenerDatoEnLaLista(materias, 1), 4);
    agregarMateriaAprobada(e3, (Materia*)obtenerDatoEnLaLista(materias, 4), 9);
    insertarDatoAlFinalDeLaLista(list, (void*)e3);
    //Alumno 4:
    Estudiante* e4 = crearEstudiante(564, "Gomez", "Jennifer");
    agregarMateriaAprobada(e4, (Materia*)obtenerDatoEnLaLista(materias, 3), 10);
    agregarMateriaAprobada(e4, (Materia*)obtenerDatoEnLaLista(materias, 0), 5);
    agregarMateriaAprobada(e4, (Materia*)obtenerDatoEnLaLista(materias, 9), 8);
    insertarDatoAlFinalDeLaLista(list, (void*)e4);
    //Alumno 5:
    Estudiante* e5 = crearEstudiante(985, "Rodriguez", "Pedro");
    agregarMateriaAprobada(e5, (Materia*)obtenerDatoEnLaLista(materias, 8), 5);
    agregarMateriaAprobada(e5, (Materia*)obtenerDatoEnLaLista(materias, 1), 4);
    insertarDatoAlFinalDeLaLista(list, (void*)e5);
    //Alumno 6:
    Estudiante* e6 = crearEstudiante(457, "Perez", "Javier");
    agregarMateriaAprobada(e6, (Materia*)obtenerDatoEnLaLista(materias, 0), 9);
    agregarMateriaAprobada(e6, (Materia*)obtenerDatoEnLaLista(materias, 1), 10);
    agregarMateriaAprobada(e6, (Materia*)obtenerDatoEnLaLista(materias, 2), 7);
    agregarMateriaAprobada(e6, (Materia*)obtenerDatoEnLaLista(materias, 4), 9);
    insertarDatoAlFinalDeLaLista(list, (void*)e6);
    //Alumno 7:
    Estudiante* e7 = crearEstudiante(953, "Gutierrez", "Miguel");
    agregarMateriaAprobada(e7, (Materia*)obtenerDatoEnLaLista(materias, 0), 4);
    agregarMateriaAprobada(e7, (Materia*)obtenerDatoEnLaLista(materias, 6), 4);
    insertarDatoAlFinalDeLaLista(list, (void*)e7);

    return list;
}

Lista* cargarMateriasSistema(Lista* lMaterias, Lista* lEstudiantes){
    Lista* list = crearLista();

    insertarDatoAlFinalDeLaLista(list, (MateriaSistema*)crearMateriaSistema((Materia*)obtenerDatoEnLaLista(lMaterias, 0), 4));
    insertarDatoAlFinalDeLaLista(list, (MateriaSistema*)crearMateriaSistema((Materia*)obtenerDatoEnLaLista(lMaterias, 1), 2));
    insertarDatoAlFinalDeLaLista(list, (MateriaSistema*)crearMateriaSistema((Materia*)obtenerDatoEnLaLista(lMaterias, 2), 2));
    insertarDatoAlFinalDeLaLista(list, (MateriaSistema*)crearMateriaSistema((Materia*)obtenerDatoEnLaLista(lMaterias, 3), 5));
    insertarDatoAlFinalDeLaLista(list, (MateriaSistema*)crearMateriaSistema((Materia*)obtenerDatoEnLaLista(lMaterias, 4), 4));
    insertarDatoAlFinalDeLaLista(list, (MateriaSistema*)crearMateriaSistema((Materia*)obtenerDatoEnLaLista(lMaterias, 5), 3));
    insertarDatoAlFinalDeLaLista(list, (MateriaSistema*)crearMateriaSistema((Materia*)obtenerDatoEnLaLista(lMaterias, 6), 4));
    insertarDatoAlFinalDeLaLista(list, (MateriaSistema*)crearMateriaSistema((Materia*)obtenerDatoEnLaLista(lMaterias, 7), 7));
    insertarDatoAlFinalDeLaLista(list, (MateriaSistema*)crearMateriaSistema((Materia*)obtenerDatoEnLaLista(lMaterias, 8), 4));
    insertarDatoAlFinalDeLaLista(list, (MateriaSistema*)crearMateriaSistema((Materia*)obtenerDatoEnLaLista(lMaterias, 9), 3));
    for(int i=0; i<getTamanioLista(list); i++){
        // Como es de pocos datos se hace cargando al 100% de estudiantes en
        // el 100% de materias, los metodos agregar se encargan de saber si
        // se debe o no incribir a un alumno.
        for(int j=0; j<getTamanioLista(lEstudiantes); j++)
            agregarEstudianteAMateria((MateriaSistema*)obtenerDatoEnLaLista(list, i), (Estudiante*)obtenerDatoEnLaLista(lEstudiantes, j));

    }

    return list;
}
