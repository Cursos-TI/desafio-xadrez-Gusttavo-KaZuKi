#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Declaração das variáveis para controle dos movimentos
    int torre = 0, bispo = 0, rainha = 0;
    int movRainha = 8, movBispo = 5, movTorre = 5;
    int movCavaloVertical = 2, movCavaloHorizontal = 1;
    int i = 0, j = 0;

    printf("Movimentação da Rainha:\n\n");

    // Move a rainha 8 casas para a esquerda
    for (rainha = 0; rainha < movRainha; rainha++) {
        printf("Esquerda\n");
    }
    printf("Rainha se moveu %d casas para a esquerda\n\n", movRainha);


    printf("Movimentação do Bispo:\n\n");

    // Move o bispo 5 casas na diagonal superior direita (usando do...while)
    do {
        printf("Cima Direita\n");
        bispo++;
    } while (bispo < movBispo);
    printf("Bispo se moveu %d casas na diagonal para cima à direita\n\n", movBispo);

    printf("Movimentação da Torre:\n\n");

    // Move a torre 5 casas para a direita
    while (torre < movTorre) {
        printf("Direita\n");
        torre++;
    }
    printf("Torre se moveu %d casas para a direita\n\n", movTorre);

    // Move o cavalo em L (2 casas para baixo e 1 para a esquerda)
    printf("Movimentação do Cavalo:\n");

    // Loop aninhado para movimento em L do cavalo
    for (i = 0; i < movCavaloVertical; i++) {
        printf("Baixo\n");
        if (i == movCavaloVertical - 1) {  // Após completar o movimento vertical
            for (j = 0; j < movCavaloHorizontal; j++) {
                printf("Esquerda\n");
            }
        }
    }

    printf("Cavalo se moveu em L (2 casas para baixo e 1 para a esquerda)\n");

    return 0;
}
