#include <stdio.h>
#include <limits.h>

int main() {
    int numero, maior = INT_MIN, menor = INT_MAX;
    int primeiro_numero = 1;

    printf("Digite uma série de números positivos (digite -1 para finalizar):\n");

    while (1) {
        scanf("%d", &numero);
        
        if (numero == -1) {
            break;
        }

        if (primeiro_numero) {
            maior = numero;
            menor = numero;
            primeiro_numero = 0;
        } else {
            if (numero > maior) {
                maior = numero;
            }
            if (numero < menor) {
                menor = numero;
            }
        }
    }
    
    if (primeiro_numero) {
        printf("Nenhum número foi digitado.\n");
    } else {
        printf("O maior número é: %d\n", maior);
        printf("O menor número é: %d\n", menor);
    }

    return 0;
}