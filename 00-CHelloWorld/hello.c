#include <stdio.h>

void crearArchivoSalida(const char *mensaje, const char *nombreArchivo);

int main()
{
    char saludo[] = "Hello, World! My name is Josué Luque\n";
    printf(saludo);

    crearArchivoSalida(saludo, "output.txt");
    return 0;
}

// Función crearArchivoSalida -> crea un archivo "output.txt" y escribe el saludo pasado
void crearArchivoSalida(const char *mensaje, const char *nombreArchivo)
{
    FILE *fp;
    fp = fopen(nombreArchivo, "w");
    if (fp == NULL)
    {
        printf("Error al abrir el archivo: %s\n", nombreArchivo);
        return;
    }
    fprintf(fp, mensaje);
    fclose(fp);
}