#include <stdio.h>
#include <locale.h>  // <-- não esqueça essa linha!

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    float preco_fabrica, perc_lucro, perc_impostos;
    float valor_lucro, valor_impostos, preco_final;

    // Entrada de dados
    printf("Digite o preço de fábrica do veículo: ");
    scanf("%f", &preco_fabrica);

    printf("Digite o percentual de lucro do distribuidor (em %%): ");
    scanf("%f", &perc_lucro);

    printf("Digite o percentual de impostos (em %%): ");
    scanf("%f", &perc_impostos);

    // Cálculos
    valor_lucro = (perc_lucro / 100) * preco_fabrica;
    valor_impostos = (perc_impostos / 100) * preco_fabrica;
    preco_final = preco_fabrica + valor_lucro + valor_impostos;

    // Resultados
    printf("Valor do lucro do distribuidor: R$ %.2f\n", valor_lucro);
    printf("Valor dos impostos: R$ %.2f\n", valor_impostos);
    printf("Preço final do veículo: R$ %.2f\n", preco_final);

    return 0;
}
