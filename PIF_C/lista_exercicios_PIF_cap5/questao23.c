#include <stdio.h>

#define DOBRO(x) x*2

int dobro(int x);

int main() {
    printf("Com macro sem parenteses DOBRO(2+3): %d\n", DOBRO(2+3));
    printf("Com funcao dobro(2+3): %d\n", dobro(2+3));

    /*
     * Explicacao:
     * A macro DOBRO(2+3) sofre substituicao textual literal para 2+3*2.
     * Pela precedencia de operadores, 3*2 e avaliado primeiro (6), resultando em 2+6 = 8.
     * Ja na funcao dobro(2+3), o argumento 2+3 e calculado antes da chamada (5),
     * retornando 5 * 2 = 10.
     */

#undef DOBRO
#define DOBRO(x) ((x) * 2)

    printf("Com macro corrigida DOBRO(2+3): %d\n", DOBRO(2+3));

    return 0;
}

int dobro(int x) {
    return x * 2;
}
