#include <stdio.h>

int main() {
    float salario_minimo, horas_trabalhadas, horas_extras;
    int num_dependentes;
    float valor_hora_trabalhada, salario_mes, valor_dependentes, valor_horas_extras, salario_bruto, irrf, salario_liquido, gratificacao, salario_a_receber;

    printf("Digite o valor do salario minimo: ");
    scanf("%f", &salario_minimo);

    printf("Digite o numero de horas trabalhadas: ");
    scanf("%f", &horas_trabalhadas);

    printf("Digite o numero de dependentes: ");
    scanf("%d", &num_dependentes);

    printf("Digite a quantidade de horas extras trabalhadas: ");
    scanf("%f", &horas_extras);

    // 1. Valor da hora trabalhada
    valor_hora_trabalhada = salario_minimo / 5;

    // 2. Salario do mes
    salario_mes = horas_trabalhadas * valor_hora_trabalhada;

    // 3. Valor dos dependentes
    valor_dependentes = num_dependentes * 32.00;

    // 4. Valor das horas extras
    valor_horas_extras = horas_extras * (valor_hora_trabalhada * 1.50);

    // 5. Salario bruto
    salario_bruto = salario_mes + valor_dependentes + valor_horas_extras;

    // 6. IRRF
    if (salario_bruto < 200.00) {
        irrf = 0;
    } else if (salario_bruto >= 200.00 && salario_bruto <= 500.00) {
        irrf = salario_bruto * 0.10;
    } else {
        irrf = salario_bruto * 0.20;
    }

    // 7. Salario liquido
    salario_liquido = salario_bruto - irrf;

    // 8. Gratificacao
    if (salario_liquido <= 350.00) {
        gratificacao = 100.00;
    } else {
        gratificacao = 50.00;
    }

    // Salario a receber
    salario_a_receber = salario_liquido + gratificacao;

    printf("\n--- Detalhes do Salario ---\n");
    printf("Valor da hora trabalhada: R$ %.2f\n", valor_hora_trabalhada);
    printf("Salario do mes: R$ %.2f\n", salario_mes);
    printf("Valor dos dependentes: R$ %.2f\n", valor_dependentes);
    printf("Valor das horas extras: R$ %.2f\n", valor_horas_extras);
    printf("Salario bruto: R$ %.2f\n", salario_bruto);
    printf("IRRF: R$ %.2f\n", irrf);
    printf("Salario liquido: R$ %.2f\n", salario_liquido);
    printf("Gratificacao: R$ %.2f\n", gratificacao);
    printf("Salario a receber: R$ %.2f\n", salario_a_receber);

    return 0;
}