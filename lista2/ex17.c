#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta, x1, x2;

    printf("Digite o valor de a: ");
    scanf("%f", &a);

    // A variavel 'a' deve ser diferente de zero
    if (a == 0) {
        printf("A variavel 'a' deve ser diferente de zero para uma equacao do 2o grau.\n");
        return 1;
    }

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    printf("Digite o valor de c: ");
    scanf("%f", &c);

    delta = b * b - 4 * a * c;

    printf("\n");

    if (delta < 0) {
        printf("Nao existem raizes reais, pois o delta e negativo (%.2f).\n", delta);
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("Existe uma unica raiz real: x = %.2f\n", x1);
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Existem duas raizes reais:\n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    }

    return 0;
}