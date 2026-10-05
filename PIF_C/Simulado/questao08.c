#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main() {
    float R, area, volume;

    printf("Digite o valor do raio R da esfera: ");
    scanf("%f", &R);

    // Calculo da Area da superficie
    area = 4.0 * PI * pow(R, 2);

    // Calculo do Volume (Cuidado com a divisao real 4.0/3.0)
    volume = (4.0 / 3.0) * PI * pow(R, 3);

    printf("Area da superficie: %.3f\n", area);
    printf("Volume da esfera: %.3f\n", volume);

    return 0;
}
