# Questão 06

**a) Diferença de fluxo e valores impressos:**
- **Prefixado (`++n`):** O valor da variável é incrementado primeiro, e então seu novo valor é fornecido para a expressão em que está inserida. Portanto, no Trecho A, `n` vira 6 e depois `x` recebe esse valor. A tela exibirá: `Trecho A: n=6, x=6`.
- **Pós-fixado (`m++`):** O valor da variável atual (antes do incremento) é fornecido para a expressão de atribuição, e somente em um momento seguinte (no próximo sequence point) a variável é incrementada. Portanto, no Trecho B, `y` recebe o valor atual de `m` (5), e logo depois `m` vira 6. A tela exibirá: `Trecho B: m=6, y=5`.

**b) Problema de Comportamento Indefinido (Undefined Behavior):**
A instrução tentou usar `n++` e, simultaneamente na mesma chamada à função `printf`, usar e modificar a variável `n`. 
Na Linguagem C, a ordem em que os argumentos fornecidos a uma função são avaliados e inseridos na pilha antes da sua execução não é definida pelo padrão oficial. Diferentes compiladores podem avaliar os argumentos da direita para a esquerda ou da esquerda para a direita. Como ocorrem leituras e modificações da mesma variável (sem encontrar um *sequence point* definido entre elas), o resultado dessa linha dependerá de como cada compilador interpreta o código (sendo um comportamento imprevisível).
