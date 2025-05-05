#include <stdio.h>

int main() {

    int idade, qtd;
    double media;

    qtd = 0;
    media = 0.0;
    idade = 0;

    while (idade >= 0) {
        printf("Digite as idades: ");
        scanf("%d", &idade);
        if (idade >= 0) {
            media += idade;
            qtd++;     
        }
    }

    if (media > 0) {
        media /= qtd;
        printf("A media das idades e: %.2f\n", media);
    } else {
        printf("Impossivel calcular a media\n");
    }

    return 0;
}