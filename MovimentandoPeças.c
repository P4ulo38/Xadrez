#include <stdio.h>

int main() {
    // Movimento da Torre - FOR
    int i;
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (i = 1; i <= 5; i++) {
        printf("Direita (%d)\n", i);
    }

    // Movimento do Bispo - WHILE
    int j = 1;
    printf("\nMovimento do Bispo (5 casas na diagonal Cima + Direita):\n");
    while (j <= 5) {
        printf("Cima Direita (%d)\n", j);
        j++;
    }

    // Movimento da Rainha - DO-WHILE
    int k = 1;
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    do {
        printf("Esquerda (%d)\n", k);
        k++;
    } while (k <= 8);

    return 0;
}