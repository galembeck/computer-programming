#include <stdio.h>
#include <stdlib.h>

/* Exercício 03:
    Faça um programa que peça dois números e imprima o maior deles.
*/

int main() {
    float first_number;

    printf("\n Insert the first number: ");
    scanf("%f", &first_number);

    float second_number;

    printf("\n Insert the second number: ");
    scanf("%f", &second_number);

    printf("\n\n The numbers inserted were: %.1f and %.1f.", first_number, second_number);

    if (first_number > second_number) {
        printf("\n The first number (%.1f) is bigger than the second number (%.1f).\n\n", first_number, second_number);
    } else if (first_number < second_number) {
        printf("\n The second number (%.1f) is bigger than the first number (%.1f).\n\n", second_number, first_number);
    } else if (first_number == second_number) {
        printf("\n The first and the second number are equals.\n\n");
    }

    system("pause");
    return 0;
}
