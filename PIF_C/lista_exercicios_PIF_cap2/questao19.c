#include <stdio.h>

int main() {
    int dias;
    float bruto, liquido;
    
    printf("Digite o numero de dias uteis trabalhados: ");
    scanf("%d", &dias);
    
    bruto = dias * 30.0;
    liquido = bruto - (bruto * 0.08); // Desconto de 8%
    
    printf("Quantia bruta devida: R$ %.2f\n", bruto);
    printf("Valor liquido a pagar: R$ %.2f\n", liquido);
    
    return 0;
}
