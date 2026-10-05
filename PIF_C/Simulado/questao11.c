#include <stdio.h>

int main() {
    int dias;
    float salario_bruto, gratificacao, imposto, salario_liquido;

    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &dias);

    salario_bruto = dias * 45.0;
    gratificacao = salario_bruto * 0.05;
    imposto = salario_bruto * 0.08;
    salario_liquido = salario_bruto + gratificacao - imposto;

    printf("\n--- Holerite Detalhado ---\n");
    printf("Salario Bruto: R$ %.2f\n", salario_bruto);
    printf("Gratificacao (5%%): R$ +%.2f\n", gratificacao);
    printf("Imposto Retido (8%%): R$ -%.2f\n", imposto);
    printf("Salario Liquido a Receber: R$ %.2f\n", salario_liquido);

    return 0;
}
