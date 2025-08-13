#include <stdio.h>
#include <stdlib.h>

int main() {

    float sal, novosal;

    printf("Digite o salario do funcionario \n");

    scanf("%f", &sal);

    novosal = sal + sal * 25/100;

    printf("Novo salario funcionario: %.2f ", novosal);

    return 0;
}