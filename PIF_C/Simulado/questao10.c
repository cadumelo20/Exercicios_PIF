#include <stdio.h>

int main() {
    int tempo_total, horas, minutos, segundos;

    printf("Digite a quantidade de segundos: ");
    scanf("%d", &tempo_total);

    horas = tempo_total / 3600;
    minutos = (tempo_total % 3600) / 60;
    segundos = (tempo_total % 3600) % 60; // ou apenas tempo_total % 60

    printf("%d segundos equivalem a: %d horas, %d minutos e %d segundos.\n", 
            tempo_total, horas, minutos, segundos);

    return 0;
}
