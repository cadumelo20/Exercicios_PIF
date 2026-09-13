#include <stdio.h>

int main() {
    char c;
    
    printf("Digite um caractere: ");
    scanf(" %c", &c);
    
    /* 
     * O numero exibido representa a conversao direta entre o espaco alocado
     * de 1 byte de dados (char) e sua respectiva codificacao numerica decimal  
     * estabelecida globalmente na padronizacao pela tabela ASCII.
     */
    printf("O codigo ASCII do caractere '%c' e: %d\n", c, c);
    
    return 0;
}
