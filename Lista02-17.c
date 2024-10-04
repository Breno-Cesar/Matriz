#include <stdio.h>

#define LINHAS 15
#define COLUNAS 5

int main() {
    int matriz[LINHAS][COLUNAS];
    int contador[LINHAS * COLUNAS] = {0};
    int valores[LINHAS * COLUNAS];
    int totalElementos = 0;

    printf("Digite os elementos da matriz %dx%d:\n", LINHAS, COLUNAS);
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            int jaExiste = 0;
            for (int k = 0; k < totalElementos; k++) {
                if (valores[k] == matriz[i][j]) {
                    contador[k]++;
                    jaExiste = 1;
                    break;
                }
            }

            if (!jaExiste) {
                valores[totalElementos] = matriz[i][j];
                contador[totalElementos] = 1;
                totalElementos++;
            }
        }
    }

    printf("\nValores repetidos e suas ocorrências:\n");
    for (int i = 0; i < totalElementos; i++) {
        if (contador[i] > 1) {
            printf("Valor %d se repete %d vezes\n", valores[i], contador[i]);
        }
    }

    return 0;
}
