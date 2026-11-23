#include <stdio.h>

#define SQR(x) ((x) * (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

int main() {
    int a, b;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);

    printf("Quadrado de %d: %d\n", a, SQR(a));
    printf("Quadrado de %d: %d\n", b, SQR(b));
    printf("Maior valor: %d\n", MAX(a, b));
    printf("Menor valor: %d\n", MIN(a, b));

    return 0;
}
