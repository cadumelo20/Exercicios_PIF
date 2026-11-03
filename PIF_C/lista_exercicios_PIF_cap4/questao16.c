#include <stdio.h>

int main() {
    float km, litros, consumo;

    printf("Distancia percorrida (em Km): ");
    scanf("%f", &km);
    printf("Litros de gasolina consumidos (em L): ");
    scanf("%f", &litros);

    if (litros <= 0) {
        printf("Quantidade de combustivel invalida.\n");
        return 0;
    }

    consumo = km / litros;
    printf("\nConsumo de combustivel: %.2f Km/l\n", consumo);

    if (consumo < 8.0) {
        printf("Venda o carro!\n");
    } else if (consumo >= 8.0 && consumo <= 14.0) {
        printf("Economico!\n");
    } else { // consumo > 14.0
        printf("Super economico!\n");
    }

    return 0;
}
