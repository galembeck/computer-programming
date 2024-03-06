#include <stdio.h>
#include <stdlib.h>

/* Desafio 03:
    Desenvolver um algoritmo para ler um número “x” e calcular
    e imprimir o valor de “y” de acordo com as condições abaixo:
    • y = x , se x < 1;
    • y = 0 , se x = 1;
    • y = x² , se x > 1;
*/

int main() {
    float number_X;

    printf("\n Insert any number: ");
    scanf("%f", &number_X);

    printf("\n\n The number \"X\" inserted before was: %.2f.", number_X);

    float number_Y;

    if (number_X < 1) {
        number_Y = number_X;

        printf("\n The number \"Y\" is equals to the number \"X\", which is %.2f.\n\n", number_Y);
    } else if (number_X == 1) {
        number_Y = 0;

        printf("\n The number \"Y\" is equals to 0.\n\n");
    } else if (number_X > 1) {
        number_Y = (number_X * number_X);

        printf("\n The number \"Y\" is equals to the number \"X\" squared, which is %.2f.\n\n", number_Y);
    }

    system("pause");
    return 0;
}
