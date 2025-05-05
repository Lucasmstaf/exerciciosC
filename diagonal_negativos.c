#include <stdio.h>

int main() {
    
    int matriz[3][3], i, j, n, cont = 0;

    printf("Qual e a ordem da matriz? \n");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Diagonal principal: \n");

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == j) {
                printf("%d ", matriz[i][j]);
            }
            if (matriz[i][j] < 0) {
                cont++;
            }
        }
    }
    printf("\nQuantidade de elementos negativos: %d\n", cont);

    return 0;
}