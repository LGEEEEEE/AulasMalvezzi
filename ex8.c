#include <stdio.h>

int main() {
    int numero, quantidade = 0, soma = 0;
    int maior, menor;
    int soma_pares = 0, quantidade_pares = 0;
    int quantidade_impares = 0;

    printf("Digite vários números inteiros (digite 30000 para finalizar):\n");

    // Lê o primeiro número fora do loop para inicializar maior e menor
    scanf("%d", &numero);
    if (numero == 30000) {
        printf("Nenhum número foi digitado.\n");
        return 0;
    }

    maior = numero;
    menor = numero;

    while (numero != 30000) {
        soma += numero;
        quantidade++;

        if (numero > maior) maior = numero;
        if (numero < menor) menor = numero;
        
        if (numero % 2 == 0) {
            soma_pares += numero;
            quantidade_pares++;
        } else {
            quantidade_impares++;
        }

        scanf("%d", &numero);
    }

    if (quantidade > 0) {
        double media = (double)soma / quantidade;
        double media_pares = (quantidade_pares > 0) ? (double)soma_pares / quantidade_pares : 0;
        double percentual_impares = (double)quantidade_impares / quantidade * 100;

        printf("\nResultados:\n");
        printf("a) Soma dos números: %d\n", soma);
        printf("b) Quantidade de números: %d\n", quantidade);
        printf("c) Média dos números: %.2f\n", media);
        printf("d) Maior número: %d\n", maior);
        printf("e) Menor número: %d\n", menor);
        printf("f) Média dos números pares: %.2f\n", media_pares);
        printf("g) Percentagem de números ímpares: %.2f%%\n", percentual_impares);
    } else {
        printf("Nenhum número válido foi digitado.\n");
    }

    return 0;
}