#include <stdio.h>
#include <stdlib.h>

int main() {

    float sal, percentual, novosal;

    printf("Digite o salario do funcionario \n");

    scanf("%f", &sal);

    printf("Digite o percentual de aumento: \n");

    scanf("%f", &percentual);

    novosal = sal + sal * percentual/100;

    printf("Novo salario funcionario: R$ %.2f ", novosal);

    return 0;
}