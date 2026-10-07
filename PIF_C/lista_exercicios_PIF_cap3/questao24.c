#include <stdio.h>

int main() {
    int N;

    printf("Digite uma dimensao impar N (entre 3 e 19): ");
    scanf("%d", &N);

    if (N < 3 || N > 19 || N % 2 == 0) {
        printf("Dimensoes invalidas. O numero deve ser impar entre 3 e 19.\n");
        return 0;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            // A diagonal principal ocorre quando a linha e coluna sao iguais (i == j).
            // A diagonal secundaria ocorre quando a soma da linha e coluna igualam N - 1.
            if (i == j || i + j == N - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
