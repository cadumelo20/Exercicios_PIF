#include <stdio.h>

int main() {
    int senha_correta = 2026;
    int tentativa;
    int limite = 3;
    int i = 0;
    int acesso_concedido = 0;

    while (i < limite) {
        printf("Digite a senha numerica: ");
        scanf("%d", &tentativa);

        if (tentativa == senha_correta) {
            acesso_concedido = 1;
            break;
        } else {
            printf("Senha incorreta. Tentativas restantes: %d\n", limite - i - 1);
        }
        i++;
    }

    if (acesso_concedido) {
        printf("Acesso Concedido!\n");
    } else {
        printf("Conta Bloqueada por Seguranca!\n");
    }

    return 0;
}
