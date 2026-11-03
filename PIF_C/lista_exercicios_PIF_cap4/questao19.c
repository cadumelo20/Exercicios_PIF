#include <stdio.h>

int main() {
    float A, B, C;

    printf("Digite o tamanho do primeiro lado: ");
    scanf("%f", &A);
    printf("Digite o tamanho do segundo lado: ");
    scanf("%f", &B);
    printf("Digite o tamanho do terceiro lado: ");
    scanf("%f", &C);

    // Condicao de existencia do triangulo
    if ((A < B + C) && (B < A + C) && (C < A + B)) {
        printf("\nTriangulo valido. Classificacao: ");
        
        if (A == B && B == C) {
            printf("Equilatero (Todos lados iguais)\n");
        } else if (A == B || A == C || B == C) {
            printf("Isosceles (Dois lados iguais)\n");
        } else {
            printf("Escaleno (Todos lados diferentes)\n");
        }
    } else {
        printf("\nErro: Os lados fornecidos nao formam um triangulo!\n");
    }

    return 0;
}
