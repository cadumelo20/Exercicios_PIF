# Questão 05

**a) Qual é a diferença essencial entre while e do-while em relação ao número mínimo de execuções do bloco de código e ao momento do teste condicional?**
- O `while` testa a condição no **início** do laço. Se for falsa na primeira verificação, o código dentro dele nunca é executado (mínimo de 0 execuções).
- O `do-while` testa a condição no **final** do laço. Ele garante que o código dentro do bloco será executado **pelo menos uma vez** antes de avaliar a condição para decidir se repete.

**b) Em que cenários o laço for se apresenta como a escolha mais elegante e legível frente ao laço while?**
O laço `for` é mais elegante quando sabemos de antemão a quantidade de iterações ou quando o controle da repetição é baseado numa variável contadora. Ele agrupa a inicialização, a condição de parada e o incremento da variável em uma única linha, melhorando a legibilidade.

**c) O trecho de código `while (condicao);` constitui um erro de compilação ou de lógica? O que acontece se condicao for verdadeira?**
Trata-se de um **erro de lógica**. Para o compilador, o ponto e vírgula representa um "comando vazio". O código vai compilar sem problemas. No entanto, se a condição for verdadeira, o programa entrará em um laço infinito preso nessa mesma linha, pois nada dentro do comando vazio será capaz de alterar a variável de teste da condição.
