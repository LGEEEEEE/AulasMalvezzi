#include <stdio.h>
#include <stdlib.h>

int main() {
    int nota1, nota2, nota3, media;

    printf("Digite as tres notas do aluno \n");

    scanf("%d", &nota1);
    scanf("%d", &nota2);
    scanf("%d", &nota3);

    media = (nota1 + nota2 + nota3)/3 ;

    printf("Media do aluno: %d ",media );

    if (media<6){
        printf("\nAluno esta de recuperacao");
    }

    if (media>=6)
    {
        printf("\n!Aluno aprovado!");
    }
    
    

    return 0;
}