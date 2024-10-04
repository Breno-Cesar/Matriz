#include <stdio.h>

float calcularMedia(int A[3][3]) {
    int soma = 0;
    int totalElementos = 9;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            soma += A[i][j];
        }
    }

    return (float)soma / totalElementos;
}

int contarAbaixoDaMedia(int A[3][3], float media) {
    int contador = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (A[i][j] < media) {
                contador++;
            }
        }
    }

    return contador;
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

    int abaixoDaMedia = contarAbaixoDaMedia(A, media);

    printf("\nA media dos elementos da matriz A e: %.2f\n", media);
    printf("Total de elementos abaixo da media: %d\n", abaixoDaMedia);

    return 0;
}
