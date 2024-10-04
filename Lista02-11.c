#include <stdio.h>

int main() {
    char lojas[8][50];
    char produtos[4][50];
    float precos[8][4];

    printf("Digite os nomes das 8 lojas:\n");
    for (int i = 0; i < 8; i++) {
        printf("Nome da loja %d: ", i + 1);
        scanf(" %[^\n]", lojas[i]);
    }

    printf("\nDigite os nomes dos 4 produtos:\n");
    for (int i = 0; i < 4; i++) {
        printf("Nome do produto %d: ", i + 1);
        scanf(" %[^\n]", produtos[i]);
    }

    printf("\nDigite os precos de cada produto em cada loja:\n");
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Preco do produto '%s' na loja '%s': R$ ", produtos[j], lojas[i]);
            scanf("%f", &precos[i][j]);
        }
    }

    printf("\nProdutos com preco abaixo de R$ 120,00:\n");
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 4; j++) {
            if (precos[i][j] <= 120.00) {
                printf("Produto '%s' na loja '%s' tem preco R$ %.2f\n", produtos[j], lojas[i], precos[i][j]);
            }
        }
    }

    return 0;
}
