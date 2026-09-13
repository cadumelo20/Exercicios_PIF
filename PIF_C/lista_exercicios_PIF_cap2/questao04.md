# Questão 04

Inicialização: `int a = 1, b = 2, c = 3, d = 4;`

**Instrução 1:** `a += b + c;`
- Passos: O operador `+=` tem menor precedência que a adição `+`. Logo, soma-se primeiro `b + c` (2 + 3 = 5). Depois soma-se ao valor de `a` (1 + 5 = 6).
- **Valor final de a:** 6 (os demais não mudam aqui).

**Instrução 2:** `b *= c = d + 2;`
- Passos: A atribuição ocorre da direita para a esquerda. `d + 2` é avaliado (4 + 2 = 6). Esse valor é atribuído a `c` (agora `c = 6`). Em seguida, a atribuição é propagada para `b *= 6`, ou seja, `b = 2 * 6 = 12`.
- **Valores finais de e (assumindo b) e c:** `b = 12`, `c = 6`.

**Instrução 3:** `d /= c -= b -= a;`
*(Nota: dependendo da qualidade do PDF, o operador pode ter sido `d -=`, mas resolveremos como `/=` conforme a transcrição)*.
- Passos: Avaliamos da direita para a esquerda:
  1) `b -= a`  => `b = 12 - 6 = 6`
  2) `c -= b`  => `c = 6 - 6 = 0`
  3) `d /= c`  => `d = 4 / 0`
- **Valores finais:** Isso causaria um erro de execução (*Runtime Error*) devido a **divisão por zero**, interrompendo o programa.
- *(Atenção: Se a intenção original fosse `d -= c -= b -= a`, teríamos `d = 4 - 0 = 4`.)*

**Instrução 4:** `a += b += c += 7;`
- Considerando os valores se o programa tivesse continuado usando `c=0`, `b=6`, `a=6`:
- `c += 7` => `c = 0 + 7 = 7`
- `b += 7` => `b = 6 + 7 = 13`
- `a += 13` => `a = 6 + 13 = 19`
- **Valores finais:** `a = 19`, `b = 13`, `c = 7`.

**Instrução 5:** `d %= a + a + a;`
- Considerando `d = 4` (hipótese se fosse subtração na instrução 3):
- A soma `a + a + a` tem prioridade sobre o operador módulo `%=`.
- `19 + 19 + 19 = 57`.
- `d %= 57` => `d = 4 % 57 = 4`.
- **Valor final:** `d = 4`.
