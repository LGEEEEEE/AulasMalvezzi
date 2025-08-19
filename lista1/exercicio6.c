#include <stdio.h>
#include <stdlib.h>

int main() {

    float salbase, gratif, imposto, salfinal;

    printf("Digite o salario do funcionario \n");
    scanf("%f", &salbase);

    gratif = salbase * 5/100;
    imposto = salbase * 7/100;
    salfinal = salbase - imposto + gratif;

    printf("O salario final e: R$ %.2f", salfinal);

    return 0;

}