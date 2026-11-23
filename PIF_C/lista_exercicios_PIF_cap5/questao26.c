#include <stdio.h>

long fibonacci(int n);

int main() {
    int qtd;

    printf("Digite a quantidade de termos da sequencia de Fibonacci: ");
    scanf("%d", &qtd);

    if (qtd <= 0) {
        printf("Quantidade invalida.\n");
        return 0;
    }

    printf("Sequencia de Fibonacci:\n");
    for (int i = 0; i < qtd; i++) {
        printf("%ld ", fibonacci(i));
    }
    printf("\n");

    return 0;
}

/*
 * Por que a versao recursiva fica lenta para valores grandes de n:
 * Cada chamada gera duas novas chamadas recursivas (n-1 e n-2), causando
 * crescimento exponencial O(2^n) e recalculando repetidamente os mesmos termos
 * milhares ou milhoes de vezes.
 */
long fibonacci(int n) {
    if (n == 0) {
        return 0L;
    }
    if (n == 1) {
        return 1L;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
