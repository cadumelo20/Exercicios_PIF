#include <stdio.h>

int main() {
    int horas;
    float ticket_final = 0.0;

    printf("Informe as horas totais e inteiras que o carro permaneceu estacionado: ");
    scanf("%d", &horas);

    if (horas <= 0) {
        printf("Tempo invalido (Livre de tarifa).\n");
        return 0;
    }

    if (horas <= 2) {
        ticket_final = horas * 2.00;
    } 
    else if (horas <= 4) {
        // Cobra taxa de 2 reais nas 2 primeiras (4.00), depois 2.50 pra as excedentes desse bloco
        ticket_final = (2 * 2.00) + ((horas - 2) * 2.50);
    } 
    else {
        // Cobra faixa 1 completa (4.0), faixa 2 completa (5.0), e 3 reais pra hora q passar de 4hs
        ticket_final = (2 * 2.00) + (2 * 2.50) + ((horas - 4) * 3.00);
    }

    printf("\nTempo contabilizado no patio: %d hora(s)\n", horas);
    printf("Valor cobrado na catraca: R$ %.2f\n", ticket_final);

    return 0;
}
