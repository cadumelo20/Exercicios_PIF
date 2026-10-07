#include <stdio.h>

int main() {
    int opcao;
    float salario, novo_salario, desconto, salario_liquido;

    do {
        printf("\n==========================================\n");
        printf("  SISTEMA DE FOLHA DE PAGAMENTO CONTINUO  \n");
        printf("==========================================\n");
        printf("1. Reajuste Salarial\n");
        printf("2. Retencao de Imposto de Renda\n");
        printf("3. Encerrar Programa\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\n-- REAJUSTE SALARIAL --\n");
                printf("Informe o salario atual: R$ ");
                scanf("%f", &salario);
                
                if (salario <= 2000.0) {
                    novo_salario = salario + (salario * 0.15); // 15%
                } else {
                    novo_salario = salario + (salario * 0.10); // 10%
                }
                
                printf("Novo salario calculado: R$ %.2f\n", novo_salario);
                break;
                
            case 2:
                printf("\n-- RETENCAO DE IMPOSTO --\n");
                printf("Informe o salario bruto: R$ ");
                scanf("%f", &salario);
                
                if (salario <= 3000.0) {
                    desconto = salario * 0.08; // 8%
                } else {
                    desconto = salario * 0.15; // 15%
                }
                
                salario_liquido = salario - desconto;
                printf("Desconto de IR: R$ %.2f\n", desconto);
                printf("Salario liquido: R$ %.2f\n", salario_liquido);
                break;
                
            case 3:
                printf("\nEncerrando o sistema de folha de pagamento...\n");
                break;
                
            default:
                printf("\nErro: Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 3);

    return 0;
}
