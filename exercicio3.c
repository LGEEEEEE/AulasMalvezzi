#include <stdio.h>
#include <stdlib.h>

int main()
{

    int nota1, nota2, nota3, peso1, peso2, peso3, media;

    printf("Digite as tres notas do aluno \n");

    scanf("%d", &nota1);
    scanf("%d", &nota2);
    scanf("%d", &nota3);

    printf("Digite os tres pesos de cada nota respectivamente \n");

    scanf("%d", &peso1);
    scanf("%d", &peso2);
    scanf("%d", &peso3);

    media = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);

    printf("Media do aluno: %d ", media);

    if (media < 6)
    {
        printf("\nAluno esta de recuperacao");
    }

    if (media >= 6)
    {
        printf("\n!Aluno aprovado!");
    }

    return 0;
}