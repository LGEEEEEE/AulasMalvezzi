#include <stdio.h>

int main() {
    int pes;
    int polegada, jarda, milha;

    // Pede a medida em pés para o usuário
    printf("Digite a medida em pés: ");
    scanf("%d", &pes);

    // Faz as conversões
    polegada = pes * 12;         // 1 pé = 12 polegadas
    jarda = pes / 3;             // 1 jarda = 3 pés
    milha = jarda / 1760;        // 1 milha = 1760 jardas

    // Mostra os resultados
    printf("Medida convertida:\n");
    printf("%d pés equivalem a %d polegadas\n", pes, polegada);
    printf("%d pés equivalem a %d jardas\n", pes, jarda);
    printf("%d pés equivalem a %d milhas\n", pes, milha);

    return 0;
}
