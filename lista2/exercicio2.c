#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    float nota1, nota2, nota3, media;

    // Solicita as três notas ao usuário
    printf("Insira a primeira nota: ");
    scanf("%f", &nota1);

    printf("Insira a segunda nota: ");
    scanf("%f", &nota2);

    printf("Insira a terceira nota: ");
    scanf("%f", &nota3);

    // Cálculo da média aritmética
    media = (nota1 + nota2 + nota3) / 3;

    // Define o conceito de acordo com a tabela da imagem
    if (media >= 7.00 && media <= 10.00)
    {
        printf("\nAprovado");
    }
    else if (media >= 3.00 && media <= 6.99)
    {
        printf("\nExame");
    }
    else if (media >= 0.00 && media <= 2.99)
    {
        printf("\nReprovado");
    }
    // Uma verificação de segurança caso a média seja fora das faixas
    else
    {
        printf("\nMedia fora da faixa esperada.");
    }

    // Exibe a média final do aluno
    printf("\nA média do aluno é: %.2f\n", media);

    return 0;
}