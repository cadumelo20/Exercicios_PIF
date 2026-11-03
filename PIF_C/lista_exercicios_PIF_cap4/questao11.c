#include <stdio.h>

int main() {
    int n1, n2, n3;
    int temp; // Variavel auxiliar para as trocas

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &n2);
    printf("Digite o terceiro numero inteiro: ");
    scanf("%d", &n3);

    // Ordenacao "Bubble" simplificada com if
    if (n1 > n2) {
        temp = n1;
        n1 = n2;
        n2 = temp;
    }
    
    if (n1 > n3) {
        temp = n1;
        n1 = n3;
        n3 = temp;
    }
    
    if (n2 > n3) {
        temp = n2;
        n2 = n3;
        n3 = temp;
    }

    printf("\nOrdem crescente: %d, %d, %d\n", n1, n2, n3);

    return 0;
}
