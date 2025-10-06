#include <stdio.h>

int main() {
    float salario_atual, bonificacao, auxilio_escola, novo_salario;

    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario_atual);

    // Calculo da bonificacao
    if (salario_atual <= 500.00) {
        bonificacao = salario_atual * 0.05;
    } else if (salario_atual > 500.00 && salario_atual <= 1200.00) {
        bonificacao = salario_atual * 0.12;
    } else {
        bonificacao = 0;
    }

    // Calculo do auxilio-escola
    if (salario_atual <= 600.00) {
        auxilio_escola = 150.00;
    } else {
        auxilio_escola = 100.00;
    }

    novo_salario = salario_atual + bonificacao + auxilio_escola;

    printf("\nSalario atual: R$ %.2f\n", salario_atual);
    printf("Bonificacao: R$ %.2f\n", bonificacao);
    printf("Auxilio-escola: R$ %.2f\n", auxilio_escola);
    printf("Novo salario: R$ %.2f\n", novo_salario);

    return 0;
}