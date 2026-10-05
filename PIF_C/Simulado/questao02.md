# Questão 02

Analisando o código, é possível identificar diversos erros sintáticos e estruturais. Abaixo estão os 3 erros principais (dentre vários):

1. **Inclusão de biblioteca com ponto e vírgula:**
   `#include <stdlib.h>;` 
   Diretivas de pré-processador (`#include`) não terminam com ponto e vírgula.
   
2. **Nome da função principal em maiúsculo:**
   `int Main()`
   Em C, a função principal deve ser declarada como `main` (tudo em minúsculo).

3. **String do `printf` sem aspas duplas e variável sem ponto e vírgula:**
   `int idade = 20` (falta o `;` no final da declaração).
   `printf( A idade do aluno eh: %d anos.., idade);` 
   O texto a ser impresso deve obrigatoriamente estar entre aspas duplas: `printf("A idade do aluno eh: %d anos..", idade);`.

*(Nota extra: o código também apresenta comandos C++ (`cout << endl;`) soltos fora do escopo da função, o que gerará erro de compilação em C).*
