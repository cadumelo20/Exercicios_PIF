#include <stdio.h>

int main() {
    int idade, tempo_servico;

    printf("Calculo de Aposentadoria\n");
    printf("Digite a idade do trabalhador: ");
    scanf("%d", &idade);
    printf("Digite o tempo de servico (em anos): ");
    scanf("%d", &tempo_servico);

    if (idade >= 65 || tempo_servico >= 30 || (idade >= 60 && tempo_servico >= 25)) {
        printf("\nResultado: O trabalhador JA PODE requerer sua aposentadoria.\n");
    } else {
        printf("\nResultado: O trabalhador AINDA NAO PODE se aposentar pelas regras vigentes.\n");
    }

    return 0;
}
