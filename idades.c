#include <stdio.h>

int main() {

    char nome1[50], nome2[50];
    int idade1, idade2;
    double mediaIdade;

    printf("Digite os dados da primeira pessoa: ");
    scanf(" %[^\n]", nome1);
    printf("Digite a idade da primeira pessoa: ");
    scanf("%d", &idade1);

    printf("Digite os dados da segunda pessoa: ");
    scanf(" %[^\n]", nome2);
    printf("Digite a idade da segunda pessoa: ");
    scanf("%d", &idade2);

    mediaIdade = (idade1 + idade2) / 2.0;

    printf("A media de idade entre %s e %s eh: %.1lf\n", nome1, nome2, mediaIdade);

    return 0;
}