#include <stdio.h>

int main() {
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    
    // %d: decimal | %x: hexadecimal (caixa baixa) | %o: octal | %c: ASCII
    printf("Decimal: %d | Hexadecimal: %x | Octal: %o | ASCII: %c\n", num, num, num, num);
    
    return 0;
}
