#include <stdio.h>

long fatorialIterativo(int n);
long fatorialRecursivo(int n);

int main() {
    int n;
    long fatIt, fatRec;

    printf("Digite um numero inteiro nao negativo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Erro: nao existe fatorial para numero negativo.\n");
        return 0;
    }

    fatIt = fatorialIterativo(n);
    fatRec = fatorialRecursivo(n);

    printf("Fatorial iterativo de %d: %ld\n", n, fatIt);
    printf("Fatorial recursivo de %d: %ld\n", n, fatRec);

    if (fatIt == fatRec) {
        printf("Confirmacao: os dois resultados coincidem!\n");
    } else {
        printf("Atencao: os resultados divergem.\n");
    }

    return 0;
}

long fatorialIterativo(int n) {
    long res = 1;
    for (int i = 2; i <= n; i++) {
        res *= i;
    }
    return res;
}

long fatorialRecursivo(int n) {
    if (n == 0 || n == 1) {
        return 1L;
    }
    return (long)n * fatorialRecursivo(n - 1);
}
