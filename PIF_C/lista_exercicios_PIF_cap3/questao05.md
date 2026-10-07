# Questão 05

**a) Quantidade de iterações executadas:**
As variáveis de controle são `i` (inicia em 0 e sobe) e `j` (inicia em 10 e desce). A condição de parada é `i < j`.
- Iteração 1: `i=0, j=10` (0 < 10 é Verdadeiro) -> Executa bloco -> `i++, j--`
- Iteração 2: `i=1, j=9` (1 < 9 é Verdadeiro) -> Executa bloco -> `i++, j--`
- Iteração 3: `i=2, j=8` (2 < 8 é Verdadeiro) -> Executa bloco -> `i++, j--`
- Iteração 4: `i=3, j=7` (3 < 7 é Verdadeiro) -> Executa bloco -> `i++, j--`
- Iteração 5: `i=4, j=6` (4 < 6 é Verdadeiro) -> Executa bloco -> `i++, j--`
- Fim: `i=5, j=5` (5 < 5 é Falso) -> Laço encerra.
**Total:** 5 iterações.

**b) Saída exata do printf:**
```text
i = 0, j = 10, soma = 10
i = 1, j = 9, soma = 10
i = 2, j = 8, soma = 10
i = 3, j = 7, soma = 10
i = 4, j = 6, soma = 10
```

**c) Reescrevendo utilizando a estrutura while:**
```c
int i = 0, j = 10;
while (i < j) {
    printf("i = %d, j = %d, soma = %d\n", i, j, i + j);
    i++;
    j--;
}
```
