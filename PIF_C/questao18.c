#include <stdio.h>

int main() {
    long long int numero, original;
    long long int numero_invertido = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%lld", &numero);
    
    original = numero;

    while (numero > 0) {
        int ultimo_digito = numero % 10;
        numero_invertido = (numero_invertido * 10) + ultimo_digito;
        numero /= 10;
    }

    printf("Numero original: %lld\n", original);
    printf("Numero invertido: %lld\n", numero_invertido);

    return 0;
}
