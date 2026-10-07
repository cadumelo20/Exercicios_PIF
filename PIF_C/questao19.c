#include <stdio.h>

int main() {
    int N;
    long long int t1 = 1, t2 = 1, proximo_termo;

    printf("Digite o numero do termo N da sequencia de Fibonacci: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Termo invalido.\n");
        return 0;
    }

    printf("Sequencia de Fibonacci ate o %do termo:\n", N);

    if (N == 1) {
        printf("%lld\n", t1);
    } else if (N == 2) {
        printf("%lld, %lld\n", t1, t2);
    } else {
        printf("%lld, %lld", t1, t2);
        
        for (int i = 3; i <= N; i++) {
            proximo_termo = t1 + t2;
            printf(", %lld", proximo_termo);
            
            // Avanca os calculos de Fibonacci trocando os valores anteriores
            t1 = t2;
            t2 = proximo_termo;
        }
        printf("\n");
    }

    return 0;
}
