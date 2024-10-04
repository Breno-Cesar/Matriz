#include <stdio.h>

float calcularMedia(int matriz[3][3]) {
    int soma = 0;
    int totalElementos = 9;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            soma += matriz[i][j];
        }
    }

    return (float)soma / totalElementos;
}

int main() {
    int A[3][3], B[3][3], C[3][3];

    printf("Digite os elementos da matriz A[3][3]:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nDigite os elementos da matriz B[3][3]:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    printf("\nDigite os elementos da matriz C[3][3]:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("C[%d][%d]: ", i, j);
            scanf("%d", &C[i][j]);
        }
    }

    float mediaA = calcularMedia(A);
    float mediaB = calcularMedia(B);
    float mediaC = calcularMedia(C);

    float somaDasMedias = mediaA + mediaB + mediaC;

    printf("\nA soma das medias das tres matrizes e: %.2f\n", somaDasMedias);

    return 0;
}
