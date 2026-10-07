# Questão 01

**a) Diferença essencial entre `while` e `do-while`:**
A principal diferença reside no momento em que a condição é avaliada. No `while`, o teste condicional ocorre **antes** da execução do bloco. Se a condição for falsa na primeira verificação, o bloco interno não executa nenhuma vez (mínimo de 0 execuções). Já no `do-while`, o bloco é executado **primeiro** e o teste condicional ocorre **no final**. Isso garante que o corpo do laço seja executado, no mínimo, uma vez, independentemente de a condição ser verdadeira ou falsa.

**b) Situações mais elegantes e adequadas para cada estrutura:**
- `for`: É a escolha ideal quando se sabe antecipadamente o número exato de iterações ou quando o controle da repetição é baseado em uma variável contadora. Ele agrupa a inicialização, o teste e o incremento em uma única linha estruturada.
- `while`: É mais elegante para laços com número indeterminado de repetições, onde a condição de parada depende de eventos lógicos, estados do programa ou entradas do usuário que devem ser validadas antes de executar a ação.
- `do-while`: É perfeito para situações em que a ação deve obrigatoriamente acontecer pelo menos uma vez antes de avaliar se precisa repetir, como na exibição de menus interativos e na validação inicial de entrada de dados.

**c) Análise de código (`while (condicao);`):**
Trata-se de um **erro de lógica**, não um erro de compilação. Para o compilador da Linguagem C, o ponto e vírgula representa uma "instrução nula" ou "comando vazio". O código compilará perfeitamente. No entanto, durante a execução, se a `condicao` for verdadeira, o programa entrará em um laço infinito executando sucessivamente o comando vazio. Como o corpo do laço está vazio, não há código para alterar as variáveis envolvidas na `condicao`, mantendo-a eternamente verdadeira e travando a execução do programa naquela linha.
