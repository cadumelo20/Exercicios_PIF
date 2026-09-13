#include <stdio.h>

int main() {
    int num, antecessor, sucessor;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    
    // A copia do numero e necessaria para os operadores unarios agirem nas bases
    antecessor = num;
    antecessor--; // Justificativa: Modifica diretamente na memoria reduzindo 1 unidade (-1)
    
    sucessor = num;
    sucessor++;   // Justificativa: Modifica diretamente na memoria adicionando 1 unidade (+1)
    
    printf("Antecessor: %d\n", antecessor);
    printf("Sucessor: %d\n", sucessor);
    
    return 0;
}
