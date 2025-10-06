#include <stdio.h>

int main() {
    int dia1, mes1, ano1;
    int dia2, mes2, ano2;

    printf("Digite a primeira data (dia mes ano): ");
    scanf("%d %d %d", &dia1, &mes1, &ano1);

    printf("Digite a segunda data (dia mes ano): ");
    scanf("%d %d %d", &dia2, &mes2, &ano2);

    if (ano1 > ano2) {
        printf("\nA primeira data e a maior: %d/%d/%d\n", dia1, mes1, ano1);
    } else if (ano2 > ano1) {
        printf("\nA segunda data e a maior: %d/%d/%d\n", dia2, mes2, ano2);
    } else { // Mesmo ano
        if (mes1 > mes2) {
            printf("\nA primeira data e a maior: %d/%d/%d\n", dia1, mes1, ano1);
        } else if (mes2 > mes1) {
            printf("\nA segunda data e a maior: %d/%d/%d\n", dia2, mes2, ano2);
        } else { // Mesmo ano e mes
            if (dia1 > dia2) {
                printf("\nA primeira data e a maior: %d/%d/%d\n", dia1, mes1, ano1);
            } else if (dia2 > dia1) {
                printf("\nA segunda data e a maior: %d/%d/%d\n", dia2, mes2, ano2);
            } else {
                printf("\nAs datas sao iguais.\n");
            }
        }
    }

    return 0;
}