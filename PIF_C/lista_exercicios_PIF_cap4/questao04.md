# Questão 04

**a) Saída exata do terminal:**
```text
Prata
Ouro
Sem Medalha
```
**Por que ocorreu mais de uma impressão:** O código inicializa `codigo = 2`. O comando `switch` redireciona o fluxo para o `case 2`. Ele imprime "Prata". No entanto, como o programador não inseriu o comando `break;` no final do bloco do `case 2`, o fluxo do programa não saiu da estrutura. Ele "vazou" e continuou executando as instruções sequenciais abaixo dele, imprimindo também o `case 3` e o `default`.

**b) O papel da instrução `break` e o efeito Fall-Through:**
O papel do `break` é interromper a execução do bloco do `switch` e enviar o controle do programa para fora da estrutura imediatamente, evitando que os casos (cases) abaixo dele sejam validados ou executados. O nome do fenômeno causado pela ausência do `break` é **Fall-Through** (Vazamento / Efeito cascata).

**c) Tipos de dados permitidos na expressão do switch:**
A expressão dentro do `switch (expressão)` e os valores dos rótulos `case` suportam **exclusivamente valores e variáveis de tipo inteiro** ou promovíveis a inteiro, como: `int`, `char`, `short`, `long` ou `enum`.
Não é permitido utilizar tipos de ponto flutuante (`float`, `double`), nem arrays (strings como "texto"). Essa restrição ocorre porque o switch necessita comparar igualdade exata e estrita em nível binário para fazer o salto estruturado, o que é suscetível a erros de precisão e arredondamento se feito com casas decimais.
