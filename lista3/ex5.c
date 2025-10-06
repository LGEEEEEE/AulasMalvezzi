#include <stdio.h>

int main() {
    int N = 8;
    int termo1 = 0, termo2 = 1;
    int proximoTermo;

    printf("Os %d primeiros termos da sequência de Fibonacci são:\n", N);
    
    printf("%d, %d", termo1, termo2);

    for (int i = 2; i < N; i++) {
        proximoTermo = termo1 + termo2;
        printf(", %d", proximoTermo);
        termo1 = termo2;
        termo2 = proximoTermo;
    }
    printf("\n");

    return 0;
}