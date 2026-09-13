#include <stdio.h>

int main() {
    float vel_kmh, vel_ms;
    
    printf("Digite a velocidade em km/h: ");
    scanf("%f", &vel_kmh);
    
    vel_ms = vel_kmh / 3.6;
    
    printf("Velocidade equivalente em m/s: %.2f\n", vel_ms);
    
    return 0;
}
