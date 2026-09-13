#include <stdio.h>

#define PI 3.141593

int main() {
    float raio, area, circunferencia;
    
    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);
    
    area = PI * raio * raio;
    circunferencia = 2.0 * PI * raio;
    
    printf("Area do circulo: %.4f\n", area);
    printf("Circunferencia do circulo: %.4f\n", circunferencia);
    
    return 0;
}
