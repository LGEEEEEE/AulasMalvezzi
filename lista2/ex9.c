#include <stdio.h>
#include <time.h>
#include <string.h>

int main() {
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    char *meses[] = {"janeiro", "fevereiro", "marco", "abril", "maio", "junho", "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};

    printf("Data e hora do sistema:\n");
    printf("%02d/%02d/%d - %s e %02d:%02d\n", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900, meses[tm.tm_mon], tm.tm_hour, tm.tm_min);

    return 0;
}