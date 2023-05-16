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
Para compilar el proyecto, ejecuta el siguiente comando:
# make

Esto generará un archivo ejecutable llamado gnl que puedes ejecutar con:
# ./gnl

Asegúrate de tener instalado el compilador de C en tu sistema antes de compilar el proyecto.

Uso de la función get_next_line

La función get_next_line se utiliza para leer una línea completa desde un archivo o la entrada estándar. La función tiene la siguiente firma:


int get_next_line(int fd, char **line);
El parámetro fd es el descriptor de archivo del cual se leerá la línea, y line es un puntero a un puntero de caracteres donde se almacenará la línea leída.

Aquí hay un ejemplo básico de cómo usar la función get_next_line:

#include "get_next_line.h"
#include <stdio.h>

int main()
{
    int fd = open("archivo.txt", O_RDONLY);
    if (fd < 0)
    {
        perror("Error al abrir el archivo");
        return 1;
    }

    char *line = NULL;
    int ret;

    while ((ret = get_next_line(fd, &line)) > 0)
    {
        printf("%s\n", line);
        free(line);
        line = NULL;
    }

    if (ret < 0)
    {
        perror("Error al leer el archivo");
        return 1;
    }

    close(fd);
    return 0;
}


Recuerda reemplazar "archivo.txt" con el nombre del archivo que deseas leer.
