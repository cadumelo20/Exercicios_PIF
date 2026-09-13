#include <stdio.h>
#include <math.h>

int main() {
    float altura_degrau_cm, altura_total_m, altura_total_cm;
    int degraus;
    
    printf("Digite a altura de cada degrau (em cm): ");
    scanf("%f", &altura_degrau_cm);
    
    printf("Digite a altura total desejada (em metros): ");
    scanf("%f", &altura_total_m);
    
    altura_total_cm = altura_total_m * 100.0;
    
    // Usamos ceil() pois, se der quebrado, e necessario um degrau a mais para alcancar a altura
    degraus = ceil(altura_total_cm / altura_degrau_cm);
    
    printf("Numero minimo de degraus: %d\n", degraus);
    
    return 0;
}
