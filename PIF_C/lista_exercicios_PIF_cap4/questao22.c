#include <stdio.h>

int main() {
    float valor_produto, preco_final, taxa_imposto;
    int uf;

    printf("Valor base do produto em (R$): ");
    scanf("%f", &valor_produto);

    printf("\nEstados destinos atendidos pelo frete:\n");
    printf("1 - Minas Gerais (MG)\n");
    printf("2 - Sao Paulo (SP)\n");
    printf("3 - Rio de Janeiro (RJ)\n");
    printf("4 - Mato Grosso do Sul (MS)\n");
    printf("Digite o codigo num. do estado de destino do produto: ");
    scanf("%d", &uf);

    switch (uf) {
        case 1: taxa_imposto = 0.07; break; // MG
        case 2: taxa_imposto = 0.12; break; // SP
        case 3: taxa_imposto = 0.15; break; // RJ
        case 4: taxa_imposto = 0.08; break; // MS
        default: 
            printf("\nErro fatal: Codigo do estado invalido para essa mercadoria.\n");
            return 0; // Termina execucao sem calcular 
    }

    preco_final = valor_produto + (valor_produto * taxa_imposto);
    
    printf("\nPreco base: R$ %.2f\n", valor_produto);
    printf("Aliquota adicionada: %.2f%%\n", taxa_imposto * 100);
    printf("Valor final acrescido do imposto: R$ %.2f\n", preco_final);

    return 0;
}
