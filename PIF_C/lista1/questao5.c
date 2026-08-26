/*
Faltando importar as bibliotecas stdio.h e stdlib.h, que são necessárias para usar as funções printf e system.
sintaxe incorreta da função o correta é int main() { ... } e não main() { ... }

main() 
{
printf("Linguagem C");
system("pause"); 
return 0; deveria estar nessa linha, mas nao está fora da função main, o correto é colocar dentro da função main
}
*/ 


#include <stdio.h>
#include <stdlib.h>

int main()
{
printf("Linguagem C");
system("pause");
return 0;
}