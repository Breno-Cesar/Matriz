#include <stdio.h>

int colunaMaiorSoma(int A[3][3]) {
    int somaColunas[3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            somaColunas[j] += A[i][j];
        }
    }

    int indiceMaiorSoma = 0;
    int maiorSoma = somaColunas[0];

    for (int i = 1; i < 3; i++) {
        if (somaColunas[i] > maiorSoma) {
            maiorSoma = somaColunas[i];
            indiceMaiorSoma = i;
        }
    }

    return indiceMaiorSoma;
}

int main() {
    int A[3][3];

    printf("Digite os elementos da matriz A[3][3]:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    int indiceColuna = colunaMaiorSoma(A);

    printf("\nO indice da coluna com o maior somatorio e: %d\n", indiceColuna);

    return 0;
}
