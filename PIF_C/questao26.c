#include <stdio.h>

int main() {
    int A, B;
    long long int soma_primos = 0;

    printf("Digite o inicio do intervalo (A): ");
    scanf("%d", &A);
    printf("Digite o fim do intervalo (B): ");
    scanf("%d", &B);

    if (A >= B || A < 0) {
        printf("Intervalo invalido. Certifique-se de que A < B e ambos sao positivos.\n");
        return 0;
    }

    printf("Numeros primos no intervalo [%d, %d]:\n", A, B);

    for (int num = A; num <= B; num++) {
        if (num <= 1) continue;

        int is_primo = 1;
        // Otimizacao: testa divisores so ate num/2 ou raiz
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                is_primo = 0;
                break;
            }
        }

        if (is_primo) {
            printf("%d ", num);
            soma_primos += num;
        }
    }

    printf("\n\nSoma total dos primos no intervalo: %lld\n", soma_primos);

    return 0;
}
