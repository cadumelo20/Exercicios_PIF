#include <stdio.h>

int main() {
    float comp, larg, preco_metro, perimetro, total_arame, custo;
    
    printf("Digite o comprimento do terreno (m): ");
    scanf("%f", &comp);
    printf("Digite a largura do terreno (m): ");
    scanf("%f", &larg);
    printf("Digite o preco unitario do metro do arame farpado (R$): ");
    scanf("%f", &preco_metro);
    
    perimetro = 2 * (comp + larg);
    total_arame = perimetro * 3.0; // 3 fios conforme o enunciado
    custo = total_arame * preco_metro;
    
    printf("Quantidade de arame a comprar: %.2f metros\n", total_arame);
    printf("Custo total do cercamento: R$ %.2f\n", custo);
    
    return 0;
}
