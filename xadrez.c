#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    int torre = 0, bispo = 0, rainha = 0;

    // Move a rainha 8 casas para a esquerda
    for (rainha; rainha < 8; rainha++) {
        printf("Esquerda\n");
    }
    printf("Rainha se moveu 8 casas para a esquerda\n");

    // Move o bispo 5 casas na diagonal para cima à direita
    do {
        printf("Cima Direita\n");
        bispo++;
    } while (bispo < 5);
    printf("Bispo se moveu 5 casas na diagonal para cima à direita\n");

    // Move a torre 5 casas para a direita
    while (torre < 5) {
        printf("Direita\n");
        torre++;
    }
    printf("Torre se moveu 5 casas para a direita\n");

    return 0;
}

