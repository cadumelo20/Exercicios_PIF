# Questão 02

**a) Erro na instrução printf final:**
O compilador emitirá um erro porque a variável `soma` possui **escopo de bloco**. Na Linguagem C, uma variável declarada dentro de um par de chaves `{}` (como o corpo do laço `for`) "nasce" e "morre" ali dentro. Quando o `for` termina, a variável `soma` é destruída da memória. Logo, a instrução `printf` que está fora dessas chaves não consegue enxergar a variável, resultando no erro "soma undeclared".

**b) Erro conceitual do cálculo dentro da iteração:**
Se o `printf` fosse movido para dentro, o código compilaria, mas o resultado lógico continuaria errado. A cada nova iteração do laço, a variável `int soma = 0;` seria re-declarada e inicializada em `0`. Portanto, ela nunca acumularia os valores anteriores; apenas armazenaria o quadrado do `i` atual.

**c) Código corrigido e conceitos de escopo:**
```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int soma = 0; // CORRECAO: Variavel declarada fora do laco para manter o escopo vivo
    
    for (i = 1; i <= 9; i++) { // CORRECAO: Condicao alterada de i<10 ou i<=9. e sintaxe corrigida de i+++ para i++
        soma += i * i;
    }
    
    printf("Soma final = %d\n", soma);
    system("PAUSE");
    return 0;
}
```
**Conceitos:**
- **Visibilidade:** Determina onde o nome da variável pode ser referenciado no código.
- **Escopo de bloco:** Variáveis declaradas dentro de `{}` só são visíveis e utilizáveis dentro dessas chaves e em blocos internos a elas.
- **Tempo de vida:** Refere-se ao período de tempo durante a execução do programa em que a variável ocupa um espaço real alocado na memória. A variável nasce na sua declaração e morre no final do bloco onde foi declarada.
