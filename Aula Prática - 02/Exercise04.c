#include <stdio.h>
#include <stdlib.h>

/* Exerc�cio 04:
    Fa�a um programa que pe�a um valor e mostre na tela se o valor �
    positivo, negativo ou nulo.
*/

int main() {
    float number;

    printf("\n Insert any number (positive, negative or null): ");
    scanf("%f", &number);

    printf("\n\n The number inserted was: %.1f.", number);

    if (number > 0) {
        printf("\n It is positive.\n\n");
    } else if (number < 0) {
        printf("\n It is negative.\n\n");
    } else if (number == 0) {
        printf("\n It is null.\n\n");
    }

    system("pause");
    return 0;
}
