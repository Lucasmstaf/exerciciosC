#include <stdio.h>

int main() {

    int i, j, n, m;
    double matriz[10][10]; 

    printf("Digite o numero de linhas da matriz: ");
    scanf("%d", &n);
    printf("Digite o numero de colunas da matriz: ");
    scanf("%d", &m);

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("Digite o elemento [%d][%d]: ", i, j);
            scanf("%lf", &matriz[i][j]);
        }
    }

    printf("Vetor Gerado: \n");

    for (i = 0; i < n; i++) {
        int soma = 0;
        for (j = 0; j < m; j++) {
            soma += matriz[i][j];
        }
        printf("Soma da linha %d: %d\n", i, soma);
    }

    return 0;
}