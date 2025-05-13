#Proyecto OpenMP - Ejecución en Paralelo

Autor: Daniel Galvis BetancourtDescripción:Este proyecto muestra un ejemplo básico de programación paralela utilizando OpenMP en C. El objetivo principal es demostrar cómo múltiples hilos pueden ejecutar un mismo bloque de código de forma concurrente, optimizando el uso de los recursos del procesador.

Compilación:

Para compilar el programa, ejecuta el siguiente comando en la terminal:

gcc -fopenmp openmp_ejemplo.c -o openmp_ejemplo 

La bandera -fopenmp habilita el soporte para OpenMP en el compilador.

Ejecución:

Para ejecutar el programa:

./openmp_ejemplo

Salida Esperada:

Al ejecutarse, el programa muestra el número máximo de hilos disponibles y un mensaje por cada hilo que se está ejecutando de forma paralela:

OpenMP ejecutando con 4 hilos
Hello world desde el thread 0
Hello world desde el thread 1
Hello world desde el thread 2
Hello world desde el thread 3

La cantidad de hilos puede variar según la configuración de OpenMP y el hardware disponible.

Se incluye la librería <omp.h> para el manejo de OpenMP.

Se obtiene el número máximo de hilos con omp_get_max_threads().

Con la directiva #pragma omp parallel, se inicia un bloque paralelo donde cada hilo imprime un mensaje indicando su número identificador (omp_get_thread_num()).
