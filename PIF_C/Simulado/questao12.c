#include <stdio.h>

int main() {
    float nota;

    do {
        printf("Digite uma nota valida (0.0 a 10.0): ");
        scanf("%f", &nota);

        if (nota < 0.0 || nota > 10.0) {
            printf("Erro: A nota %.2f e invalida. Tente novamente.\n", nota);
        }
    } while (nota < 0.0 || nota > 10.0);

    printf("Nota cadastrada com sucesso: %.2f\n", nota);

    return 0;
}
