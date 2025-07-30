#include <stdio.h>
int main() {
    int h_inicio, h_fim, duracao;
    scanf("%d %d", &h_inicio, &h_fim);
    if (h_inicio<h_fim){
        duracao=h_fim-h_inicio;
    } else {
        duracao = 24-h_inicio+h_fim;
    }
    printf("O JOGO DUROU %d HORA(S)\n", duracao);
    return 0;
}