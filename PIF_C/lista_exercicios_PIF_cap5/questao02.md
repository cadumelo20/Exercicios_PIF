# Questão 02

**a) Quantidade de valores retornados por `return` e o problema em `calcular()`:**
Em C, uma função pode devolver **no máximo um único valor** diretamente por meio do comando `return`.
Na função `calcular()`, o programador tentou retornar dois valores simultaneamente escrevendo `return soma, media;`. Essa abordagem não cumpre o objetivo porque a vírgula, nesse contexto, atua como o **operador vírgula** da linguagem C: ela avalia a primeira expressão (`soma`), descarta esse resultado e devolve apenas o valor da última expressão (`media`).

**b) Efeito do `return;` em `void imprime_mensagem()` e obrigatoriedade:**
O comando `return;` dentro de uma função `void` encerra **imediatamente** a execução da função e devolve o controle ao ponto onde ela foi chamada (neste caso, quando `erro < 0`, imprime `"Erro invalido"` e evita que `"Codigo processado"` seja exibido).
Ele **não é obrigatório** no final de uma função `void`, pois ao atingir a chave de fechamento `}` a função retorna automaticamente para quem a chamou.

**c) Funções separadas e explicação:**
```c
int calcularSoma(int a, int b, int c) {
    return a + b + c;
}

float calcularMedia(int a, int b, int c) {
    return (a + b + c) / 3.0f;
}
```
Como o comando `return` em C só permite devolver um único valor escalar (ou uma única estrutura) por chamada, quando não utilizamos recursos mais avançados como ponteiros ou `struct`, precisamos dividir a lógica em duas funções independentes — cada uma responsável por calcular e retornar um único resultado.
