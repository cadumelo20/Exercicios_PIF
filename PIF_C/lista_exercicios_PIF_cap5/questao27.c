#include <stdio.h>

float celsiusParaFahrenheit(float c);
float celsiusParaKelvin(float c);
float fahrenheitParaCelsius(float f);
float kelvinParaCelsius(float k);

int main() {
    int opcao;
    float temp, convertido;

    printf("=== CONVERSOR DE TEMPERATURAS ===\n");
    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Celsius para Kelvin\n");
    printf("3 - Fahrenheit para Celsius\n");
    printf("4 - Kelvin para Celsius\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    if (opcao < 1 || opcao > 4) {
        printf("Opcao invalida!\n");
        return 0;
    }

    printf("Digite a temperatura: ");
    scanf("%f", &temp);

    switch (opcao) {
        case 1:
            convertido = celsiusParaFahrenheit(temp);
            printf("Resultado: %.2f F\n", convertido);
            break;
        case 2:
            convertido = celsiusParaKelvin(temp);
            printf("Resultado: %.2f K\n", convertido);
            break;
        case 3:
            convertido = fahrenheitParaCelsius(temp);
            printf("Resultado: %.2f C\n", convertido);
            break;
        case 4:
            convertido = kelvinParaCelsius(temp);
            printf("Resultado: %.2f C\n", convertido);
            break;
    }

    return 0;
}

float celsiusParaFahrenheit(float c) {
    return c * 1.8f + 32.0f;
}

float celsiusParaKelvin(float c) {
    return c + 273.15f;
}

float fahrenheitParaCelsius(float f) {
    return (f - 32.0f) / 1.8f;
}

float kelvinParaCelsius(float k) {
    return k - 273.15f;
}
