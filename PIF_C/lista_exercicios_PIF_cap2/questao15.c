#include <stdio.h>

int main() {
    float n1, n2, n3, n4, media_simples, media_ponderada;
    
    printf("Digite as quatro notas escolares separadas por espaco: ");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    
    media_simples = (n1 + n2 + n3 + n4) / 4.0;
    
    // Provas 1 e 2 tem peso 1; Provas 3 e 4 tem peso 2. Total de pesos = 1+1+2+2 = 6.
    media_ponderada = (n1 * 1.0 + n2 * 1.0 + n3 * 2.0 + n4 * 2.0) / 6.0;
    
    printf("Media aritmetica simples: %.2f\n", media_simples);
    printf("Media ponderada: %.2f\n", media_ponderada);
    
    return 0;
}
