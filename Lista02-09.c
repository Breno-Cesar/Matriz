#include <stdio.h>

int encontrarMaiorElemento(int M[2][2]) {
    int maior = M[0][0];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if (M[i][j] > maior) {
                maior = M[i][j];
            }
        }
    }

    return maior;
}

int main() {
    int M[2][2], R[2][2];

    printf("Digite os elementos da matriz M[2][2]:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("M[%d][%d]: ", i, j);
            scanf("%d", &M[i][j]);
        }
    }

    int maiorElemento = encontrarMaiorElemento(M);

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            R[i][j] = M[i][j] * maiorElemento;
        }
    }

    printf("\nMatriz resultante R, multiplicada pelo maior elemento (%d):\n", maiorElemento);
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("R[%d][%d] = %d\n", i, j, R[i][j]);
        }
    }

    return 0;
}
