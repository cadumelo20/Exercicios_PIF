# Questão 06

**a) Valor final impresso:**
O valor final de `x` impresso será **6**.

**b) Passo a passo (Teste `x++ < 5`):**
O operador pós-fixado `++` avalia a variável *antes* de incrementá-la na memória.
- Teste 1: x é 0. Compara `0 < 5` (Verdadeiro). Executa corpo vazio. x vira 1.
- Teste 2: x é 1. Compara `1 < 5` (Verdadeiro). Executa corpo vazio. x vira 2.
- Teste 3: x é 2. Compara `2 < 5` (Verdadeiro). Executa corpo vazio. x vira 3.
- Teste 4: x é 3. Compara `3 < 5` (Verdadeiro). Executa corpo vazio. x vira 4.
- Teste 5: x é 4. Compara `4 < 5` (Verdadeiro). Executa corpo vazio. x vira 5.
- Teste 6: x é 5. Compara `5 < 5` (Falso). O laço encerra. O incremento ainda ocorre: **x vira 6**.

**c) Código reescrito de forma explícita e clara:**
```c
int x = 0;
while (x < 5) {
    x++;
}
x++; // O incremento extra que ocorre quando a condicao e avaliada como falsa
printf("Valor final de x = %d\n", x);
```
