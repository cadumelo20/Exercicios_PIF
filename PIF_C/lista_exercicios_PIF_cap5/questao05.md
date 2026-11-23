# Questão 05

**a) Saída de cada `printf` e explicação:**
- `printf("%d\n", SQR(2+3));` imprime **`25`**.
  *Expansão:* `((2+3)*(2+3))` -> `5 * 5` = `25`.
- `printf("%d\n", DOBRO(2+3));` imprime **`8`**.
  *Expansão:* `2+3*2` -> pela precedência da multiplicação sobre a adição, avalia `2 + 6` = `8`.

**Motivo da diferença:** Macros fazem substituição textual literal antes da compilação. Em `SQR(x)`, os parênteses de proteção em volta de cada ocorrência de `x` e da expressão inteira garantem que `2+3` seja avaliado primeiro. Em `DOBRO(x)`, a ausência de parênteses deixa o operador `*` se ligar apenas ao `3`.

**b) Ausência de ponto e vírgula no `#define` e convenção de maiúsculas:**
- `#define` é uma **diretiva de pré-processamento**, e não uma instrução da linguagem C. Se terminasse com `;`, o ponto e vírgula faria parte do texto substituído, causando erros de sintaxe quando a constante/macro fosse usada no meio de expressões (ex: `2 * 3.14; * r`).
- Usa-se **letras maiúsculas** por convenção para destacar visualmente constantes e macros no código, alertando o programador de que aquele identificador sofre substituição textual (e não se comporta exatamente como uma variável ou função comum).

**c) Erro em `#define PRN (n) printf("%d", n)` e macro vs. função:**
- **Erro:** Existe um **espaço em branco** entre `PRN` e `(n)`. Com esse espaço, o pré-processador entende que `PRN` é uma macro *sem argumentos* cujo corpo de substituição é `(n) printf("%d", n)`, o que quebra a compilação.
- **Forma correta:** `#define PRN(n) printf("%d", n)` (o parêntese de abertura deve ficar colado ao nome da macro).
- **Diferença entre macro e função:** Uma macro é expandida textualmente pelo pré-processador antes da compilação (não há verificação de tipos nem custo de chamada na pilha, mas pode causar efeitos colaterais se o argumento for avaliado múltiplas vezes, como `SQR(i++)`). Já uma função é compilada uma única vez, possui checagem estrita de tipos, escopo próprio e avalia cada argumento exatamente uma vez antes da chamada.
