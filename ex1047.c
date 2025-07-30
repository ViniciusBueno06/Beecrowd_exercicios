#include <stdio.h>

int main() {
    
    int h_inicio, m_inicio, h_fim, m_fim;
    int duracao_horas, duracao_minutos;
    scanf("%d %d %d %d", &h_inicio, &m_inicio, &h_fim, &m_fim);
    int inicio_total_minutos = h_inicio * 60 + m_inicio;
    int fim_total_minutos = h_fim * 60 + m_fim;
    if (fim_total_minutos <= inicio_total_minutos) {
        fim_total_minutos += 24 * 60;
    }
    int duracao_total_minutos = fim_total_minutos - inicio_total_minutos;
    duracao_horas = duracao_total_minutos / 60;
    duracao_minutos = duracao_total_minutos % 60;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duracao_horas, duracao_minutos);
    return 0;
    
}