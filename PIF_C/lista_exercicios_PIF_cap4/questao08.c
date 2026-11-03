#include <stdio.h>

int main() {
    int ano;

    printf("Digite um ano para verificar se e bissexto: ");
    scanf("%d", &ano);

    if (ano < 0) {
        printf("Erro. Digite um ano positivo.\n");
    } else if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
        printf("O ano %d EH BISSEXTO.\n", ano);
    } else {
        printf("O ano %d NAO EH BISSEXTO.\n", ano);
    }

    return 0;
}
