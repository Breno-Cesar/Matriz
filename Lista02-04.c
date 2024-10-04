#include <stdio.h>

float calcularMedia(int A[3][3]) {
    int soma = 0;
    int totalElementos = 9;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            soma += A[i][j];
        }
    }

    float media = (float)soma / totalElementos;

    return media;
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

    float media = calcularMedia(A);

    printf("\nA media dos elementos da matriz A e: %.2f\n", media);

    return 0;
}
