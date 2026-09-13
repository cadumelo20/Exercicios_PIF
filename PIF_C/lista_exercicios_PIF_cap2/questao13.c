#include <stdio.h>

int main() {
    float lado_q, base_r, alt_r, base_t, alt_t;
    
    printf("--- Quadrado ---\n");
    printf("Digite o lado: ");
    scanf("%f", &lado_q);
    printf("Area do Quadrado: %.2f\n\n", lado_q * lado_q);
    
    printf("--- Retangulo ---\n");
    printf("Digite a base e a altura: ");
    scanf("%f %f", &base_r, &alt_r);
    printf("Area do Retangulo: %.2f\n\n", base_r * alt_r);
    
    printf("--- Triangulo Retangulo ---\n");
    printf("Digite a base e a altura: ");
    scanf("%f %f", &base_t, &alt_t);
    printf("Area do Triangulo: %.2f\n", (base_t * alt_t) / 2.0);
    
    return 0;
}
