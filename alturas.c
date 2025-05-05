#include <stdio.h>

int main() {

    int n, i, contMenores = 0, idades[10];
    double soma = 0, percentualMenores = 0, media = 0, alturas[10];
    char nomes[10][50];


    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Dados da %da pessoa:\n", i + 1);
        printf("Nome: ");
        scanf(" %49s", nomes[i]);
        printf("Idade: ");
        scanf("%d", &idades[i]);
        printf("Altura: ");
        scanf("%lf", &alturas[i]);
    }

    for (i = 0; i < n; i++) {
        soma += alturas[i];
    }
    media = soma / n;

    for (i = 0; i < n; i++) {
        if (idades[i] < 16) {
            contMenores++;
        }
    }

    percentualMenores = contMenores * 100.0 / n;

    printf("\nAltura media: %.2lf\n", media);
    printf("Pessoas com menos de 16 anos: %d\n", contMenores);
    printf("Percentual de pessoas com menos de 16 anos: %.1lf%%\n", percentualMenores);

    for (i = 0; i < n; i++) {
        if (idades[i] < 16) {
            printf("%s\n", nomes[i]);
        }
    }
    
    return 0;
}