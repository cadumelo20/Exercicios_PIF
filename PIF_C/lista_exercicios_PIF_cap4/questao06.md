# Questão 06

**a) Saída do programa para `idade = 65`:**
```text
Idoso
Adulto
Jovem
```
As múltiplas mensagens aparecem porque foram escritos vários `if` separados e independentes. O número 65 passa pelo primeiro (>=60, imprime Idoso), pelo segundo (>=18, imprime Adulto), pelo terceiro (>=12, imprime Jovem). Como o terceiro é verdadeiro, a sua cláusula `else` (que só está associada ao terceiro if) é ignorada.

**b) Diferença fundamental:**
- **Sequência de `if` independentes:** Todas as condições serão integralmente processadas e avaliadas pelo computador da primeira à última linha, mesmo que a primeira já seja verdadeira, permitindo que vários blocos sejam executados se as condições se sobrepuserem matematicamente.
- **Cadeia `else-if` (if-else if):** O grupo de testes funciona como uma estrutura de decisão unificada. Quando a primeira condição se prova verdadeira e é executada, o computador aborta imediatamente todas as demais cláusulas encadeadas, garantindo exclusividade (apenas um bloco será executado em toda a cadeia).

**c) Código reescrito utilizando else-if:**
*(Colocamos as verificações maiores e exclusivas no topo da cadeia)*
```c
int idade = 25;

if (idade >= 60) {
    printf("Idoso\n");
} else if (idade >= 18) {
    printf("Adulto\n");
} else if (idade >= 12) {
    printf("Jovem\n");
} else {
    printf("Criança\n");
}
```
