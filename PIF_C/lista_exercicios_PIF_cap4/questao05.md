# Questão 05

**a) Saída exata e avaliação do incremento:**
```text
a = 0, b = 5, c = 8
```
A variável `b` continuou valendo `5`. O incremento `++b` foi **ignorado**. O bloco correspondente ao `else` foi executado, subtraindo 2 de `c` (`10 - 2 = 8`).

**b) Avaliação de curto-circuito:**
- **Operador E (&&):** Na operação lógica `cond1 && cond2`, o interpretador C avalia da esquerda para a direita. Se `cond1` for **FALSA** (0), a linguagem C sabe matematicamente que toda a expressão E será irremediavelmente falsa. Portanto, num processo de "curto-circuito" de performance, ela aborta e **nunca** executa ou avalia a `cond2` (se houver incrementos ou funções em cond2, nada acontecerá).
- **Operador OU (||):** Na operação `cond1 || cond2`, se `cond1` for **VERDADEIRA** (diferente de 0), o C aborta e ignora a `cond2`, pois o fato de apenas uma ser verdade já basta para que toda a expressão OR resulte verdadeira.

**c) Novo valor para `b` e `c` com OU (||):**
Na nova condição `if (a == 0 || ++b > 5)`:
Como `a = 0` (Logo, `a == 0` é verdadeiro), o curto-circuito do OR (||) será ativado. Ele considerará tudo verdadeiro e pulará a avaliação do lado direito da expressão, ignorando o `++b`.
O fluxo entrará no primeiro bloco (`c += 10`).
**Valores finais:** `b` continuará valendo `5`. `c` passará a valer `20`.
