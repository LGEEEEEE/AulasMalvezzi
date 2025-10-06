#include <stdio.h>

int main() {
    int voto;
    int votos_candidato1 = 0;
    int votos_candidato2 = 0;
    int votos_candidato3 = 0;
    int votos_candidato4 = 0;
    int votos_nulos = 0;
    int votos_brancos = 0;
    int total_votos = 0;

    printf("Digite os códigos de voto (1 a 6) ou um código inválido para encerrar:\n");
    printf("1, 2, 3, 4 = Candidatos\n");
    printf("5 = Voto Nulo\n");
    printf("6 = Voto em Branco\n");

    while (scanf("%d", &voto) == 1 && voto >= 1 && voto <= 6) {
        switch (voto) {
            case 1:
                votos_candidato1++;
                break;
            case 2:
                votos_candidato2++;
                break;
            case 3:
                votos_candidato3++;
                break;
            case 4:
                votos_candidato4++;
                break;
            case 5:
                votos_nulos++;
                break;
            case 6:
                votos_brancos++;
                break;
        }
        total_votos++;
    }

    printf("\nResultados da eleição:\n");
    printf("Candidato 1: %d votos\n", votos_candidato1);
    printf("Candidato 2: %d votos\n", votos_candidato2);
    printf("Candidato 3: %d votos\n", votos_candidato3);
    printf("Candidato 4: %d votos\n", votos_candidato4);
    printf("Votos Nulos: %d\n", votos_nulos);
    printf("Votos em Branco: %d\n", votos_brancos);
    printf("Total de votos computados: %d\n", total_votos);

    return 0;
}