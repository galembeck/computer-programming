#include <stdio.h>
#include <stdlib.h>

/* Desafio de sala 01:
    Leia 10 valores e imprima o maior deles.
*/

int main() {
    int number, biggest_number;
    int counter = 0;

    while (counter != 10) {
        printf("\n Insert a number: ");
        scanf("%d", &number);

        if (counter == 1) {
            biggest_number = number;
        } else if (number > biggest_number) {
            biggest_number = number;
        }

        counter = counter + 1;
    }

    printf("\n\n The biggest number, among the inserted numbers, is: %d.", biggest_number);

    system("pause");
    return 0;
}
