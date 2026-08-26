/*#include <stdio.h>
#include <stdlib.h>;
int Main{}  funcao fechada sem nenhum comando e faltando parenteses, o correto é int main() 
( parenteses de abertura e fechamento da funcao main nao existemem, o correto é {}
printf( Existem %d semanas no ano.,52); sem aspas duplas para o texto e aspas duplas para o %d, que é o valor inteiro 52
cout << endl; funcao de saida de linha, mas cout nao é reconhecido em C, apenas em C++
system("PAUSE");
return O; erro de sintaxe, o correto é return 0
)
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int semanas = 52;
    printf("Existem %d semanas no ano\n", semanas);
    system("PAUSE");
    return 0;
}