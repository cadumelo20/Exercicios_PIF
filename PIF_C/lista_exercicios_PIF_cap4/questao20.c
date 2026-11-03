#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta, x1, x2;

    printf("Resolucao da Equacao de Segundo Grau (ax^2 + bx + c = 0)\n");
    printf("Digite o valor do coeficiente a (deve ser != 0): ");
    scanf("%f", &a);

    if (a == 0) {
        printf("Se 'a' for zero, nao se trata de equacao do segundo grau.\n");
        return 0;
    }

    printf("Digite o valor do coeficiente b: ");
    scanf("%f", &b);
    printf("Digite o valor do coeficiente c: ");
    scanf("%f", &c);

    delta = pow(b, 2) - (4.0 * a * c);

    if (delta < 0) {
        printf("\nDelta = %.2f\n", delta);
        printf("A equacao nao possui raizes reais.\n");
    } else if (delta == 0) {
        x1 = -b / (2.0 * a);
        printf("\nDelta = %.2f\n", delta);
        printf("A equacao possui uma raiz unica: %.2f\n", x1);
    } else { // Delta > 0
        x1 = (-b + sqrt(delta)) / (2.0 * a);
        x2 = (-b - sqrt(delta)) / (2.0 * a);
        printf("\nDelta = %.2f\n", delta);
        printf("A equacao possui duas raizes distintas:\nx1 = %.2f\nx2 = %.2f\n", x1, x2);
    }

    return 0;
}
