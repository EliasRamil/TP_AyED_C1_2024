# TP AyED 2024

## Enunciado 2024 - C1:
- *Realizar un programa que simule las principales funciones del sistema Guarani. El
sistema debe tener una lista de materias, las materias una lista de inscriptos, y
cada inscripto debe tener una lista de materias aprobadas con su promedio.*
- *Cada materia tiene un cupo, en caso de que se anoten más estudiantes que el
cupo se debe generar una cola, para generar la cola se evaluará como prioridad
primero la cantidad de materias aprobadas y luego el promedio del estudiante*

## Estrategia de resolución:
- *El programa asume que no las materias aprobadas por los alumnos son materias que
existen en el sistema.*
- *El programa asume que todas las materias en los datos poseen IDs diferentes.*
- *El programa asume que todos los estudiantes en los datos poseen DNIs diferentes.*
- *La estructura del programa, donde cada uno cuenta con sus respectivos .h y .c
es:*
    - *CargarDatos:* Contiene los datos con los que el programa trabaja en memoria.
    - *Estudiante:* TDA donde se maneja la información del estudiante. Se encarga
    tambien de manejar las materias aprobadas del mismo.
    - *Funciones:* Todas las funciones principales y extras para el funcionamiento del
    programa estan allí.
    - *Lista*
    - *main:* Es donde se ejecuta el programa y presenta 2 opciones, una con un menu de
    opciones y otra funcion donde simplemente retorna los datos (indicada con comentarios
    cual es cada una).
    - *Materia:* TDA con los datos comunes a MateriaNota y MateriaSistema.
    - *MateriaNota* TDA utilizado por el estudiante para tener el registro de materias
    apronadas con sus calificaciones.
    - *Matería Sistema:* TDA donde se maneja la informacion de la Materia en el Sistema.
    La misma se encarga de la inscripcion de alumnos analizando si el alumno ya aprobo la
    materia o no, y gestiona el cupo de inscriptos en base a la cantidad de materias
    aprobadas y el promedio de la carrera. Para inscribir a los alumnos se trabajo con una
    Lista ya que el ordenar no es un metodo que respete la idea FIFO de una Cola, lo que se
    hace es insertar al final de la lista y en caso de superar el cupo se realizan los
    ordenamientos para cumplir el criterio y se elimina al ultimo de la misma.

## Desarrollado y probado en:
- *SO:* Debian 12 y Windows 10
- *IDE:* Code::Blocks
