#include <stdio.h>

int ehPar(int n);

int main() {
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if (ehPar(num)) {
        printf("O numero %d e PAR.\n", num);
    } else {
        printf("O numero %d e IMPAR.\n", num);
    }

    return 0;
}

int ehPar(int n) {
    return (n % 2 == 0) ? 1 : 0;
}
