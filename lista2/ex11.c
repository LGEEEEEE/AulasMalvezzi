#include <stdio.h>

int main() {
    int hora_inicio, minuto_inicio;
    int hora_fim, minuto_fim;
    int duracao_horas, duracao_minutos;

    printf("Digite a hora e minuto de inicio do jogo (hh mm): ");
    scanf("%d %d", &hora_inicio, &minuto_inicio);

    printf("Digite a hora e minuto do final do jogo (hh mm): ");
    scanf("%d %d", &hora_fim, &minuto_fim);

    // Converte tudo para minutos para facilitar o calculo
    int total_minutos_inicio = hora_inicio * 60 + minuto_inicio;
    int total_minutos_fim = hora_fim * 60 + minuto_fim;
    int duracao_total_minutos;

    if (total_minutos_fim >= total_minutos_inicio) {
        duracao_total_minutos = total_minutos_fim - total_minutos_inicio;
    } else {
        // Jogo termina no dia seguinte
        duracao_total_minutos = (24 * 60 - total_minutos_inicio) + total_minutos_fim;
    }

    duracao_horas = duracao_total_minutos / 60;
    duracao_minutos = duracao_total_minutos % 60;

    printf("\nA duracao do jogo foi de %d horas e %d minutos.\n", duracao_horas, duracao_minutos);

    return 0;
}