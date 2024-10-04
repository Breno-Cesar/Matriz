#include <stdio.h>

int main() {
    float matriz[4][7];
    int linhaMenor, colunaMenor, linhaMinMax, colunaMinMax;
    float menorElemento, minMax;

    printf("Digite os elementos da matriz 4x7:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 7; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }

    menorElemento = matriz[0][0];
    linhaMenor = 0;
    colunaMenor = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 7; j++) {
            if (matriz[i][j] < menorElemento) {
                menorElemento = matriz[i][j];
                linhaMenor = i;
                colunaMenor = j;
            }
        }
    }

    minMax = matriz[linhaMenor][0];
    colunaMinMax = 0;
    for (int j = 1; j < 7; j++) {
        if (matriz[linhaMenor][j] > minMax) {
            minMax = matriz[linhaMenor][j];
            colunaMinMax = j;
        }
    }
    linhaMinMax = linhaMenor;

    printf("\nO elemento MINMAX e: %.2f\n", minMax);
    printf("Posicao do MINMAX: linha %d, coluna %d\n", linhaMinMax, colunaMinMax);

    return 0;
}
