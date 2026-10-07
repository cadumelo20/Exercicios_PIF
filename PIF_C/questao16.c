#include <stdio.h>

int main() {
    int senha_correta = 2026;
    int tentativa_senha;
    int tentativas_feitas = 0;
    int max_tentativas = 3;
    int acertou = 0;

    while (tentativas_feitas < max_tentativas) {
        printf("Digite a senha numerica: ");
        scanf("%d", &tentativa_senha);
        
        tentativas_feitas++;

        if (tentativa_senha == senha_correta) {
            acertou = 1;
            break;
        } else {
            printf("Senha incorreta. Restam %d tentativa(s).\n", max_tentativas - tentativas_feitas);
        }
    }

    if (acertou) {
        printf("\nAcesso Concedido! Utilizou %d tentativa(s).\n", tentativas_feitas);
    } else {
        printf("\nConta Bloqueada por Seguranca!\n");
    }

    return 0;
}
