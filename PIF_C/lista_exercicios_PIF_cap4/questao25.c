#include <stdio.h>

int main() {
    int total_pagar, valor_entregue, troco_bruto, troco_atual;
    int qtd100, qtd50, qtd20, qtd10, qtd5, qtd2;

    printf("Valor total a pagar da compra: R$ ");
    scanf("%d", &total_pagar);
    printf("Valor dinheiro entregue pelo cliente: R$ ");
    scanf("%d", &valor_entregue);

    if (valor_entregue < total_pagar) {
        printf("Erro: O valor entregue no caixa e insuficiente.\n");
        return 0;
    }

    troco_bruto = valor_entregue - total_pagar;
    troco_atual = troco_bruto;

    printf("\nTroco a devolver: R$ %d\n", troco_bruto);
    printf("Decomposicao minima sugerida:\n");

    // Usa-se divisao inteira e resto para extrair as cedulas sem laco, seguindo logica if/else.
    if (troco_atual >= 100) {
        qtd100 = troco_atual / 100;
        troco_atual = troco_atual % 100;
        printf("%d cedula(s) de R$ 100\n", qtd100);
    }
    
    if (troco_atual >= 50) {
        qtd50 = troco_atual / 50;
        troco_atual = troco_atual % 50;
        printf("%d cedula(s) de R$ 50\n", qtd50);
    }
    
    if (troco_atual >= 20) {
        qtd20 = troco_atual / 20;
        troco_atual = troco_atual % 20;
        printf("%d cedula(s) de R$ 20\n", qtd20);
    }
    
    if (troco_atual >= 10) {
        qtd10 = troco_atual / 10;
        troco_atual = troco_atual % 10;
        printf("%d cedula(s) de R$ 10\n", qtd10);
    }
    
    if (troco_atual >= 5) {
        qtd5 = troco_atual / 5;
        troco_atual = troco_atual % 5;
        printf("%d cedula(s) de R$ 5\n", qtd5);
    }
    
    if (troco_atual >= 2) {
        qtd2 = troco_atual / 2;
        troco_atual = troco_atual % 2;
        printf("%d cedula(s) de R$ 2\n", qtd2);
    }

    if (troco_atual > 0) {
        // Exemplo, sobrou 1 real, que nao tem nota disponivel no enunciado (e precisa da moeda)
        printf("Atencao sobrou moeda: R$ %d nao decomposto em notas.\n", troco_atual);
    }

    return 0;
}
