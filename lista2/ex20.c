#include <stdio.h>

int main() {
    int codigo_produto, codigo_pais;
    float peso_quilos, preco_grama, imposto_percentual;
    float peso_gramas, preco_total, valor_imposto, valor_total;

    printf("Digite o codigo do produto (1 a 10): ");
    scanf("%d", &codigo_produto);

    printf("Digite o peso do produto em quilos: ");
    scanf("%f", &peso_quilos);

    printf("Digite o codigo do pais de origem (1 a 3): ");
    scanf("%d", &codigo_pais);

    // 1. Determinar o preco por grama
    if (codigo_produto >= 1 && codigo_produto <= 4) {
        preco_grama = 10.0;
    } else if (codigo_produto >= 5 && codigo_produto <= 7) {
        preco_grama = 25.0;
    } else if (codigo_produto >= 8 && codigo_produto <= 10) {
        preco_grama = 35.0;
    } else {
        printf("\nCodigo do produto invalido.\n");
        return 1;
    }

    // 2. Determinar o percentual do imposto
    if (codigo_pais == 1) {
        imposto_percentual = 0.0;
    } else if (codigo_pais == 2) {
        imposto_percentual = 0.15;
    } else if (codigo_pais == 3) {
        imposto_percentual = 0.25;
    } else {
        printf("\nCodigo do pais de origem invalido.\n");
        return 1;
    }

    // 3. Calculos
    peso_gramas = peso_quilos * 1000;
    preco_total = peso_gramas * preco_grama;
    valor_imposto = preco_total * imposto_percentual;
    valor_total = preco_total + valor_imposto;

    printf("\n--- Detalhes da Compra ---\n");
    printf("Peso do produto (em gramas): %.2f g\n", peso_gramas);
    printf("Preco total do produto: R$ %.2f\n", preco_total);
    printf("Valor do imposto: R$ %.2f\n", valor_imposto);
    printf("Valor total a pagar: R$ %.2f\n", valor_total);

    return 0;
}