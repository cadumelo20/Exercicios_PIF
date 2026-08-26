/* VERSAO 1: Única chamada
#include <stdio.h>
int main() {
    printf("Treinamento em programacao.\nLinguagem C.\n");
    return 0;
}

// VERSAO 2: Duas chamadas independentes
#include <stdio.h>
int main() {
    printf("Treinamento em programacao.\n");
    printf("Linguagem C.\n");
    return 0;
}

// VERSAO 3: Frases emolduradas
#include <stdio.h>
int main() {
    printf("\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
    printf("\xBA Treinamento em programacao. \xBA\n");
    printf("\xBA Linguagem C.                \xBA\n");
    printf("\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");
    return 0;
}

*/