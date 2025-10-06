#include <stdio.h>

int main() {
    float a, b, c;
    printf("Digite tres numeros: ");
    scanf("%f %f %f", &a, &b, &c);
    float temp;
    if(a > b){ temp = a; a = b; b = temp; }
    if(b > c){ temp = b; b = c; c = temp; }
    if(a > b){ temp = a; a = b; b = temp; }
    printf("Ordem crescente: %.2f %.2f %.2f\n", a, b, c);
    return 0;
}