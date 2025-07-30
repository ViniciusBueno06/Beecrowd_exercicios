#include <stdio.h>

int main() {
    int N, quantia, total = 0;
    int coelhos = 0, ratos = 0, sapos = 0;
    char tipo;
    double perc_coelhos,perc_ratos,perc_sapos;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d %c", &quantia, &tipo);
        total += quantia;

        if (tipo == 'C') {
            coelhos += quantia;
        } else if (tipo == 'R') {
            ratos += quantia;
        } else if (tipo == 'S') {
            sapos += quantia;
        }
    }

    perc_coelhos = (coelhos * 100.0) / total;
    perc_ratos = (ratos * 100.0) / total;
    perc_sapos = (sapos * 100.0) / total;

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", coelhos);
    printf("Total de ratos: %d\n", ratos);
    printf("Total de sapos: %d\n", sapos);
    printf("Percentual de coelhos: %.2lf %%\n", perc_coelhos);
    printf("Percentual de ratos: %.2lf %%\n", perc_ratos);
    printf("Percentual de sapos: %.2lf %%\n", perc_sapos);

    return 0;
}