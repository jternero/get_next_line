#  get_next_line
Este proyecto es una implementación de la función get_next_line en C, que lee una línea completa desde un archivo descriptor de archivo (file descriptor) o de la entrada estándar.

Estructura del proyecto
El proyecto está organizado en los siguientes archivos:

Makefile: Archivo para compilar y construir el proyecto.
get_next_line.h: Archivo de encabezado que contiene las declaraciones de funciones y estructuras utilizadas en el proyecto.
main.c: Archivo de ejemplo para mostrar el uso de la función get_next_line.
get_next_line.c: Archivo fuente que contiene la implementación principal de la función get_next_line.
get_next_line_utils.c: Archivo fuente que contiene funciones auxiliares utilizadas por get_next_line.
Compilación y ejecución
Para compilar el proyecto, ejecuta el siguiente comando: make

Esto generará un archivo ejecutable llamado gnl que puedes ejecutar con: ./gnl

Asegúrate de tener instalado el compilador de C en tu sistema antes de compilar el proyecto.

Uso de la función get_next_line

La función get_next_line se utiliza para leer una línea completa desde un archivo o la entrada estándar.

El parámetro fd es el descriptor de archivo del cual se leerá la línea, 
y line es un puntero a un puntero de caracteres donde se almacenará la línea leída.

Recuerda reemplazar "archivo.txt" con el nombre del archivo que deseas leer.
