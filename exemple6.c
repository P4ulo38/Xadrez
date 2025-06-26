#include <stdio.h>

void recursivo(int numero) {
    if (numero > 0) {
        printf("%d \n ", numero);
        // Chamada recursiva
        recursivo(numero - 1);
    }
}

int main() {

    // Exemplo de contagem regressiva usando recursão
    int quantidade = 10;

    printf("Contagem regressiva...\n");
    recursivo(quantidade);

    return 0;
}