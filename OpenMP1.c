/************************************************
Autor: Daniel Galvis Betancourth
Programa: OpenMP.c
Fecha: 13 de mayo 2025
Tema: Programación Paralela- Introduccion OpenMP
************************************************
------------------------------------------------
________________________________________________
________________________________________________

* Resumen
* Progrma crea hilos de ejecución para cada core
* Imprime cadena de caracteres por cada llamado
*
*/

#include <omp.h> //<----------- header necesario para invocar la API OpenMP
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char argv[]){
	printf("OpenMP ejecutando con %d hilos\n", omp_get_max_threads());
#pragma omp parallel
{//Code here will be executed by all threads
	printf("Hello world desde el thread %d\n", omp_get_thread_num());
}
return 0;
}
