#include <stdio.h>


int main() {
    int matriz[7][7];
    int maiorLinha[7];
    int menorColuna[7];

    printf("Digite os elementos da matriz %dx%d:\n", 7, 7);
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 7; i++) {
        maiorLinha[i] = matriz[i][0];
        for (int j = 1; j < 7; j++) {
            if (matriz[i][j] > maiorLinha[i]) {
                maiorLinha[i] = matriz[i][j];
            }
        }
    }

    for (int j = 0; j < 7; j++) {
        menorColuna[j] = matriz[0][j];
        for (int i = 1; i < 7; i++) {
            if (matriz[i][j] < menorColuna[j]) {
                menorColuna[j] = matriz[i][j];
            }
        }
    }

    printf("\nMatriz 7x7:\n");
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nMaior elemento de cada linha:\n");
    for (int i = 0; i < 7; i++) {
        printf("%d ", maiorLinha[i]);
    }
    printf("\n");

    printf("\nMenor elemento de cada coluna:\n");
    for (int j = 0; j < 7; j++) {
        printf("%d ", menorColuna[j]);
    }
    printf("\n");

    return 0;
}
