# Questão 02

**a) Por que o uso de funções contidas em `<conio.h>` deve ser evitado em sistemas modernos (Linux, macOS, servidores)?**
A biblioteca `<conio.h>` não faz parte do padrão ANSI C oficial da linguagem. É uma biblioteca antiga e legada desenvolvida especificamente para o ambiente de compiladores do MS-DOS e Windows (ex: Turbo C). Seu uso afeta a **portabilidade** do código, impossibilitando a compilação nativa em sistemas baseados em Unix, como Linux e macOS, que gerenciam a E/S (Entrada/Saída) do terminal de modo diferente.

**b) Quais são as funções equivalentes e portáveis fornecidas pela biblioteca padrão `<stdio.h>` para entrada e saída de caracteres?**
As principais funções contidas na biblioteca padrão (portáteis) são:
- Entrada de caractere: `getchar()`, `fgetc()`
- Saída de caractere: `putchar()`, `fputc()`

**c) Escreva um pequeno trecho de código padrão C que leia um caractere do console de maneira robusta, ignorando eventuais quebras de linha ('\n') residuais no buffer do teclado.**
```c
char c;
// O espaço em branco inserido antes do %c instrui o scanf a pular 
// automaticamente qualquer espaço em branco ou quebra de linha ('\n') no buffer.
scanf(" %c", &c);
```
