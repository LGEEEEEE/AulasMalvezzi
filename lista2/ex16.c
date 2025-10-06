#include <stdio.h>

int main() {
    float preco_atual, venda_media_mensal, novo_preco;
    int houve_reajuste = 0;

    printf("Digite o preco atual do produto: ");
    scanf("%f", &preco_atual);

    printf("Digite a venda media mensal do produto: ");
    scanf("%f", &venda_media_mensal);

    // Condicao para aumento de 10%
    if (venda_media_mensal < 500 && preco_atual < 30.00) {
        novo_preco = preco_atual * 1.10;
        printf("\nReajuste: Aumento de 10%%\n");
        houve_reajuste = 1;
    }
    // Condicao para aumento de 15%
    else if (venda_media_mensal >= 500 && venda_media_mensal < 1200 && preco_atual >= 30.00 && preco_atual < 80.00) {
        novo_preco = preco_atual * 1.15;
        printf("\nReajuste: Aumento de 15%%\n");
        houve_reajuste = 1;
    }
    // Condicao para diminuicao de 20%
    else if (venda_media_mensal >= 1200 && preco_atual >= 80.00) {
        novo_preco = preco_atual * 0.80;
        printf("\nReajuste: Diminuicao de 20%%\n");
        houve_reajuste = 1;
    } else {
        novo_preco = preco_atual;
        printf("\nNao houve reajuste de preco.\n");
    }

    printf("Preco atual: R$ %.2f\n", preco_atual);
    printf("Venda media mensal: %.0f\n", venda_media_mensal);
    if (houve_reajuste) {
        printf("Novo preco: R$ %.2f\n", novo_preco);
    }

    return 0;
}