#include <stdio.h>

int main() {
    float altura, peso;
    char classificacao;

    printf("Digite a altura da pessoa (em metros): ");
    scanf("%f", &altura);

    printf("Digite o peso da pessoa (em kg): ");
    scanf("%f", &peso);

    if (altura < 1.20) {
        if (peso <= 60) {
            classificacao = 'A';
        } else if (peso > 60 && peso <= 90) {
            classificacao = 'D';
        } else {
            classificacao = 'G';
        }
    } else if (altura >= 1.20 && altura <= 1.70) {
        if (peso <= 60) {
            classificacao = 'B';
        } else if (peso > 60 && peso <= 90) {
            classificacao = 'E';
        } else {
            classificacao = 'H';
        }
    } else { // altura > 1.70
        if (peso <= 60) {
            classificacao = 'C';
        } else if (peso > 60 && peso <= 90) {
            classificacao = 'F';
        } else {
            // A tabela nao especifica para esta combinacao, mas se
            // baseando na logica, seria a proxima letra.
            // Para este exercicio, a tabela termina em H, entao podemos
            // assumir que este caso nao existe ou nao tem classificacao.
            // Vamos deixar como "Sem classificacao" para ser mais claro.
            // Em uma aplicacao real, voce ajustaria isso conforme a
            // regra de negocio.
            printf("\nClassificacao nao encontrada para esta altura e peso.\n");
            return 0;
        }
    }

    printf("\nSua classificacao e: %c\n", classificacao);

    return 0;
}