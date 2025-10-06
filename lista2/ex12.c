#include <stdio.h>

int main() {
    int codigo;
    float salario_atual, aumento, novo_salario;

    printf("Digite o codigo do cargo (1 a 5): ");
    scanf("%d", &codigo);

    printf("Digite o salario atual: ");
    scanf("%f", &salario_atual);

    printf("\n");

    switch (codigo) {
        case 1:
            aumento = salario_atual * 0.50;
            novo_salario = salario_atual + aumento;
            printf("Cargo: Escriturario\n");
            printf("Valor do aumento: R$ %.2f\n", aumento);
            printf("Novo salario: R$ %.2f\n", novo_salario);
            break;
        case 2:
            aumento = salario_atual * 0.35;
            novo_salario = salario_atual + aumento;
            printf("Cargo: Secretario\n");
            printf("Valor do aumento: R$ %.2f\n", aumento);
            printf("Novo salario: R$ %.2f\n", novo_salario);
            break;
        case 3:
            aumento = salario_atual * 0.20;
            novo_salario = salario_atual + aumento;
            printf("Cargo: Caixa\n");
            printf("Valor do aumento: R$ %.2f\n", aumento);
            printf("Novo salario: R$ %.2f\n", novo_salario);
            break;
        case 4:
            aumento = salario_atual * 0.10;
            novo_salario = salario_atual + aumento;
            printf("Cargo: Gerente\n");
            printf("Valor do aumento: R$ %.2f\n", aumento);
            printf("Novo salario: R$ %.2f\n", novo_salario);
            break;
        case 5:
            aumento = 0;
            novo_salario = salario_atual;
            printf("Cargo: Diretor\n");
            printf("Valor do aumento: R$ %.2f\n", aumento);
            printf("Novo salario: R$ %.2f\n", novo_salario);
            break;
        default:
            printf("Codigo de cargo invalido.\n");
            break;
    }

    return 0;
}