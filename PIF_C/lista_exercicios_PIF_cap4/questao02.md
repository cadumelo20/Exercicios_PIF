# Questão 02

**a) Mensagem impressa e justificativa:**
O programa imprimirá: **Nenhuma das opções.** 
A "Opção A" não será exibida porque `y` não é maior que 10. A "Opção B" não será exibida porque `x` não é maior que 10 (isso porque o `else` pertence ao `if(y > 10)` interno, e não ao `if(x > 10)` externo).

**b) Regra oficial da associação de `else` sem chaves:**
Na linguagem C, a regra do *Dangling else* (else pendente) determina que uma cláusula `else` sempre se associa ao comando `if` **mais próximo e imediatamente anterior** que ainda não possua um `else` correspondente no mesmo nível de escopo, ignorando completamente a formatação ou indentação visual do código fonte.

**c) Código reescrito com chaves:**
Para garantir que a "Opção B" seja executada quando `x <= 10`, o `else` deve pertencer ao primeiro `if`. Devemos isolar o segundo `if` num bloco.

```c
int x = 15, y = 5;

if (x > 10) {
    if (y > 10) {
        printf("Opção A\n");
    }
} else {
    printf("Opção B\n");
}
```
