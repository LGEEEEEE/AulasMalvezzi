#include <stdio.h>
#include <math.h>

long long int calcularFatorial(int n) {
    if (n < 0) return 0;
    if (n == 0) return 1;
    long long int fatorial = 1;
    for (int i = 1; i <= n; i++) {
        fatorial *= i;
    }
    return fatorial;
}

int main() {
    double x_graus, x_radianos;
    printf("Digite o valor de x em graus: ");
    scanf("%lf", &x_graus);

    // Converte graus para radianos, pois a função cos() usa radianos
    x_radianos = x_graus * M_PI / 180.0;

    double cos_aprox = 0;
    int num_termos = 3;

    for (int i = 0; i < num_termos; i++) {
        int sinal = (i % 2 == 0) ? 1 : -1;
        int expoente = 2 * i;
        double termo = (double)sinal * pow(x_radianos, expoente) / calcularFatorial(expoente);
        cos_aprox += termo;
    }

    double cos_real = cos(x_radianos);
    double erro = fabs(cos_real - cos_aprox);

    printf("Valor aproximado (3 termos): %.6f\n", cos_aprox);
    printf("Valor real (função cos):    %.6f\n", cos_real);
    printf("Erro: %.6f\n", erro);

    return 0;
}