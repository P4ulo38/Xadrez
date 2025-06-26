#include <stdio.h>

// Função recursiva: Torre (Direita)
void moverTorre(int casasRestantes) {
    if (casasRestantes == 0) return;
    printf("Direita\n");
    moverTorre(casasRestantes - 1);
}

// Função recursiva: Rainha (Esquerda)
void moverRainha(int casasRestantes) {
    if (casasRestantes == 0) return;
    printf("Esquerda\n");
    moverRainha(casasRestantes - 1);
}

// Função recursiva com loop aninhado: Bispo (Diagonal Cima + Direita)
void moverBispo(int vertical, int horizontal) {
    if (vertical == 0 || horizontal == 0) return;

    for (int i = 0; i < vertical; i++) {
        for (int j = 0; j < horizontal; j++) {
            if (i == j) {
                printf("Cima Direita\n");
            }
        }
    }

    moverBispo(vertical - 1, horizontal - 1);
}

// Movimento complexo: Cavalo (2 cima + 1 direita), com loops múltiplos e controle de fluxo
void moverCavalo() {
    int linhas = 2;
    int colunas = 1;
    int movimentos = 0;

    printf("\nMovimento do Cavalo (2 casas cima, 1 direita):\n");

    for (int i = 0; i < linhas + colunas; i++) {
        for (int j = 0; j < 2; j++) {
            if (i < 2) {
                printf("Cima\n");
                movimentos++;
            } else if (i == 2 && j == 0) {
                printf("Direita\n");
                movimentos++;
                break; // Sai após uma casa para a direita
            } else {
                continue;
            }
        }
    }
}

int main() {
    printf("Movimento da Torre (5 casas para Direita):\n");
    moverTorre(5);

    printf("\nMovimento da Rainha (8 casas para Esquerda):\n");
    moverRainha(8);

    printf("\nMovimento do Bispo (5 casas Diagonal Cima + Direita):\n");
    moverBispo(5, 5);

    moverCavalo();

    return 0;
}