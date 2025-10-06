#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int num1, num2;
    double potencia;

    // Declara os dois números
    printf("Digite um numero aleatorio:\n");
    scanf("%d", &num1);

    printf("Digite outro numero aleatorio:\n");
    scanf("%d", &num2);

    potencia = pow(num1, num2);

    printf("O primeiro numero elevado ao segundo e: %.0f\n", potencia);

    return 0;
}
