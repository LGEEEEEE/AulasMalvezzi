#include <stdio.h>
#include <stdlib.h>

int main () {
    int n1, n2, n3, n4, soma;
    printf("Digite quatro numeros inteiros: \n");
    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);
    scanf("%d",&n4);

    soma = n1 + n2 + n3 + n4 ; 

    printf ("O valor da soma  : %d", soma);

    return 0;

}