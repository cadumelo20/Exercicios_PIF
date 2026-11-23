# Questão 03

**a) Classificação dos protótipos:**
- `void exibe_mensagem(char* msg);`: **Possui parâmetro de entrada** (`char* msg`), **não possui valor de retorno** (`void`).
- `int obter_codigo(void);`: **Não possui parâmetros de entrada** (`void`), **possui valor de retorno** (`int`).
- `void limpar_tela(void);`: **Não possui parâmetros de entrada** (`void`), **não possui valor de retorno** (`void`).

**b) Diferença prática entre função com retorno e procedimento (`void`):**
- **Função com retorno:** Executa um processamento e devolve um resultado concreto que pode ser armazenado em uma variável, testado em uma condição ou usado em outra expressão. *Exemplo:* calcular a média ponderada de notas (`float mediaPonderada(...)`).
- **Procedimento (`void`):** Executa uma ação ou efeito colateral (como imprimir na tela, limpar o console ou exibir um menu) sem precisar devolver nenhum valor para quem o chamou. *Exemplo:* exibir um menu de opções (`void exibeMenu(void)`).

**c) Validade da instrução `x = limpar_tela();`:**
A instrução é **inválida** e gerará um **erro de compilação**. Como `limpar_tela()` é do tipo `void`, ela não produz nem devolve nenhum valor; logo, não existe dado a ser atribuído à variável `x`.
