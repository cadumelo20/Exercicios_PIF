#include <stdio.h>

int main() {
    int ang1, ang2, ang3, soma;

    printf("Digite o primeiro angulo interno: ");
    scanf("%d", &ang1);
    printf("Digite o segundo angulo interno: ");
    scanf("%d", &ang2);
    printf("Digite o terceiro angulo interno: ");
    scanf("%d", &ang3);

    soma = ang1 + ang2 + ang3;

    if (soma == 180 && ang1 > 0 && ang2 > 0 && ang3 > 0) {
        printf("\nTriangulo matematicamente valido. Classificacao: ");
        
        if (ang1 == 90 || ang2 == 90 || ang3 == 90) {
            printf("Retangulo.\n");
        } else if (ang1 > 90 || ang2 > 90 || ang3 > 90) {
            printf("Obtusangulo.\n");
        } else {
            // Se nenhum e 90, e nenhum eh maior q 90, entao todos sao menores q 90
            printf("Acutangulo.\n");
        }
    } else {
        printf("\nErro de geometria: A soma dos angulos fornecidos (%do) difere de 180o, logo nao formam um triangulo valido.\n", soma);
    }

    return 0;
}
