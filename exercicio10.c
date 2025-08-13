#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    float pi, raio, area;

    printf("Digite o valor do raio (em cm): ");
    scanf("%f", &raio);

    pi = 3.1415;
    area = pi * pow(raio, 2);

    printf("A area desse circulo e : %.2f cm²", area);

}