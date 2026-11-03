# Questão 03

**a) Funcionamento e valor armazenado:**
A linha `situacao = (media >= 7.0) ? 'A' : 'R';` testa a condição antes do ponto de interrogação `(media >= 7.0)`. 
- Se for **verdadeira**, retorna a primeira expressão (caractere `'A'`). 
- Se for **falsa**, retorna a segunda expressão (caractere `'R'`).
Como no caso proposto a `media = 6.8`, a condição é falsa. Portanto, a variável `situacao` armazenará o valor `'R'`.

**b) Código reescrito com `if-else` tradicional:**
```c
media = (nota1 + nota2) / 2.0;

if (media >= 7.0) {
    situacao = 'A';
} else {
    situacao = 'R';
}
```

**c) Limitações do operador ternário:**
O operador ternário é uma **expressão** e não um comando (statement). Ele deve obrigatoriamente retornar um valor de um tipo definido. Devido a isso, não pode substituir toda e qualquer estrutura `if-else`. Ele **não aceita a execução de blocos de múltiplos comandos** entre chaves `{}`. Não serve para controlar fluxo puro (como blocos que chamam várias funções vazias), sendo restrito a operações curtas e condicionais em tempo de atribuição, retorno ou cálculos diretos.
