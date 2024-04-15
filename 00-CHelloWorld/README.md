### Sobre los archivos

##### 1. `hello.c`: Programa en lenguaje C que imprime por pantalla un "Hello, World" algo personalizado y genera un archivo output.txt.

##### 2. `output.txt`: Archivo de texto que contiene la salida del compilador del programa hello.c.

### Pasos para reproducir el programa

> [!NOTE]
> La version de compilador utilizado para este programa es C11 (Standard)

```shell
# Compilar programa "hello.c" con C11
cd 00-CHelloWorld
gcc hello.c -std=gnu11 -o hello

# Ejecutar el archivo ejecutable "hello.exe" y generar "autput.txt"
.\hello.exe > "output.txt"
```
