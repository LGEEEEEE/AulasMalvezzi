#include <stdio.h>

long long int calcularFatorial(int n) {
    if (n < 0) {
        return -1; // Sinaliza erro para número negativo
    }
    if (n == 0) {
        return 1;
    }
    long long int fatorial = 1;
    for (int i = 1; i <= n; i++) {
        fatorial *= i;
    }
    return fatorial;
}

int main() {
    int N;
    double soma_E = 1.0;

    printf("Digite um valor N inteiro e positivo: ");
    scanf("%d", &N);

    if (N < 0) {
        printf("Erro: O número N deve ser positivo.\n");
        return 1;
    }

    for (int i = 1; i <= N; i++) {
        soma_E += 1.0 / calcularFatorial(i);
    }

    printf("O valor da soma E é: %.6f\n", soma_E);

    return 0;
}