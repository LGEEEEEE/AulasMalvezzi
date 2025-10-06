#include <stdio.h>

int main() {
    float pesoSacoKg, racaoPorGato;
    float pesoSacoGramas, totalConsumido, restante;

    // Entrada de dados
    printf("Digite o peso do saco de racao (em kg): ");
    scanf("%f", &pesoSacoKg);

    printf("Digite a quantidade de racao fornecida para cada gato por dia (em gramas): ");
    scanf("%f", &racaoPorGato);

    // Converte o saco de ração de kg para gramas
    pesoSacoGramas = pesoSacoKg * 1000;

    // Consumo total em 5 dias (2 gatos, cada um consumindo a mesma quantidade por dia)
    totalConsumido = 2 * racaoPorGato * 5;

    // Ração restante
    restante = pesoSacoGramas - totalConsumido;

    // Saída
    printf("\nRacao restante apos 5 dias: %.2f gramas\n", restante);

    return 0;
}
