#include <stdio.h>

int main() {
    int matriz[10][20], somaLinhas[10];

    printf("Digite os elementos da matriz 10x20:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 20; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 10; i++) {
        somaLinhas[i] = 0;
        for (int j = 0; j < 20; j++) {
            somaLinhas[i] += matriz[i][j];
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 20; j++) {
            matriz[i][j] *= somaLinhas[i];
        }
    }

    printf("\nMatriz resultante apos multiplicacao pelas somas das linhas:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 20; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
