#include <stdio.h>

int main() {
    int opcao_ura;

    printf("--- Unidade de Resposta Audivel (URA) Bancaria ---\n");
    printf("1 - Consultar Saldo\n");
    printf("2 - Efetuar Extrato\n");
    printf("3 - Fazer Transferencia\n");
    printf("4 - Falar com Atendente Humano\n");
    printf("Digite uma opcao no teclado: ");
    scanf("%d", &opcao_ura);

    printf("\n");
    
    switch (opcao_ura) {
        case 1:
            printf("[Sistema] O seu saldo atual em conta corrente e de R$ 5.430,22.\n");
            break;
        case 2:
            printf("[Sistema] O extrato detalhado das ultimas semanas foi encaminhado para o seu e-mail cadastrado.\n");
            break;
        case 3:
            printf("[Sistema] Redirecionando sessao segura para o ambiente de PIX e transferencias.\n");
            break;
        case 4:
            printf("[Sistema] Por favor aguarde na linha. Em instantes um de nossos representantes comerciais atendera a ligacao.\n");
            break;
        default:
            printf("[Sistema] Atencao: A opcao %d digitada no seu teclado e invalida. A ligacao sera finalizada.\n", opcao_ura);
            break;
    }

    return 0;
}
