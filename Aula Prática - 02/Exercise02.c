#include <stdio.h>
#include <stdlib.h>

/* Exerc�cio 02:
    Construa um programa que leia os lados de um quadril�tero e
    determine se � um quadrado ou um ret�ngulo.
*/

int main() {
    float first_side;

    printf("\n Insert a value for one of the sides of the quadrilateral: ");
    scanf("%f", &first_side);

    float second_side;

    printf("\n Insert a value for the other side of the quadrilateral: ");
    scanf("%f", &second_side);

    printf("\n\n The inserted value for the sides of the quadrilateral were: %.1f and %.1f.", first_side, second_side);

    if (first_side == second_side) {
        printf("\n The quadrilateral in question, for the given sides, is a square.\n\n");
    } else {
        printf("\n The quadrilateral in question, for the given sides, is a rectangle.\n\n");
    }

    system("pause");
    return 0;
}
