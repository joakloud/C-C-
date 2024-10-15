#include <stido.h>
#include <stlib.h>
#include <time.h>

int main {
    int numero_aleatorio, numero_usuario, intentos = 0;
    srand(time(NULL));
    numeroAleatorio = rand() % 100 + 1;
    printf("¡Adivina el numero entre 1 y 100!\n");

    do {
        printf("ingresa el nuemro:");
        scanf("%d" & numeroUsuario);
        intentos ++;

        if (numeroUsuario < numeroAleatorio) {
              printf("el numero es mayor \n");
        } else if (numeroUsuario > numeroAleatorio) {
              printf("el numero es menor \n");
        } else {
              printf("Felicidades, adivinaste el numero en %d intentos");
        } while {numeroUsuario != numeroAleatorio};
    }
    return 0
 }
