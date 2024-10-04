#include <stdio.h>

int main() {
    int matriz[5][7];
    int pontoDeSela = 0;

    printf("Digite os elementos da matriz 5x7:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 7; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 5; i++) {
        int menorElementoLinha = matriz[i][0];
        int colunaMenorElemento = 0;
        for (int j = 1; j < 7; j++) {
            if (matriz[i][j] < menorElementoLinha) {
                menorElementoLinha = matriz[i][j];
                colunaMenorElemento = j;
            }
        }

        int maiorElementoColuna = menorElementoLinha;
        for (int k = 0; k < 5; k++) {
            if (matriz[k][colunaMenorElemento] > maiorElementoColuna) {
                maiorElementoColuna = matriz[k][colunaMenorElemento];
            }
        }

        if (maiorElementoColuna == menorElementoLinha) {
            printf("\nPonto de sela encontrado no valor %d, na posicao [%d][%d].\n",
                   menorElementoLinha, i, colunaMenorElemento);
            pontoDeSela = 1;
        }
    }

    if (!pontoDeSela) {
        printf("\nNenhum ponto de sela encontrado na matriz.\n");
    }

    return 0;
}
