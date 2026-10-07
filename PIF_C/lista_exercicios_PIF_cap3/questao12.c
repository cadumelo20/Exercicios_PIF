#include <stdio.h>

int main() {
    float fahrenheit, kelvin;

    printf("Tabela de Conversao de Temperaturas\n");
    printf("----------------------------------------\n");
    printf("Celsius\t\tFahrenheit\tKelvin\n");
    printf("----------------------------------------\n");

    for (int c = 0; c <= 100; c += 5) {
        fahrenheit = (9.0 * c) / 5.0 + 32.0;
        kelvin = c + 273.15;
        
        printf("%d.00 C\t\t%.2f F\t\t%.2f K\n", c, fahrenheit, kelvin);
    }

    printf("----------------------------------------\n");
    
    return 0;
}
