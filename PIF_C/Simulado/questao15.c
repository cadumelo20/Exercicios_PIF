#include <stdio.h>

int main() {
    int N;
    int num = 1;

    printf("Digite um numero inteiro positivo N para o Triangulo de Floyd: ");
    scanf("%d", &N);

    // Laco externo para as linhas
    for (int i = 1; i <= N; i++) {
        // Laco interno para os itens da linha
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}
