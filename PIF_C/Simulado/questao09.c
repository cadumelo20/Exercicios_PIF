#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, p, area;

    printf("Digite os comprimentos dos tres lados do triangulo: ");
    scanf("%f %f %f", &a, &b, &c);

    // Semiperimetro
    p = (a + b + c) / 2.0;

    // Formula de Heron
    area = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("Area do triangulo: %.2f\n", area);

    return 0;
}
