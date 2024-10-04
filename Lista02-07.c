#include <stdio.h>

int somarMatriz(int matriz[3][3]) {
    int soma = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            soma += matriz[i][j];
        }
    }
    return soma;
}

int menorSomatorio(int somaA, int somaB, int somaC) {
    int menor = somaA;

    if (somaB < menor) {
        menor = somaB;
    }
    if (somaC < menor) {
        menor = somaC;
    }

    return menor;
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

    int somaA = somarMatriz(A);
    int somaB = somarMatriz(B);
    int somaC = somarMatriz(C);

    int menorSoma = menorSomatorio(somaA, somaB, somaC);

    printf("\nO menor somatorio entre as tres matrizes e: %d\n", menorSoma);

    return 0;
}
