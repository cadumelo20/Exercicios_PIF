# Questão 04

**a) Ação do comando `break`:**
Quando acionado, o `break` causa a interrupção **imediata e incondicional** do laço em que está inserido. O fluxo de execução salta diretamente para a primeira instrução existente após o bloco de chaves final do laço. O restante das iterações planejadas e o código restante da iteração atual são descartados.

**b) Ação do comando `continue`:**
Quando acionado, o `continue` aborta apenas o restante do código da **iteração atual** do laço. O programa não sai do laço; ao invés disso, no caso de um laço `for`, o fluxo de execução salta diretamente para a **expressão de incremento** (a terceira parte do cabeçalho do `for`), realiza o incremento/atualização da variável de controle e, em seguida, avalia a expressão de teste novamente para decidir se prossegue para a próxima iteração.

**c) Comportamento em laços aninhados:**
O comando `break` afeta **exclusivamente o laço mais interno** onde ele está posicionado. Se executado dentro do laço interno, ele interromperá apenas esse laço interno. O laço externo continuará sua execução normal, partindo para a sua própria próxima iteração, que consequentemente reiniciará o laço interno de novo.
