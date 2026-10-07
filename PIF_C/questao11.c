#include <stdio.h>

int main() {
    int a, b;

    printf("Digite o valor do inteiro A: ");
    scanf("%d", &a);
    printf("Digite o valor do inteiro B: ");
    scanf("%d", &b);

    printf("\nIntervalo Numerico:\n");

    if (a <= b) {
        // Crescente
        for (int i = a; i <= b; i++) {
            printf("%d ", i);
        }
    } else {
        // Decrescente
        for (int i = a; i >= b; i--) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
