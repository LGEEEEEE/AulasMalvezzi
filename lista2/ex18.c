#include <stdio.h>

int main() {
    float x, y, z;

    printf("Digite o comprimento do lado X: ");
    scanf("%f", &x);

    printf("Digite o comprimento do lado Y: ");
    scanf("%f", &y);

    printf("Digite o comprimento do lado Z: ");
    scanf("%f", &y);

    // Condicao para ser um triangulo
    if (x < y + z && y < x + z && z < x + y) {
        printf("\nOs valores podem formar um triangulo.\n");
        // Classificacao do triangulo
        if (x == y && y == z) {
            printf("E um triangulo equilatero.\n");
        } else if (x == y || x == z || y == z) {
            printf("E um triangulo isosceles.\n");
        } else {
            printf("E um triangulo escaleno.\n");
        }
    } else {
        printf("\nOs valores nao podem formar um triangulo.\n");
    }

    return 0;
}