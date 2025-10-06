#include <stdio.h>

int main() {

    float deposito, dias, txmes, txdia, juros, rendimento;

    // Entrada de dados
    printf("Digite o valor do depósito: ");
    scanf("%f", &deposito);

    printf("Digite a taxa de juros ao mês (em %%): ");
    scanf("%f", &txmes);

    printf("Quantos dias se passaram desde o depósito? ");
    scanf("%f", &dias);

    // Cálculo da taxa diária
    txdia = txmes / 30;

    // Cálculo do juros proporcional aos dias
    juros = deposito * (txdia * dias) / 100;

    // Rendimento total = depósito inicial + juros
    rendimento = deposito + juros;

    // Exibe resultado
    printf("A taxa de juros diaria é: %.4f%%\n", txdia);
    printf("O rendimento final é: R$ %.2f\n", rendimento);

    return 0;
}
