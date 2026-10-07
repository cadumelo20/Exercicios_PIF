#include <stdio.h>

int main() {
    int N, divisores = 0;

    printf("Digite um numero inteiro positivo para teste de primalidade: ");
    scanf("%d", &N);

    if (N <= 1) {
        printf("O numero %d NAO eh primo (primos devem ser maiores que 1).\n", N);
        return 0;
    }

    // Conta divisores
    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            divisores++;
        }
    }

    if (divisores == 2) {
        printf("O numero %d EH primo! (Possui exatamente %d divisores).\n", N, divisores);
    } else {
        printf("O numero %d NAO eh primo. (Possui %d divisores).\n", N, divisores);
    }

    return 0;
}
