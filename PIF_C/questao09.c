#include <stdio.h>

int main() {
    float valor, soma = 0.0;
    int quantidade = 0;

    printf("Digite uma sequencia de valores reais positivos.\n");
    printf("Digite um valor negativo para encerrar.\n");

    while (1) { // Laco infinito controlado pelo comando break interno
        printf("Informe um valor: ");
        scanf("%f", &valor);

        // Avaliacao da sentinela
        if (valor < 0) {
            break; 
        }

        soma += valor;
        quantidade++;
    }

    if (quantidade > 0) {
        float media = soma / quantidade;
        printf("\nQuantidade de valores validos: %d\n", quantidade);
        printf("Soma total: %.2f\n", soma);
        printf("Media aritmetica: %.2f\n", media);
    } else {
        printf("\nNenhum valor valido positivo foi digitado.\n");
    }

    return 0;
}
