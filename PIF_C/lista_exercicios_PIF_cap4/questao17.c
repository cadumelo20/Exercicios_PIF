#include <stdio.h>

int main() {
    float total_compra, pagamento, comissao;
    int opcao;

    printf("Valor total da compra: R$ ");
    scanf("%f", &total_compra);

    printf("\nForma de pagamento:\n");
    printf("1 - A vista (10%% de desconto)\n");
    printf("2 - Parcelado (em 3x sem juros)\n");
    printf("Sua escolha: ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        pagamento = total_compra - (total_compra * 0.10);
        comissao = pagamento * 0.05;
        printf("\n--- Resumo ---\n");
        printf("Valor final a pagar (desconto a vista): R$ %.2f\n", pagamento);
        printf("Comissao do vendedor: R$ %.2f\n", comissao);
    } else if (opcao == 2) {
        pagamento = total_compra / 3.0;
        comissao = total_compra * 0.05;
        printf("\n--- Resumo ---\n");
        printf("Valor parcelado em 3x sem juros: R$ %.2f cada parcela (Total R$ %.2f)\n", pagamento, total_compra);
        printf("Comissao do vendedor: R$ %.2f\n", comissao);
    } else {
        printf("\nErro: Opcao de pagamento selecionada invalida.\n");
    }

    return 0;
}
