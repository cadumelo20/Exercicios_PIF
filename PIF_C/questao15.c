#include <stdio.h>

int main() {
    int num_limite, encontrou = 0;

    printf("Digite um numero limite inteiro e positivo: ");
    scanf("%d", &num_limite);

    if (num_limite <= 0) {
        printf("O valor fornecido nao e valido.\n");
        return 0;
    }

    printf("Numeros multiplos de 3 e 5 ao mesmo tempo no intervalo [1, %d]:\n", num_limite);

    for (int i = 1; i <= num_limite; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d ", i);
            encontrou = 1;
        }
    }
    printf("\n");

    if (!encontrou) {
        printf("Nenhum numero atende a condicao nesse intervalo.\n");
    }

    return 0;
}
