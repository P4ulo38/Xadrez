// Movimento do Cavalo - FOR + WHILE aninhado
#include <stdio.h>

int main() {
    int i;

    // Movimento da Torre - FOR
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

    // Movimento do Cavalo - FOR + WHILE
    printf("\nMovimento do Cavalo (2 casas para baixo e 1 para a esquerda):\n");

    const int movimentos_para_baixo = 2;
    const int movimentos_para_esquerda = 1;

    for (i = 1; i <= movimentos_para_baixo; i++) {
        printf("Baixo (%d)\n", i);

        // Dentro de cada passo "Baixo", executa a etapa para a esquerda uma única vez
        int esquerda_realizada = 0;
        while (esquerda_realizada < 1 && i == movimentos_para_baixo) {
            printf("Esquerda (1)\n");
            esquerda_realizada++;
        }
    }

    return 0;
}