#include <stdio.h>
#include <math.h>

int main() {
    double N;
    printf("Digite o número N para calcular a raiz quadrada: ");
    scanf("%lf", &N);

    if (N < 0) {
        printf("Não é possível calcular a raiz quadrada de um número negativo.\n");
        return 1;
    }
    
    double k = 1.0; // Valor inicial
    printf("Aproximações da raiz quadrada de %.2f:\n", N);

    for (int i = 1; i <= 12; i++) {
        k = (k + N / k) / 2.0;
        printf("Iteração %d: k = %.10f\n", i, k);
    }
    
    printf("\nValor real da raiz quadrada de %.2f: %.10f\n", N, sqrt(N));

    return 0;
}