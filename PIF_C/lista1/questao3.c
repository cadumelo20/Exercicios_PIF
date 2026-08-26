/* 
 * Programa: Soma Simples
 * Descricao: Este programa soma dois numeros inteiros 
 *            pre-definidos e exibe o resultado no console.
 */

#include <stdio.h> /* Para printf() */

int main() {
    // Declaracao e atribuicao dos valores a serem somados
    int numero1 = 15;
    int numero2 = 25;
    
    // Realiza a operacao de soma e guarda o resultado
    int soma = numero1 + numero2;

    // Exibe o resultado final na tela
    printf("A soma de %d + %d e igual a: %d\n", numero1, numero2, soma);

    return 0; // Finaliza o programa com sucesso
}