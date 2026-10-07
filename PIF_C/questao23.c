#include <stdio.h>

int main() {
    int L;

    printf("Digite a dimensao do lado do quadrado (entre 3 e 20): ");
    scanf("%d", &L);

    if (L < 3 || L > 20) {
        printf("Dimensao invalida.\n");
        return 0;
    }

    for (int i = 1; i <= L; i++) {
        for (int j = 1; j <= L; j++) {
            // Desenha 'X' se for as bordas superior (i==1), inferior (i==L), 
            // esquerda (j==1) ou direita (j==L). Caso contrario, espaco vazio.
            if (i == 1 || i == L || j == 1 || j == L) {
                printf("X");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
