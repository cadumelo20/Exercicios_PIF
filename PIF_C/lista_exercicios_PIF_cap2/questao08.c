#include <stdio.h>

int main() {
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    
    int quadrado = num * num;
    float decima_parte = num / 10.0; // Divisao flutuante explicita usando 10.0
    
    printf("Quadrado: %d\n", quadrado);
    printf("Decima parte: %.2f\n", decima_parte);
    
    return 0;
}
