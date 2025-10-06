#include <stdio.h>

int main() {
    int opcao;
    float salario, imposto, novo_salario;

    printf("Menu de opcoes:\n");
    printf("1 - Imposto\n");
    printf("2 - Novo Salario\n");
    printf("3 - Classificacao\n");
    printf("Digite a opcao desejada -> ");
    scanf("%d", &opcao);

    if (opcao >= 1 && opcao <= 3) {
        printf("Digite o salario do funcionario: ");
        scanf("%f", &salario);

        switch (opcao) {
            case 1:
                if (salario < 500.00) {
                    imposto = salario * 0.05;
                } else if (salario >= 500.00 && salario <= 850.00) {
                    imposto = salario * 0.10;
                } else {
                    imposto = salario * 0.15;
                }
                printf("\nO valor do imposto e: R$ %.2f\n", imposto);
                break;
            case 2:
                if (salario > 1500.00) {
                    novo_salario = salario + 25.00;
                } else if (salario >= 750.00 && salario <= 1500.00) {
                    novo_salario = salario + 50.00;
                } else if (salario >= 450.00 && salario < 750.00) {
                    novo_salario = salario + 75.00;
                } else {
                    novo_salario = salario + 100.00;
                }
                printf("\nO novo salario e: R$ %.2f\n", novo_salario);
                break;
            case 3:
                if (salario <= 700.00) {
                    printf("\nClassificacao: Mal remunerado\n");
                } else {
                    printf("\nClassificacao: Bem remunerado\n");
                }
                break;
        }
    } else {
        printf("\nOpcao invalida.\n");
    }

    return 0;
}