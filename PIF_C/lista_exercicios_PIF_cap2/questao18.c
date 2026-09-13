#include <stdio.h>

#define PI 3.141593

int main() {
    float raio, area, volume;
    
    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);
    
    area = 4.0 * PI * (raio * raio);
    volume = (4.0 / 3.0) * PI * (raio * raio * raio); // 4.0/3.0 garante uma divisao real e sem truncamento
    
    printf("Area de superficie: %.4f\n", area);
    printf("Volume da esfera: %.4f\n", volume);
    
    return 0;
}
