#include <stdio.h>
#include <string.h>

int main() 
{
    int idade;
    double salario, altura;
    char nome[50];
    char genero;

    printf("Digite sua idade: ");   
    scanf("%d", &idade);
    printf("Digite seu salario: ");
    scanf("%lf", &salario);
    printf("Digite sua altura: ");
    scanf("%lf", &altura);
    printf("Digite seu nome: ");
    scanf(" %[^\n]", nome); 
    printf("Digite seu genero (M/F): ");
    scanf(" %c", &genero);

    printf("\nIdade: %d\n", idade);
    printf("Salario: %.2lf\n", salario);
    printf("Altura: %.2lf\n", altura);
    printf("Nome: %s\n", nome);
    printf("Genero: %c\n", genero);

    return 0;
}