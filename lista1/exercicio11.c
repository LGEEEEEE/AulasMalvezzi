#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int number;
    float quadrado, cubo, raiz,raizcub;

    printf("Digite um numero aleatorio");
    scanf("%d", &number);

    quadrado = pow(number, 2);
    cubo = pow(number, 3);
    raiz = pow(number, 1/2);
    raizcub = pow(number, 1/3);

    printf("Numero ao quadrado: %.2f \n", quadrado);
    printf("Numero ao cubo: %.2f \n", cubo);
    printf("Raiz quadrada do numero: %.2f \n", raiz );
    printf("Raiz cubica do numero: %.2f \n", raizcub);


}