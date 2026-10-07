#include <stdio.h>

int main() {
    int valor_saque;

    printf("Simulador de Caixa Eletronico\n");
    printf("Digite o valor do saque em R$: ");
    scanf("%d", &valor_saque);

    if (valor_saque <= 0) {
        printf("Valor de saque invalido.\n");
        return 0;
    }

    int cedulas_disponiveis[] = {100, 50, 20, 10, 5, 2};
    int qtd_cedulas;

    printf("\nDecomposicao de cedulas para o saque:\n");

    for (int i = 0; i < 6; i++) {
        qtd_cedulas = 0;
        
        while (valor_saque >= cedulas_disponiveis[i]) {
            valor_saque -= cedulas_disponiveis[i];
            qtd_cedulas++;
        }

        if (qtd_cedulas > 0) {
            printf("%d cedula(s) de R$ %d\n", qtd_cedulas, cedulas_disponiveis[i]);
        }
    }

    if (valor_saque > 0) {
        printf("\nAtencao: Nao foi possivel sacar o valor exato de R$ %d restante pois nao ha moedas ou notas de R$ 1.\n", valor_saque);
    }

    return 0;
}
