#include <stdio.h>

#define TAMANHO 8

int main() {
    int matriz[TAMANHO][TAMANHO];
    int Simetrico = 1;

    printf("Digite os elementos da matriz 8x8:\n");
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            if (matriz[i][j] != matriz[j][i]) {
                Simetrico = 0;
                break;
            }
        }
        if (!Simetrico) {
            break;
        }
    }

    // Exibindo o resultado
    if (Simetrico) {
        printf("\nA matriz e simetrica.\n");
    } else {
        printf("\nA matriz nao e simetrica.\n");
    }

    return 0;
}
