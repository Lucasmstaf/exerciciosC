#include <stdio.h>
#include <math.h>


int main() {
    double a, b, c, delta, x1, x2;

    printf("Digite o coeficiente a: ");
    scanf("%lf", &a);
    printf("Digite o coeficiente b: ");
    scanf("%lf", &b);
    printf("Digite o coeficiente c: ");
    scanf("%lf", &c);

    delta = b * b - 4 * a * c;

    if (delta < 0) {
        printf("Nao existem raizes reais\n");
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("Raiz unica: %.4lf\n", x1);
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Raiz 1: %.4lf\n", x1);
        printf("Raiz 2: %.4lf\n", x2);
    }

    return 0;
}