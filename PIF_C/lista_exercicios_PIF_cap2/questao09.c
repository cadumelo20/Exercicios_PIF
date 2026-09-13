#include <stdio.h>

int main() {
    int a, b;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);
    
    printf("Soma: %d\n", a + b);
    printf("Subtracao: %d\n", a - b);
    printf("Multiplicacao: %d\n", a * b);
    
    /* 
     * Comentario: 
     * Para evitar matematicamente a divisao por zero sem usar as condicoes IF/ELSE 
     * (considerando que podem não ter sido vistas no Capitulo 2), poderiamos usar 
     * um operador ternario para fazer uma checagem (b != 0 ? ...) antes de efetuar o calculo
     * ou assumir que os dados fornecidos pelo usuario sao estritamente corretos neste nivel.
     */
    if(b != 0) {
        printf("Divisao: %.2f\n", (float)a / b);
    } else {
        printf("Erro matematico: Divisao por zero.\n");
    }
    
    return 0;
}
