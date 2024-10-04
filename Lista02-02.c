#include <stdio.h>

int verificarElementos(int A[3][3], int V[3]) {
    int elementoLocalizado;

    for (int i = 0; i < 3; i++) {
        elementoLocalizado = 0;

        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                if (A[j][k] == V[i]) {
                    elementoLocalizado = 1;
                    break;
                }
            }
            if (elementoLocalizado) {
                break;
            }
        }

        if (!elementoLocalizado) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int A[3][3], V[3];

    printf("Digite os elementos da matriz A[3][3]:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nDigite os elementos do vetor V[3]:\n");
    for (int i = 0; i < 3; i++) {
        printf("V[%d]: ", i);
        scanf("%d", &V[i]);
    }

    int resultado = verificarElementos(A, V);

    if (resultado == 1) {
        printf("\nTodos os elementos de V estao contidos na matriz A.\n");
    } else {
        printf("\nNem todos os elementos de V estao contidos na matriz A.\n");
    }

    return 0;
}
