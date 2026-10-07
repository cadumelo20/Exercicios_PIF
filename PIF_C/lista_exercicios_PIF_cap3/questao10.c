#include <stdio.h>

int main() {
    int contador = 1;
    int multiplo;
    
    printf("Os 100 primeiros multiplos de 3:\n");

    while (contador <= 100) {
        multiplo = contador * 3;
        
        printf("%d\t", multiplo);
        
        // Quebra de linha a cada 10 colunas formatadas
        if (contador % 10 == 0) {
            printf("\n");
        }
        
        contador++;
    }

    return 0;
}
