#include <stdio.h>
#include <stdlib.h>

/* Desafio 01:
    Fazer um programa que calcule o valor de N! (fatorial de N), sendo que o valor inteiro de N deve ser lido.
    Lembrando que:
    • N! = 1 x 2 x 3 x .... x (N – 1) x N;
    • 0! = 1, por definição
*/

int main() {
    int number, displayed_number;
    int factorial = 1;

    printf("\n Insert a number to be calculated in its factorial form: ");
    scanf("%d", &number);

    displayed_number = number;

    while (number) {
        factorial = factorial * number;
        number--;
    }

    printf("\n The number %d in it\'s factorial form is %d.\n\n", displayed_number, factorial);

    system("pause");
    return 0;
}
