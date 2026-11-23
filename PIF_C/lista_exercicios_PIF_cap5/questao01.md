# Questão 01

**a) Identificação e papel de cada etapa da função `celsius()`:**
- **Protótipo:** `float celsius(float);` (antes da `main()`). Informa previamente ao compilador o nome da função, o tipo de dado que ela retorna (`float`) e a quantidade/tipo de parâmetros esperados (`float`), permitindo que ela seja chamada na `main()` antes de ser implementada.
- **Chamada:** `c = celsius(f);` (dentro da `main()`). Transfere momentaneamente o fluxo de execução para a função `celsius`, passando uma cópia do valor de `f` como argumento, e armazena o resultado retornado em `c`.
- **Definição:** `float celsius(float fahr) { return (fahr - 32.0) * 5.0 / 9.0; }` (após a `main()`). Contém o cabeçalho completo (com nome do parâmetro) e o corpo da função com as instruções que realizam o cálculo efetivo e devolvem o resultado.

**b) Papel do protótipo para o compilador e consequência da omissão:**
O protótipo permite que o compilador realize a **verificação estática de tipos** (quantidade e tipo dos argumentos passados na chamada, além de conversões implícitas necessárias e do tipo de retorno esperado).
Se o protótipo fosse omitido e a função fosse definida após a `main()`:
- No padrão moderno (C99 em diante), o compilador emite erro ou aviso grave de declaração implícita (*implicit declaration of function*), podendo impedir a compilação.
- No padrão antigo (C89/C90), o compilador assumiria por padrão que a função retorna `int` e não verificaria os tipos dos parâmetros; ao encontrar posteriormente a definição retornando `float`, ocorreria um erro de conflito de tipos ou comportamento indefinido na leitura do retorno.

**c) Tipo da função `celsius()` e por que ele depende do retorno:**
O tipo da função `celsius()` é **`float`**. Em C, o tipo de uma função é determinado pelo valor que ela **retorna** — e não pelos parâmetros recebidos — porque, em uma expressão (como `c = celsius(f);`), a chamada da função é avaliada e substituída pelo valor devolvido. O compilador precisa saber qual é o tipo desse resultado para alocá-lo corretamente em variáveis ou combiná-lo em outras operações.
