#include <stdio.h>

int main() {
    int N;
    printf("Digite a quantidade de termos (N) para a série: ");
    scanf("%d", &N);

    int a = 1, b = 4;
    for (int i = 1; i <= N; i++) {
        if (i % 3 == 1) {
            printf("%d, ", a);
            a++;
        } else {
            printf("%d, ", b);
            if (i % 3 == 0) {
                b++;
            }
        }
    }
    printf("\n");

    return 0;
}