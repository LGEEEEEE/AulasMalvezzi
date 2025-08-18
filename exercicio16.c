#include <stdio.h>

int main() {
    float horasTrabalhadas, salarioMinimo;
    float valorHora, salarioBruto, imposto, salarioReceber;

    // Entrada de dados
    printf("Digite o numero de horas trabalhadas: ");
    scanf("%f", &horasTrabalhadas);

    printf("Digite o valor do salario minimo: ");
    scanf("%f", &salarioMinimo);

    // a) Valor da hora trabalhada é metade do salário mínimo
    valorHora = salarioMinimo / 2.0;

    // b) Salário bruto
    salarioBruto = horasTrabalhadas * valorHora;

    // c) Imposto de 3% sobre o salário bruto
    imposto = salarioBruto * 0.03;

    // d) Salário a receber
    salarioReceber = salarioBruto - imposto;

    // Saída
    printf("\nSalario bruto: R$ %.2f", salarioBruto);
    printf("\nImposto (3%%): R$ %.2f", imposto);
    printf("\nSalario a receber: R$ %.2f\n", salarioReceber);

    return 0;
}
