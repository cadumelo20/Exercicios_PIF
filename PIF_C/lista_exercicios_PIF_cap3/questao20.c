#include <stdio.h>

int main() {
    printf("Tabela de Caracteres ASCII (Imprimiveis)\n");
    printf("----------------------------------------\n");
    printf("Decimal\t\tHexadecimal\tCaractere\n");
    printf("----------------------------------------\n");

    for (int code = 32; code <= 126; code++) {
        // %d imprime decimal, %X imprime Hexadecimal caixa alta, %c imprime o caractere grafico
        printf("%d\t\t0x%X\t\t'%c'\n", code, code, code);
    }
    
    return 0;
}
