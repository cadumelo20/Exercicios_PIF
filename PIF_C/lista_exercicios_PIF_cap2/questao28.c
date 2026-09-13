#include <stdio.h>

int main() {
    float horas_normais, horas_extras;
    float bruto, imposto, liquido;
    
    printf("Digite as horas normais trabalhadas no ano: ");
    scanf("%f", &horas_normais);
    printf("Digite as horas extras trabalhadas no ano: ");
    scanf("%f", &horas_extras);
    
    bruto = (horas_normais * 10.0) + (horas_extras * 15.0);
    
    // Simulando tomada de decisao: se bruto for maior que 12k cobra imposto (no delta excedente), senao zero
    imposto = (bruto > 12000.0) ? (bruto - 12000.0) * 0.10 : 0.0;
    liquido = bruto - imposto;
    
    printf("Salario anual bruto: R$ %.2f\n", bruto);
    printf("Imposto retido na fonte: R$ %.2f\n", imposto);
    printf("Salario liquido: R$ %.2f\n", liquido);
    
    return 0;
}
