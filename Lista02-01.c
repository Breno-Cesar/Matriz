#include <stdio.h>

int contarFrequencia(int A[3][3], int X) {
    int cont = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (A[i][j] == X) {
                cont++;
            }
        }
    }

    return cont;
}

int main() {
    int A[3][3], X;

    printf("Digite os elementos da matriz A[3][3]:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nDigite o valor de X para buscar na matriz: ");
    scanf("%d", &X);

    int contagem = contarFrequencia(A, X);

    printf("\nO valor %d aparece %d vez(es) na matriz.\n", X, contagem);

    return 0;
}
