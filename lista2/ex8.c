#include <stdio.h>
#include <math.h>

int main() {
    int op;
    printf("Menu de opcoes:\n1 - Somar dois numeros\n2 - Raiz quadrada\nOpcao: ");
    scanf("%d", &op);
    if(op==1){
        float x,y; printf("Digite dois numeros: ");
        scanf("%f %f",&x,&y);
        printf("Soma = %.2f\n", x+y);
    } else if(op==2){
        float x; printf("Digite um numero: ");
        scanf("%f",&x);
        if(x>=0) printf("Raiz = %.2f\n", sqrt(x));
        else printf("Numero invalido\n");
    } else printf("Opcao invalida\n");
    return 0;
}