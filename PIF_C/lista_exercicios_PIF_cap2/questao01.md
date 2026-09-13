# Questão 01

**a) Qual é o valor numérico que será efetivamente exibido no console ao executar esse programa?**
O valor exibido será `2`.

**b) Explique por que isso ocorre. Qual é o nome do fenômeno que acontece nessa atribuição?**
Isso ocorre porque as variáveis do tipo `int` não conseguem armazenar a parte decimal dos números. Esse fenômeno é chamado de **coerção implícita de tipo** (ou *type casting implícito*, *truncamento*). Quando tentamos armazenar `2.97` (um ponto flutuante) no tipo `int`, o compilador C corta e descarta a porção após a vírgula para adequar o valor.

**c) Como este tipo de comportamento pode ser evitado ou controlado explicitamente em C pelo programador caso ele necessite arredondar o valor ou manter a precisão?**
Se o programador quiser manter a precisão total, ele deve utilizar um tipo que suporte casas decimais, como `float` ou `double`. 
Caso deseje intencionalmente arredondar o número antes de alocar no tipo inteiro, pode utilizar funções da biblioteca `<math.h>`, como `round()` (arredondamento matemático), `floor()` (para baixo) ou `ceil()` (para cima). Se o truncamento foi intencional, indica-se o uso da coerção explícita — ex: `(int)2.97` — informando no código que foi uma escolha deliberada do programador.
