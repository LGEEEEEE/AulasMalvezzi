#include <stdio.h>

int main() {
    printf("Exercicio 21 ainda nao implementado.\n");
    return 0;
a#include <stdio.h>

int main() {
    int codigo_estado, codigo_carga;
    float peso_toneladas, preco_por_quilo, imposto_percentual;
    float peso_quilos, preco_carga, valor_imposto, valor_total;

    printf("Digite o codigo do estado de origem (1 a 5): ");
    scanf("%d", &codigo_estado);

    printf("Digite o peso da carga em toneladas: ");
    scanf("%f", &peso_toneladas);

    printf("Digite o codigo da carga (10 a 40): ");
    scanf("%d", &codigo_carga);

    // 1. Determinar o preco por quilo
    if (codigo_carga >= 10 && codigo_carga <= 20) {
        preco_por_quilo = 100.0;
    } else if (codigo_carga >= 21 && codigo_carga <= 30) {
        preco_por_quilo = 250.0;
    } else if (codigo_carga >= 31 && codigo_carga <= 40) {
        preco_por_quilo = 340.0;
    } else {
        printf("\nCodigo da carga invalido.\n");
        return 1;
    }

    // 2. Determinar o percentual do imposto
    switch (codigo_estado) {
        case 1:
            imposto_percentual = 0.35;
            break;
        case 2:
            imposto_percentual = 0.25;
            break;
        case 3:
            imposto_percentual = 0.15;
            break;
        case 4:
            imposto_percentual = 0.05;
            break;
        case 5:
            imposto_percentual = 0.0;
            break;
        default:
            printf("\nCodigo do estado invalido.\n");
            return 1;
    }

    // 3. Calculos
    peso_quilos = peso_toneladas * 1000;
    preco_carga = peso_quilos * preco_por_quilo;
    valor_imposto = preco_carga * imposto_percentual;
    valor_total = preco_carga + valor_imposto;

    printf("\n--- Detalhes do Transporte ---\n");
    printf("Peso da carga (em quilos): %.2f kg\n", peso_quilos);
    printf("Preco da carga: R$ %.2f\n", preco_carga);
    printf("Valor do imposto: R$ %.2f\n", valor_imposto);
    printf("Valor total transportado: R$ %.2f\n", valor_total);

    return 0;
}