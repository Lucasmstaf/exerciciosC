#include <stdio.h>

int main() {

    double large, length, area, price, total_price;

    printf("Digite a largura do terreno: ");
    scanf("%lf", &large);

    printf("Digite o comprimento do terreno: ");
    scanf("%lf", &length);
    
    printf("Digite o valor do metro quadrado: ");
    scanf("%lf", &price);

    area = large * length;
    total_price = area * price;

    printf("Area do terreno: %.2lf\n", area);
    printf("Preco total do terreno: %.2lf\n", total_price);

    return 0;    
}