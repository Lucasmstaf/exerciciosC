#include <stdio.h>

int main() {
    
    int a, b;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    if (a > b) {
        printf("Decrescente.\n");
    } else if (b > a) {
        printf("Crescente.\n");
    } else {
        printf("Iguais.\n");
    }
     
    while (a != b)
    {
        printf("Digite o primeiro numero: ");
        scanf("%d", &a);

        printf("Digite o segundo numero: ");
        scanf("%d", &b);

        if (a > b) {
            printf("Decrescente.\n");
        } else if (b > a) {
            printf("Crescente.\n");
        } else {
            printf("Iguais.\n");
        }
    }
     
    return 0;
}