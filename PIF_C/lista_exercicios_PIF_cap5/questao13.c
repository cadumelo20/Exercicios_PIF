#include <stdio.h>

float soma(float a, float b);
float subtrai(float a, float b);
float multiplica(float a, float b);
float divide(float a, float b);

int main() {
    int opcao;
    float n1, n2;

    printf("=== CALCULADORA ===\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("Escolha a operacao: ");
    scanf("%d", &opcao);

    if (opcao < 1 || opcao > 4) {
        printf("Opcao invalida!\n");
        return 0;
    }

    printf("Digite o primeiro operando: ");
    scanf("%f", &n1);
    printf("Digite o segundo operando: ");
    scanf("%f", &n2);

    switch (opcao) {
        case 1:
            printf("Resultado: %.2f\n", soma(n1, n2));
            break;
        case 2:
            printf("Resultado: %.2f\n", subtrai(n1, n2));
            break;
        case 3:
            printf("Resultado: %.2f\n", multiplica(n1, n2));
            break;
        case 4:
            if (n2 == 0.0f) {
                printf("Erro: Divisao por zero nao e permitida.\n");
            } else {
                printf("Resultado: %.2f\n", divide(n1, n2));
            }
            break;
    }

    return 0;
}

float soma(float a, float b) {
    return a + b;
}

float subtrai(float a, float b) {
    return a - b;
}

float multiplica(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}
