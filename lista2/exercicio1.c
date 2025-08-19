#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "UTF-8");

    float trabLab, avSem, exFinal, media;
    char conceito;

    printf("Insira a nota do Trabalho de laboratório: ");
    scanf("%f", &trabLab);

    printf("Insira a nota da Avaliação Semestral: ");
    scanf("%f", &avSem);

    printf("Insira a nota do Exame Final: ");
    scanf("%f", &exFinal);

    // Cálculo da média ponderada (pesos: 2, 3 e 5)
    media = (trabLab * 2 + avSem * 3 + exFinal * 5) / 10;

    // Definição do conceito
    if (media >= 8.0)
        conceito = 'A';
    else if (media >= 7.0)
        conceito = 'B';
    else if (media >= 6.0)
        conceito = 'C';
    else if (media >= 5.0)
        conceito = 'D';
    else
        conceito = 'E';

    printf("\nA média do aluno é: %.2f\n", media);
    printf("Conceito: %c\n", conceito);

    return 0;
}
