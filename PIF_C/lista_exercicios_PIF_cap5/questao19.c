#include <stdio.h>

void contagem(int n);
void contagemCrescente(int n);

int main() {
    int n;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Erro: o numero deve ser positivo.\n");
        return 0;
    }

    printf("\nContagem regressiva:\n");
    contagem(n);

    printf("\nContagem crescente:\n");
    contagemCrescente(n);
    printf("\n");

    return 0;
}

void contagem(int n) {
    if (n == 0) {
        printf("Fogo!\n");
        return;
    }
    printf("%d\n", n);
    contagem(n - 1);
}

/*
 * Explicacao sobre a mudanca de posicao:
 * Na contagem regressiva, o printf ocorre ANTES da chamada recursiva,
 * exibindo o valor durante a fase de empilhamento (n, n-1, ..., 1).
 * Na contagem crescente abaixo, a chamada recursiva ocorre ANTES do printf,
 * fazendo com que a impressao aconteca apenas no desempilhamento (1, 2, ..., n).
 */
void contagemCrescente(int n) {
    if (n == 0) {
        return;
    }
    contagemCrescente(n - 1);
    printf("%d ", n);
}
