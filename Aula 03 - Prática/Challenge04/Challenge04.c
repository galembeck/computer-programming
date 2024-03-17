#include <stdio.h>
#include <stdlib.h>

/* Desafio 04:
    Elabore um programa que leia vários números inteiros, até o usuário digitar um número negativo.

    Para cada número lido deverá ser calculado e impresso seu fatorial.
*/

int main() {
    int number, factorial, cont;

    printf("\n Insert a number to calculate it\'s factorial: ");
    scanf("%d", &number);

    while (number >= 0) {
        factorial = 1;
        cont = number;

        while (cont > 1) {
            factorial = factorial * cont;
            cont--;
        }

        printf("\n%d! = %d.", number, factorial);

        printf("\n\nInsert another number to calculate it\'s factorial: ");
        scanf("%d", &number);
    }


    /*
        int number, i;
        unsigned long long fact = 1;

        printf("\n Insert a number to calculate it\'s factorial: ");
        scanf("%d", &number);

        // Show an error if the user enters a negative number:
        if (n < 0) {
            printf("\n Error! The factorial of a negative number doesn\'t exist.");
        } else {
            for (i = 1; i <= number; ++i) {
                fact *= i;
            }

            printf("\n %d! = %llu", number, fact);
        }
    */


    system("pause");
    return 0;
}
