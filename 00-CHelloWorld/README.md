## Sobre los archivos

##### 1. `hello.c`: Programa en lenguaje C que imprime por pantalla un "Hello, World" algo personalizado y genera un archivo output.txt con lo mostrado por consola.

##### 2. `output.txt`: Archivo de texto que contiene la salida del compilador del programa hello.c.

> [!NOTE]
> La version de compulador utilizado para este programa es C11 (Standard)

### Pasos para reproducir el programa

```shell
# Compilar programa "hello.c" con C11
cd 00-CHelloWorld
gcc hello.c -std=gnu11 -o hello

# Ejecutar el archivo ejecutable "hello.exe"
.\hello.exe
```
