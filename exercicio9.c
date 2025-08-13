#include <stdio.h>
#include <stdlib.h>

int main() {

    float base, altura, area;

    printf("Digite a altura do triangulo (em metros): ");
    scanf("%f", &altura);
    
    printf("Digite a base do triangulo (em metros): ");
    scanf("%f", &base);

    area = base * altura / 2;

    printf("Area do triangulo e: %.2f", area, "m");

    

    return 0;
}
