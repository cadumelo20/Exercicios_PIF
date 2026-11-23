# Questão 04

**a) Caso base, passo recursivo e remoção do caso base:**
- **Caso base:** `n == 0` (retorna `(long)1`). É a condição de parada que encerra as chamadas recursivas.
- **Passo recursivo:** `(long)n * fatorial(n - 1)`. Reduz o problema chamando a própria função com um valor menor (`n - 1`).
- **Se o caso base fosse removido:** A função entraria em **recursão infinita** (decrementando `n` indefinidamente: `4, 3, 2, 1, 0, -1, -2, ...`), nunca encontrando um critério de parada até esgotar a memória da pilha de execução (*Stack Overflow*).

**b) Rastreamento completo de `fatorial(4)`:**

*Fase de empilhamento (chamadas):*
1. `fatorial(4)` -> precisa de `4 * fatorial(3)`
2. `fatorial(3)` -> precisa de `3 * fatorial(2)`
3. `fatorial(2)` -> precisa de `2 * fatorial(1)`
4. `fatorial(1)` -> precisa de `1 * fatorial(0)`
5. `fatorial(0)` -> atinge o caso base e devolve **`1`**

*Fase de desempilhamento (retornos):*
1. `fatorial(0)` retorna `1`
2. `fatorial(1)` calcula `1 * 1` e retorna `1`
3. `fatorial(2)` calcula `2 * 1` e retorna `2`
4. `fatorial(3)` calcula `3 * 2` e retorna `6`
5. `fatorial(4)` calcula `4 * 6` e retorna **`24`**

**c) Pilha de execução na memória e falha sem caso base:**
A cada chamada recursiva, o sistema cria um novo **registro de ativação** (*stack frame*) na pilha de execução (*call stack*), armazenando os parâmetros, variáveis locais e o endereço de retorno daquela chamada específica. Como a pilha possui tamanho limitado na memória RAM, uma recursão sem caso base empilha registros continuamente sem nunca desempilhar, ultrapassando o limite alocado e causando um erro fatal de **estouro de pilha (*Stack Overflow*)**, que derruba o programa.
