#include <stdio.h>

int main() {
    int matriz[4][4];
    int somaLinha[4];
    int somaColuna[4];
    int somaDiagonalPrincipal = 0;
    int somaDiagonalSecundaria = 0;
    int quadradoMagico = 1;

    printf("Digite os elementos da matriz %dx%d:\n", 4, 4);
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            somaLinha[i] += matriz[i][j];
            somaColuna[j] += matriz[i][j];

            if (i == j) {
                somaDiagonalPrincipal += matriz[i][j];
            }
            if (i + j == 4 - 1) {
                somaDiagonalSecundaria += matriz[i][j];
            }
        }
    }

    for (int i = 1; i < 4; i++) {
        if (somaLinha[i] != somaLinha[0] || somaColuna[i] != somaColuna[0]) {
            quadradoMagico = 0;
            break;
        }
    }

    if (somaDiagonalPrincipal != somaLinha[0] || somaDiagonalSecundaria != somaLinha[0]) {
        quadradoMagico = 0;
    }

    if (quadradoMagico) {
        printf("\nA matriz forma um quadrado magico!\n");
    } else {
        printf("\nA matriz nao forma um quadrado magico.\n");
    }

    return 0;
}
