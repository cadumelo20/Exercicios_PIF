#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Semente dinamica usando o horario e data local para a verdadeira aleatoriedade
    srand(time(NULL));
    
    // O operador '%' garante limite (0 a 5). O '+ 1' ajusta para (1 a 6)
    int d1 = (rand() % 6) + 1;
    int d2 = (rand() % 6) + 1;
    int d3 = (rand() % 6) + 1;
    
    printf("Lancamentos dos 3 dados: %d | %d | %d\n", d1, d2, d3);
    
    return 0;
}
