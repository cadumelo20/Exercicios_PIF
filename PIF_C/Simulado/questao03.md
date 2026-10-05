# Questão 03

Inicialização:
`int a = 2, b = 4, c = 5, d = 10;`

**Instrução 1: `a += b + c;`**
- Avalia `b + c`: 4 + 5 = 9
- Atribui: `a = a + 9` -> `a = 2 + 9 = 11`
- **Valor final de a:** 11

**Instrução 2: `b *= c = d - 2;`**
- A atribuição é avaliada da direita para a esquerda.
- `c = d - 2` -> `c = 10 - 2 = 8`
- `b *= c` -> `b = 4 * 8 = 32`
- **Valores finais de b e c:** `b = 32`, `c = 8`

**Instrução 3: `a += b += c += 5;`**
- Direita para a esquerda:
- `c += 5` -> `c = 8 + 5 = 13`
- `b += c` -> `b = 32 + 13 = 45`
- `a += b` -> `a = 11 + 45 = 56`
- **Valores finais:** `a = 56`, `b = 45`, `c = 13`

**Instrução 4: `d %= a + 3;`**
- A adição tem precedência sobre a atribuição: `a + 3 = 56 + 3 = 59`
- `d = d % 59` -> `d = 10 % 59 = 10`
- **Valor final de d:** 10
