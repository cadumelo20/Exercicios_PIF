#include <stdio.h>

int somaDigitos(int n);

int main() {
    int num;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Por favor, digite um numero positivo.\n");
    } else {
        printf("Soma dos digitos de %d = %d\n", num, somaDigitos(num));
    }

    return 0;
}

int somaDigitos(int n) {
    // Caso base: quando n possui apenas um digito (ou chega a 0)
    if (n < 10) {
        return n;
    }
    // Passo recursivo: soma o ultimo digito (n % 10) com a soma dos restantes (n / 10)
    return (n % 10) + somaDigitos(n / 10);
}
