#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Função recursiva para mover a rainha
void moverRainha(int passo, int total) {
    if (passo < total) {
        printf("Esquerda\n");
        moverRainha(passo + 1, total);
    } else {
        printf("Rainha se moveu %d casas para a esquerda\n\n", total);
    }
}

// Função recursiva com loops aninhados para mover o bispo
void moverBispo(int vertical, int totalVertical, int totalHorizontal) {
    if (vertical < totalVertical) {
        for (int i = 0; i < totalHorizontal; i++) {
            printf("Cima Direita\n");
        }
        moverBispo(vertical + 1, totalVertical, totalHorizontal);
    } else {
        printf("Bispo se moveu %d casas na diagonal para cima à direita\n\n", totalVertical);
    }
}

// Função recursiva para mover a torre
void moverTorre(int passo, int total) {
    if (passo < total) {
        printf("Direita\n");
        moverTorre(passo + 1, total);
    } else {
        printf("Torre se moveu %d casas para a direita\n\n", total);
    }
}

int main() {
    // Declaração das variáveis para controle de movimento
    int movRainha = 8;
    int movBispoVertical = 5, movBispoHorizontal = 1;
    int movTorre = 5;
    int movCavaloVertical = 2, movCavaloHorizontal = 1;

    printf("Movimentação da Rainha:\n\n");
    moverRainha(0, movRainha);

    printf("Movimentação do Bispo:\n\n");
    moverBispo(0, movBispoVertical, movBispoHorizontal);

    printf("Movimentação da Torre:\n\n");
    moverTorre(0, movTorre);

    printf("Movimentação do Cavalo:\n\n");

    int i, j;

    // Loop externo controla o movimento vertical (2 casas para cima)
    for (i = 0; i < movCavaloVertical; i++) {
        printf("Cima\n");

        // Quando chegar ao último movimento vertical, faz o movimento horizontal
        if (i == movCavaloVertical - 1) {
            for (j = 0; j < movCavaloHorizontal; j++) {
                if (j == 0) {
                    printf("Direita\n");
                    break; // encerra o movimento em L
                }
            }
        }
    }

    printf("Cavalo se moveu em L (2 casas para cima e 1 para a direita)\n");

    return 0;
}
