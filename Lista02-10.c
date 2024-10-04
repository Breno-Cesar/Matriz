#include <stdio.h>

int main() {
    int notas[10][3];
    int menorNotaProva[3];

    for (int i = 0; i < 10; i++) {
        printf("Digite as notas do aluno %d:\n", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("Nota da prova %d: ", j + 1);
            scanf("%d", &notas[i][j]);
        }
    }

    printf("\nRelatorio de menores notas:\n");
    for (int i = 0; i < 10; i++) {
        int menorNota = notas[i][0];
        int provaMenorNota = 0;

        for (int j = 1; j < 3; j++) {
            if (notas[i][j] < menorNota) {
                menorNota = notas[i][j];
                provaMenorNota = j;
            }
        }

        printf("Aluno %d: menor nota na prova %d\n", i + 1, provaMenorNota + 1);

        menorNotaProva[provaMenorNota]++;
    }

    printf("\nTotal de alunos com a menor nota em cada prova:\n");
    printf("Prova 1: %d alunos\n", menorNotaProva[0]);
    printf("Prova 2: %d alunos\n", menorNotaProva[1]);
    printf("Prova 3: %d alunos\n", menorNotaProva[2]);

    return 0;
}
