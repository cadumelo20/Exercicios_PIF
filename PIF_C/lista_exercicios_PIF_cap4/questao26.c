#include <stdio.h>

int main() {
    int mes, ano, eh_bissexto;

    printf("Numero respectivo do mes (1 a 12): ");
    scanf("%d", &mes);
    printf("Ano de avaliacao: ");
    scanf("%d", &ano);

    if (mes < 1 || mes > 12) {
        printf("O mes inserido nao existe.\n");
        return 0;
    }

    // Regra da validacao de bissexto para parametro dinamico
    eh_bissexto = ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) ? 1 : 0;

    switch (mes) {
        case 1: printf("Janeiro - Possui 31 dias.\n"); break;
        case 3: printf("Marco - Possui 31 dias.\n"); break;
        case 5: printf("Maio - Possui 31 dias.\n"); break;
        case 7: printf("Julho - Possui 31 dias.\n"); break;
        case 8: printf("Agosto - Possui 31 dias.\n"); break;
        case 10: printf("Outubro - Possui 31 dias.\n"); break;
        case 12: printf("Dezembro - Possui 31 dias.\n"); break;
        
        case 4: printf("Abril - Possui 30 dias.\n"); break;
        case 6: printf("Junho - Possui 30 dias.\n"); break;
        case 9: printf("Setembro - Possui 30 dias.\n"); break;
        case 11: printf("Novembro - Possui 30 dias.\n"); break;
        
        case 2: 
            if (eh_bissexto) {
                printf("Fevereiro (Ano Bissexto) - Possui 29 dias.\n");
            } else {
                printf("Fevereiro (Ano Normal) - Possui 28 dias.\n");
            }
            break;
    }

    return 0;
}
