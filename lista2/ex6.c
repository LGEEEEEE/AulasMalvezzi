#include <stdio.h>

int main() {
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    if(n%2==0) printf("Par\n");
    else printf("Impar\n");
    return 0;
}