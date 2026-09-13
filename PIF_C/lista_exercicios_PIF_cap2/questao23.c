#include <stdio.h>

int main() {
    int hora, min, seg, duracao;
    int tempo_total, f_hora, f_min, f_seg;
    
    printf("Digite o horario de inicio (hh mm ss): ");
    scanf("%d %d %d", &hora, &min, &seg);
    
    printf("Digite a duracao da experiencia (em segundos): ");
    scanf("%d", &duracao);
    
    tempo_total = (hora * 3600) + (min * 60) + seg + duracao;
    
    // Operacoes estruturadas baseadas nos restos de divisoes para relogio
    f_hora = (tempo_total / 3600) % 24;
    f_min = (tempo_total / 60) % 60;
    f_seg = tempo_total % 60;
    
    printf("Horario de termino: %02d:%02d:%02d\n", f_hora, f_min, f_seg);
    
    return 0;
}
