#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    printf("\nO numero %d eh: ", num);

    // a) Paridade
    if (num % 2 == 0) {
        printf("PAR e ");
    } else {
        printf("IMPAR e ");
    }

    // b) Sinal
    if (num > 0) {
        printf("POSITIVO.\n");
    } else if (num < 0) {
        printf("NEGATIVO.\n");
    } else {
        printf("ZERO.\n");
    }

    return 0;
}
