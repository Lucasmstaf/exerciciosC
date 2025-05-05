#include <stdio.h>

int main() {

    int n, i, negativos[10];

    printf("Quantos numeros voce vai digitar?\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Digite um numero:");
        scanf("%d", &negativos[i]);
    }

    printf("NUMEROS NEGATIVOS:\n");

    for (i = 1; i <= n; i++) {
        if (negativos[i] < 0) {
            printf("%d\n", negativos[i]);
        }
    }

    return 0;
}