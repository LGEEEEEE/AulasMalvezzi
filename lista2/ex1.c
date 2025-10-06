#include <stdio.h>

int main() {
    float lab, sem, final, media;
    printf("Digite a nota do trabalho de laboratorio: ");
    scanf("%f", &lab);
    printf("Digite a nota da avaliacao semestral: ");
    scanf("%f", &sem);
    printf("Digite a nota do exame final: ");
    scanf("%f", &final);

    media = (lab*2 + sem*3 + final*5) / 10;

    printf("Media ponderada = %.2f\n", media);

    if(media >= 8) printf("Conceito: A\n");
    else if(media >= 7) printf("Conceito: B\n");
    else if(media >= 6) printf("Conceito: C\n");
    else if(media >= 5) printf("Conceito: D\n");
    else printf("Conceito: E\n");

    return 0;
}