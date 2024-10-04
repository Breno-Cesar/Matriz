#include <stdio.h>

int main() {
    int matriz[6][4], segundaMatriz[6][4];
    int contadorMaiorQue30 = 0;

    printf("Digite os elementos da matriz 6x4:\n");
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            if (matriz[i][j] > 30) {
                contadorMaiorQue30++;
            }

            if (matriz[i][j] == 30) {
                segundaMatriz[i][j] = 0;
            } else {
                segundaMatriz[i][j] = matriz[i][j];
            }
        }
    }

    printf("\nQuantidade de elementos maiores que 30: %d\n", contadorMaiorQue30);

    printf("\nSegunda matriz:\n");
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", segundaMatriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
