#include <stdio.h>

/*
 * Documentacao da compilacao condicional:
 * - Com #define DEBUG (ou compilando com gcc -DDEBUG questao24.c):
 *   o bloco #ifdef DEBUG e incluido pelo pre-processador, imprimindo o valor
 *   parcial da soma em cada iteracao do laco.
 * - Sem #define DEBUG (comentado abaixo e sem -DDEBUG):
 *   o pre-processador remove completamente o printf de depuracao, exibindo
 *   apenas o resultado final na main().
 */
// #define DEBUG

int somaAteN(int n);

int main() {
    int n;

    printf("Digite um numero inteiro positivo N: ");
    scanf("%d", &n);

    printf("Soma de 1 ate %d = %d\n", n, somaAteN(n));

    return 0;
}

int somaAteN(int n) {
    int soma = 0;
    for (int i = 1; i <= n; i++) {
        soma += i;
#ifdef DEBUG
        printf("[DEBUG] Iteracao %d -> soma parcial = %d\n", i, soma);
#endif
    }
    return soma;
}
