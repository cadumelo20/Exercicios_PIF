#include <stdio.h>

int main() {
    char letra_maiuscula, letra_minuscula;
    
    printf("Digite uma letra maiuscula: ");
    scanf(" %c", &letra_maiuscula);
    
    // Adiciona o desvio aritmetico de 32 posicoes correspondentes da Tabela ASCII
    // para transformar letras maíusculas puras em minusculas.
    letra_minuscula = letra_maiuscula + 32;
    
    printf("Letra em caixa baixa: %c\n", letra_minuscula);
    
    return 0;
}
