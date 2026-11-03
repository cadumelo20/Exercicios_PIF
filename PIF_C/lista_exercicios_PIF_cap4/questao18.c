#include <stdio.h>

int main() {
    int opcao;
    float temp_entrada, temp_convertida;

    printf("--- Conversor de Temperaturas ---\n");
    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Celsius para Kelvin\n");
    printf("3 - Fahrenheit para Celsius\n");
    printf("4 - Kelvin para Celsius\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Temperatura em Celsius: ");
            scanf("%f", &temp_entrada);
            temp_convertida = (temp_entrada * 1.8) + 32.0;
            printf("Equivalente: %.2f Fahrenheit\n", temp_convertida);
            break;
        case 2:
            printf("Temperatura em Celsius: ");
            scanf("%f", &temp_entrada);
            temp_convertida = temp_entrada + 273.15;
            printf("Equivalente: %.2f Kelvin\n", temp_convertida);
            break;
        case 3:
            printf("Temperatura em Fahrenheit: ");
            scanf("%f", &temp_entrada);
            temp_convertida = (temp_entrada - 32.0) / 1.8;
            printf("Equivalente: %.2f Celsius\n", temp_convertida);
            break;
        case 4:
            printf("Temperatura em Kelvin: ");
            scanf("%f", &temp_entrada);
            temp_convertida = temp_entrada - 273.15;
            printf("Equivalente: %.2f Celsius\n", temp_convertida);
            break;
        default:
            printf("Erro: Opcao do conversor invalida.\n");
    }

    return 0;
}
