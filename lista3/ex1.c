#include <stdio.h>

int main() {
    float salario = 1000.00;
    float percentual_aumento = 0.015;
    int ano_atual = 2025; // Altere para o ano desejado

    printf("Salário inicial em 2005: R$ %.2f\n", salario);

    for (int ano = 2006; ano <= ano_atual; ano++) {
        salario += salario * percentual_aumento;
        printf("Salário em %d: R$ %.2f\n", ano, salario);
        percentual_aumento *= 2;
    }

    printf("\nO salário atual do funcionário em %d é: R$ %.2f\n", ano_atual, salario);

    return 0;
}