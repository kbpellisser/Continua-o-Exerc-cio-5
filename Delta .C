#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta, x1, x2;

    printf("Digite o coeficiente 'a': ");
    scanf("%f", &a);

    if (a == 0) {
        printf("Não é uma equação de segundo grau.\n");
    } else {
        printf("Digite o coeficiente 'b': ");
        scanf("%f", &b);
        printf("Digite o coeficiente 'c': ");
        scanf("%f", &c);

        delta = b * b - 4 * a * c;

        if (delta < 0) {
            printf("Não existe raiz real.\n");
        } else if (delta == 0) {
            x1 = -b / (2 * a);
            printf("Raiz única: x = %.2f\n", x1);
        } else {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Duas raízes reais: x1 = %.2f e x2 = %.2f\n", x1, x2);
        }
    }

    return 0;
}
