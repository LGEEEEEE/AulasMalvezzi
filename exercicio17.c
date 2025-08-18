#include <stdio.h>

int main() {
    float salario, cheque1, cheque2;
    float saldo, cpmf1, cpmf2;

    // Entrada de dados
    printf("Digite o valor do salario recebido: ");
    scanf("%f", &salario);

    printf("Digite o valor do primeiro cheque: ");
    scanf("%f", &cheque1);

    printf("Digite o valor do segundo cheque: ");
    scanf("%f", &cheque2);

    // CPMF de cada cheque (0,38% do valor do cheque)
    cpmf1 = cheque1 * 0.0038;
    cpmf2 = cheque2 * 0.0038;

    // Saldo final
    saldo = salario - (cheque1 + cpmf1) - (cheque2 + cpmf2);

    // Saída
    printf("\nCPMF do primeiro cheque: R$ %.2f", cpmf1);
    printf("\nCPMF do segundo cheque: R$ %.2f", cpmf2);
    printf("\nSaldo final da conta: R$ %.2f\n", saldo);

    return 0;
}
