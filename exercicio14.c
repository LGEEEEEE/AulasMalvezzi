#include <stdio.h>
#include <locale.h>

int main() {
    
    int anoNasc, idade, idade2;

    printf("Digite seu ano de nascimento:  "); 
    scanf("%d", &anoNasc);

    idade = 2025 - anoNasc;
    idade2 = 2050 - anoNasc;

    printf("Voce tem %d anos\n", idade);
    printf("Em 2050 voce tera: %d anos\n", idade2);

    return 0;
}
