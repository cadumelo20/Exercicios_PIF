#include <stdio.h>

int main() {
    printf("--- Versao com for ---\n");
    for (int i = 0; i <= 100; i++) {
        printf("%d ", i);
    }
    printf("\n\n");

    printf("--- Versao com while ---\n");
    int j = 0;
    while (j <= 100) {
        printf("%d ", j);
        j++;
    }
    printf("\n\n");

    printf("--- Versao com do-while ---\n");
    int k = 0;
    do {
        printf("%d ", k);
        k++;
    } while (k <= 100);
    printf("\n\n");

    /*
     * Comentario - Qual e a melhor?
     * A estrutura FOR eh a mais adequada para este caso. 
     * Por se tratar de uma contagem simples e progressiva, sabemos exatamente 
     * os valores de inicio, de fim e a razao de incremento (1). O FOR agrupa 
     * essas informacoes na mesma linha (cabecalho), tornando o codigo mais enxuto e legivel.
     */
    
    return 0;
}
