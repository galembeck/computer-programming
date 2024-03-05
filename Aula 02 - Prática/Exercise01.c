#include <stdio.h>
#include <stdlib.h>

/* Exercício 01:
    Elabore um programa que leia um número inteiro e imprima se ele
    é par ou ímpar.
*/

int main() {
    int integer_number;

    printf("\n Insert an integer number: ");
    scanf("%d", &integer_number);

    printf("\n\n The inserted integer number was: %d.", integer_number);

    if (integer_number%2 == 0) {
        int plus_odd_number = integer_number + 1;
        int minus_odd_number = integer_number - 1;
        printf("\n The odd number of your integer is %d or %d.\n\n", minus_odd_number, plus_odd_number);
    } else {
        printf("\n The inserted number is already an odd number.\n\n");
    }

    system("pause");
    return 0;
}
