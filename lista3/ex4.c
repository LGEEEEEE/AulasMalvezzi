#include <stdio.h>

long long int calcularFatorial(int n) {
    long long int fatorial = 1;
    for (int i = 1; i <= n; i++) {
        fatorial *= i;
    }
    return fatorial;
}

int main() {
    int N;
    printf("Digite a quantidade de números a serem lidos: ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        int numero;
        printf("Digite um número inteiro e positivo: ");
        scanf("%d", &numero);
        if (numero >= 0) {
            long long int fat = calcularFatorial(numero);
            printf("------------------------\n");
            printf("Número: %d | Fatorial: %lld\n", numero, fat);
            printf("------------------------\n");
        } else {
            printf("Fatorial não definido para números negativos.\n");
        }
    }

    return 0;
}