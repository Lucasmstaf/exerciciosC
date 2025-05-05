#include <stdio.h>
#include <math.h>

int main() {

    int x, y, i, troca, soma = 0;
    
    printf("Digite dois numeros inteiros:\n");
    scanf("%d %d", &x, &y);

    if (x > y) {
        troca = x;
        x = y;
        y = troca;
    }

    for (i = x+1; i < y; i++) {
        if (i % 2 != 0) {
            soma += i;
        }
    }

    printf("A soma dos numeros impares entre %d e %d e: %d\n", x, y, soma);

    return 0;
}