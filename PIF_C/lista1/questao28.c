#include <stdio.h>

int main() {
    int v1, v2, v3;
    double media;

    printf("Digite tres numeros inteiros separados por espaco: ");
    scanf("%d %d %d", &v1, &v2, &v3);

    media = (v1 + v2 + v3) / 3.0;

    printf("A media aritmetica e: %.2f\n", media);

    return 0;
}