#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int main() {
    srand(time(NULL));
    char letra_secreta = (rand() % 26) + 'a';
    char tentativa;
    int numero_tentativas = 0;

    printf("Bem-vindo ao Jogo de Adivinhacao de Letras!\n");
    printf("Tente adivinhar a letra secreta entre 'a' e 'z'.\n");

    do {
        printf("\nDigite uma letra: ");
        scanf(" %c", &tentativa);
        tentativa = tolower(tentativa); // normalizando entrada
        numero_tentativas++;

        if (tentativa < letra_secreta) {
            printf("Dica: A letra secreta vem DEPOIS de '%c' no alfabeto.\n", tentativa);
        } else if (tentativa > letra_secreta) {
            printf("Dica: A letra secreta vem ANTES de '%c' no alfabeto.\n", tentativa);
        } else {
            printf("\nParabens! Voce adivinhou a letra correta '%c'!\n", letra_secreta);
            printf("Total de tentativas: %d\n", numero_tentativas);
        }

    } while (tentativa != letra_secreta);

    return 0;
}
