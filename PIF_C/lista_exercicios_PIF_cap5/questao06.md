# Questão 06

**a) Diferença entre `#include <stdio.h>` e `#include "areas.h"`:**
- `#include <stdio.h>` (entre sinais de menor e maior): instrui o pré-processador a procurar o arquivo apenas nos **diretórios padrão do sistema/compilador**. Usado para bibliotecas padrão da linguagem C ou bibliotecas instaladas no sistema.
- `#include "areas.h"` (entre aspas duplas): instrui o pré-processador a procurar primeiro no **diretório atual do projeto** (onde está o arquivo `.c`) e, se não encontrar, nos diretórios padrão. Usado para arquivos de cabeçalho próprios criados pelo programador.

**b) Efeito de `#undef SOMA` e erro em `#undef SOMA(x,y)`:**
- `#undef SOMA` **remove (desdefine)** a macro `SOMA` da tabela do pré-processador a partir daquela linha, impedindo expansões futuras ou permitindo que ela seja redefinida sem conflitos.
- `#undef SOMA(x,y)` está incorreto porque a diretiva `#undef` aceita **apenas o nome (identificador)** da macro a ser removida, sem lista de parâmetros.

**c) Mensagem impressa sem `DEBUG`, momento da decisão e executável final:**
Se `DEBUG` não foi definido, será impressa a mensagem: **`Modo normal`**.
Essa decisão é tomada na fase de **pré-processamento** (antes mesmo da compilação propriamente dita). O pré-processador avalia `#ifdef DEBUG`, mantém apenas o bloco verdadeiro (`printf("Modo normal\n");`) e descarta o bloco falso e todas as diretivas (`#include`, `#define`, `#ifdef`, `#else`, `#endif`). Por isso, nenhuma diretiva chega ao compilador nem aparece no arquivo executável final.
