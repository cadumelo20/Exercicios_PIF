#include <stdio.h>

int main() {
    int dia, mes, ano;

    printf("Digite a data formato numerico separado por espacos (DD MM AAAA): ");
    scanf("%d %d %d", &dia, &mes, &ano);

    // Valida intervalo simplificado dos dias 
    if (dia < 1 || dia > 31 || mes < 1 || mes > 12) {
        printf("A data fornecida eh invalida.\n");
        return 0;
    }

    printf("\nFormatacao padrao:\n%02d de ", dia);

    switch (mes) {
        case 1: printf("janeiro"); break;
        case 2: printf("fevereiro"); break;
        case 3: printf("marco"); break;
        case 4: printf("abril"); break;
        case 5: printf("maio"); break;
        case 6: printf("junho"); break;
        case 7: printf("julho"); break;
        case 8: printf("agosto"); break;
        case 9: printf("setembro"); break;
        case 10: printf("outubro"); break;
        case 11: printf("novembro"); break;
        case 12: printf("dezembro"); break;
    }

    printf(" de %04d\n", ano);

    return 0;
}
