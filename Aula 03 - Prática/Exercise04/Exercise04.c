#include <stdio.h>
#include <stdlib.h>

/* Exercício 04:
    Escreva um programa que calcule "X" elevado a "n".
    Considere que n é um valor inteiro não negativo.

    Obs: não utilize a biblioteca <math.h>.
*/

int main() {
    int base, exponent;
    int power = 1;

    printf("\n Insert the base to be used in the operation: ");
    scanf("%d", &base);
    printf("\n Insert the exponent to be used in the operation: ");
    scanf("%d", &exponent);

    while (exponent > 0) {
        power = power * base;
        exponent--;
    }

    printf("\n The number %d raised to %d is: %d.\n\n", base, exponent, power);

    system("pause");
    return 0;
}
