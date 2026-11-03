#include <stdio.h>
#include <math.h>

int main() {
    char operacao;
    float op1, op2, resultado;

    printf("--- Calculadora ---\n");
    printf("+  Soma\n");
    printf("-  Subtracao\n");
    printf("*  Multiplicacao\n");
    printf("/  Divisao\n");
    printf("^  Potenciacao\n");
    printf("Escolha a operacao desejada: ");
    scanf(" %c", &operacao);

    printf("Digite o primeiro numero real: ");
    scanf("%f", &op1);
    printf("Digite o segundo numero real: ");
    scanf("%f", &op2);

    switch (operacao) {
        case '+':
            resultado = op1 + op2;
            printf("%.2f + %.2f = %.2f\n", op1, op2, resultado);
            break;
        case '-':
            resultado = op1 - op2;
            printf("%.2f - %.2f = %.2f\n", op1, op2, resultado);
            break;
        case '*':
            resultado = op1 * op2;
            printf("%.2f * %.2f = %.2f\n", op1, op2, resultado);
            break;
        case '/':
            if (op2 == 0.0) {
                printf("Erro Matematico: Impossivel dividir por zero!\n");
            } else {
                resultado = op1 / op2;
                printf("%.2f / %.2f = %.2f\n", op1, op2, resultado);
            }
            break;
        case '^':
            resultado = pow(op1, op2);
            printf("%.2f ^ %.2f = %.2f\n", op1, op2, resultado);
            break;
        default:
            printf("Operador invalido.\n");
    }

    return 0;
}
