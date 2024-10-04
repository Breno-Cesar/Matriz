#include <stdio.h>

int elementoMaiorFrequencia(int A[3][3]) {
    int frequencia[9];
    int valores[9];
    int contagemValores = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int elemento = A[i][j];
            int encontrado = 0;

            for (int k = 0; k < contagemValores; k++) {
                if (valores[k] == elemento) {
                    frequencia[k]++;
                    encontrado = 1;
                    break;
                }
            }

            if (!encontrado) {
                valores[contagemValores] = elemento;
                frequencia[contagemValores]++;
                contagemValores++;
            }
        }
    }

    int maiorFrequencia = frequencia[0];
    int elementoMaisFrequente = valores[0];

    for (int i = 1; i < contagemValores; i++) {
        if (frequencia[i] > maiorFrequencia) {
            maiorFrequencia = frequencia[i];
            elementoMaisFrequente = valores[i];
        }
    }

    return elementoMaisFrequente;
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

    int resultado = elementoMaiorFrequencia(A);

    printf("\nO elemento de maior frequencia na matriz e: %d\n", resultado);

    return 0;
}
