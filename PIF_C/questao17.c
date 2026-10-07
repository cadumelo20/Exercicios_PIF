#include <stdio.h>

int main() {
    float nota, maior = -1.0, menor = 11.0, soma = 0.0;
    int qtd_alunos = 0;

    printf("Digite as notas dos alunos. Informe -1.0 para encerrar.\n");

    while (1) {
        printf("Nota: ");
        scanf("%f", &nota);

        if (nota == -1.0) {
            break;
        }

        // Validaçao extra
        if (nota < 0.0 || nota > 10.0) {
            printf("Nota invalida. Ignore.\n");
            continue;
        }

        qtd_alunos++;
        soma += nota;

        if (nota > maior) {
            maior = nota;
        }
        
        if (nota < menor) {
            menor = nota;
        }
    }

    if (qtd_alunos > 0) {
        float media = soma / qtd_alunos;
        printf("\n--- Estatisticas de Turma ---\n");
        printf("Total de alunos avaliados: %d\n", qtd_alunos);
        printf("Maior nota da turma: %.2f\n", maior);
        printf("Menor nota da turma: %.2f\n", menor);
        printf("Media geral da turma: %.2f\n", media);
    } else {
        printf("\nNenhum dado valido fornecido.\n");
    }

    return 0;
}
