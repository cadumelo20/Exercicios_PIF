#include <stdio.h>

int main() {
    int N;
    int num = 1;

    printf("Digite um numero inteiro positivo N para o Triangulo de Floyd: ");
    scanf("%d", &N);

    // Laco externo para controlar o numero de linhas
    for (int i = 1; i <= N; i++) {
        // Laco interno controla o numero de elementos por linha (i elementos)
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}
