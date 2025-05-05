#include <stdio.h>

int main() {

    int a, b, c, menor;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    printf("Digite o terceiro numero: ");
    scanf("%d", &c);

    if (a < b && a < c) {
        menor = a;
    } else if (b < c) {
        menor = b;
    } else {
        menor = c;
    }

    printf("Menor numero: %d\n", menor);

    return 0;
}