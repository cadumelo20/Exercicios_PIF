# Questão 03

**a) Trecho A:**
O código avalia `a` de 36 até que seja 0, dividindo `a` por 2 a cada passo:
- Inicialmente `a = 36`. Imprime: **36**
- Divide por 2: `a = 18`. Imprime: **18**
- Divide por 2: `a = 9`. Imprime: **9**
- Divide por 2 (divisão inteira): `a = 4`. Imprime: **4**
- Divide por 2: `a = 2`. Imprime: **2**
- Divide por 2: `a = 1`. Imprime: **1**
- Divide por 2 (divisão inteira): `a = 0`. O laço encerra.
**Saída exata:** `36      18      9       4       2       1` (separados por tabulação).

**b) Trecho B:**
O trecho omite a inicialização e o incremento. A expressão condicional `(ch = getch()) != 'X'` executa três coisas simultaneamente:
1. Chama `getch()` aguardando que o usuário digite um caractere no teclado.
2. Atribui esse caractere à variável `ch` (os parênteses em `(ch = getch())` são **estritamente necessários** porque a atribuição `=` tem precedência menor que a comparação `!=`. Sem os parênteses, ele compararia o retorno de getch() com 'X' e guardaria o resultado booleano (0 ou 1) em `ch`).
3. Compara o caractere recebido com `'X'`. O laço continuará lendo teclas enquanto a letra 'X' maiúscula não for digitada.
A operação `ch + 1` no `printf` imprime o caractere imediatamente subsequente na tabela ASCII ao que foi digitado (Ex: se digitar 'A', imprime 'B').

**c) Trecho C:**
A execução do laço infinito pode ser interrompida de forma programática pelo uso do comando de desvio **`break;`** colocado condicionalmente no corpo do laço, ou através da função **`exit()`** ou de um **`return`** caso se deseje encerrar não apenas o laço, mas a execução do bloco principal do programa/função.
