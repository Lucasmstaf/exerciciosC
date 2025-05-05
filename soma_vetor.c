#include <stdio.h>

int main() {

    int N, i;
    double soma = 0.0, media = 0.0, vet[10];

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
    }

    for (i = 0; i < N; i++) {
        soma += vet[i];
    }
    
    media = soma / N;   

    printf("\nVALORES = ");
    for (i = 0; i < N; i++) {
        printf("%.1lf ", vet[i]);
    }
    printf("\n");
    printf("SOMA = %.2lf\n", soma);
    printf("MEDIA = %.2lf\n", media);

    return 0;
}