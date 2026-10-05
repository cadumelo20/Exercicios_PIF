# Questão 06

**a) Por que o compilador emitirá um erro de compilação na instrução printf final?**
O erro ocorrerá porque a variável `soma` foi declarada **dentro** do bloco de chaves do laço `for`. Em C, variáveis têm "escopo de bloco". Assim que o laço `for` termina, a variável `soma` é destruída e deixa de existir, tornando-se inacessível para o `printf` que está do lado de fora.

**b) Quais iterações do laço serão efetivamente executadas e qual o impacto dos comandos continue e break no fluxo?**
- Iterações `i = 1`, `2`, `3`, `4`: executam a soma normalmente.
- Iteração `i = 5`: atinge o `continue`, que pula o resto do laço e vai direto para a próxima iteração sem somar.
- Iterações `i = 6`, `7`: executam a soma normalmente.
- Iteração `i = 8`: atinge o `break`, que interrompe o laço `for` imediatamente, abortando as execuções de `8`, `9` e `10`.

**c) Reescreva o código corrigindo o escopo de 'soma' e apresente o resultado que será impresso no console.**
```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int soma = 0; // Escopo corrigido (movido para fora do laço)
    
    for (i = 1; i <= 10; i++) {
        if (i == 5) continue;
        if (i == 8) break;
        
        soma += i * i;
    }
    
    printf("Soma final = %d\n", soma);
    system("PAUSE");
    return 0;
}
```
**Resultado impresso:** `Soma final = 115`
*(Cálculo: 1² + 2² + 3² + 4² + 6² + 7² = 1 + 4 + 9 + 16 + 36 + 49 = 115)*
