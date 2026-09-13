#include <stdio.h>

int main() {
    float salario_base, salario_liquido;
    
    printf("Digite o salario-base do funcionario: R$ ");
    scanf("%f", &salario_base);
    
    /* Justificativa:
     * O calculo 'salario_base * 0.05' encontra o aumento bruto.
     * O calculo 'salario_base * 0.07' encontra a deducao.
     * A atribuicao os une seguindo a ordem regular matematica.
     */
    salario_liquido = salario_base + (salario_base * 0.05) - (salario_base * 0.07);
    
    printf("Salario liquido a receber: R$ %.2f\n", salario_liquido);
    
    return 0;
}
