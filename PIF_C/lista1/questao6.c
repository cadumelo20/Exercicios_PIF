/* ERRO 1: Faltam as bibliotecas padrão de entrada/saída e de sistema. 
 O compilador não saberá o que é printf e system sem elas.

main()  ERRO 2: A função main deve retornar um valor inteiro, então o correto é 'int main()'
{
     ERRO 3: Ponto e vírgula (;) separa instruções. Para declarar várias variáveis do mesmo 
     tipo na mesma linha, deve-se usar vírgula (,). 
    ERRO 4: A linha termina com dois pontos (:) em vez de ponto e vírgula (;).
    int a=1; b=2; c=3: 
    
     ERRO 5: A string do printf não foi fechada com aspas duplas (") após o \n.
     ERRO 6: Há 3 formatadores (%d%d%d), mas 4 variáveis estão sendo passadas (a, b, c, d).
     ERRO 7: A variável 'd' nunca foi declarada ou inicializada no programa.
    printf("0s números são: %d%d%d\n, a, b, c, d); 
    
    system("pause");
    
     ERRO 8: Como a função main deve retornar um int, falta o 'return 0;' no final.
}
    */



#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int a = 1, b = 2, c = 3;
    
    printf("Os números são: %d, %d, %d\n", a, b, c);
    
    system("pause");
    
    return 0;
}