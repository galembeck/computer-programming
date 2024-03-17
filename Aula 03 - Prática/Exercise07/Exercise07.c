#include <stdio.h>
#include <stdlib.h>

/* Exercício 07:
    Um sistema de equações lineares da forma:
        ax + by = c
        dx + ey = f
    pode ser resolvido utilizando-se as seguintes fórmulas:
        x = (ce - bf)/(ae - bd) e y = (af - cd)/(ae - bd)

    Repetir várias vezes a leitura do conjunto de coeficientes (a, b, c, d, e, f) e imprimir a solução x e y.

    Antes de efetuar a divisão, verificar se ela pode ser feita. Em caso negativo, imprimir uma mensagem de que o
    sistema não tem solução.
    A repetição de leitura deve ser interrompida com a leitura de a, b, c, d iguais a zero).
*/

int main() {
    float a, b, c, d, e, f, x, y;

    printf("\n Insert the value of the coefficient \"A\" of the system: ");
    scanf("%d", &a);
    printf("\n Insert the value of the coefficient \"B\" of the system: ");
    scanf("%d", &b);
    printf("\n Insert the value of the coefficient \"C\" of the system: ");
    scanf("%d", &c);
    printf("\n Insert the value of the coefficient \"D\" of the system: ");
    scanf("%d", &d);
    printf("\n Insert the value of the coefficient \"E\" of the system: ");
    scanf("%d", &e);
    printf("\n Insert the value of the coefficient \"F\" of the system: ");
    scanf("%d", &f);

    while((a != 0) || (b != 0) || (c != 0) || (d != 0) || (e != 0) || (f != 0)) {
        if((a*e - b*d) != 0) {
            x = (c*e - b*f)/(a*e - b*d);
            y = (a*f - c*d)/(a*e - b*d);

            printf("\n\n x = %d and y = %d", x, y);
        } else {
            printf("\n\n System without solution.");
        }

        printf("\n Insert the value of the coefficient \"A\" of the system: ");
        scanf("%d", &a);
        printf("\n Insert the value of the coefficient \"B\" of the system: ");
        scanf("%d", &b);
        printf("\n Insert the value of the coefficient \"C\" of the system: ");
        scanf("%d", &c);
        printf("\n Insert the value of the coefficient \"D\" of the system: ");
        scanf("%d", &d);
        printf("\n Insert the value of the coefficient \"E\" of the system: ");
        scanf("%d", &e);
        printf("\n Insert the value of the coefficient \"F\" of the system: ");
        scanf("%d", &f);
    }

    system("pause");
    return 0;
}
