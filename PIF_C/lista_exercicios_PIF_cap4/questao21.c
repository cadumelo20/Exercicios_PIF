#include <stdio.h>

int main() {
    int cargo;
    float salario, aumento, novo_salario;

    printf("--- Reajuste Salarial ---\n");
    printf("1 - Tecnico\n");
    printf("2 - Gerente\n");
    printf("3 - Demais Cargos\n");
    printf("Informe o codigo do cargo atual: ");
    scanf("%d", &cargo);
    
    printf("Informe o salario atual base: R$ ");
    scanf("%f", &salario);

    switch (cargo) {
        case 1: // Tecnico
            if (salario <= 3000.0) {
                aumento = salario * 0.15;
            } else {
                aumento = salario * 0.10;
            }
            break;
            
        case 2: // Gerente
            if (salario <= 5000.0) {
                aumento = salario * 0.10;
            } else {
                aumento = salario * 0.05;
            }
            break;
            
        case 3: // Demais
            aumento = salario * 0.08;
            break;
            
        default:
            printf("\nCodigo de cargo invalido. Encerrando programa.\n");
            return 0; // Encerra a execucao
    }

    novo_salario = salario + aumento;

    printf("\nResumo do calculo de folha:\n");
    printf("Aumento concedido: R$ %.2f\n", aumento);
    printf("Salario reajustado em vigencia: R$ %.2f\n", novo_salario);

    return 0;
}
