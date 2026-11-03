#include <stdio.h>

int main() {
    float lab, semestral, final, media;

    printf("Digite a nota do Trabalho de Laboratorio (Peso 2): ");
    scanf("%f", &lab);
    printf("Digite a nota da Avaliacao Semestral (Peso 3): ");
    scanf("%f", &semestral);
    printf("Digite a nota do Exame Final (Peso 5): ");
    scanf("%f", &final);

    // Calculo ponderado: divide pela soma dos pesos (2+3+5 = 10)
    media = ((lab * 2) + (semestral * 3) + (final * 5)) / 10.0;
    
    printf("\nMedia Final Ponderada: %.2f\n", media);

    if (media >= 0.0 && media <= 2.9) {
        printf("Situacao Academica: Reprovado\n");
    } else if (media >= 3.0 && media <= 4.9) {
        printf("Situacao Academica: Em Recuperacao\n");
    } else if (media >= 5.0 && media <= 10.0) {
        printf("Situacao Academica: Aprovado\n");
    } else {
        printf("Valores invalidos, verifique as notas lancadas.\n");
    }

    return 0;
}
