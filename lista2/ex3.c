#include <stdio.h>

int main() {
    float a, b;
    printf("Digite dois numeros: ");
    scanf("%f %f", &a, &b);
    if(a > b) printf("Maior: %.2f\n", a);
    else if(b > a) printf("Maior: %.2f\n", b);
    else printf("Numeros iguais\n");
    return 0;
}