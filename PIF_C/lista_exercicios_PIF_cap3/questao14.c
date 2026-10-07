#include <stdio.h>

int main() {
    long long int soma_total_quadrados = 0;

    printf("Numeros e seus quadrados:\n");
    
    for (int i = 1; i <= 100; i++) {
        long long int quadrado = i * i;
        printf("%d -> %lld\n", i, quadrado);
        soma_total_quadrados += quadrado;
    }

    printf("\n==========================\n");
    printf("Soma total dos quadrados: %lld\n", soma_total_quadrados);
    
    return 0;
}
