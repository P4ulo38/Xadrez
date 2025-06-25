#include <stdio.h>

int main() {
    int i = 0;

    while (i < 10) {
        if (i % 2 == 0) { // verifica se é par
            printf("O número %d é par!\n", i); // quebra de linha aqui
        }
        i++; // incrementa
    }

    return 0;
}