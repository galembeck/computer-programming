#include <stdio.h>
#include <stdlib.h>

/* Desafio 02:
    Construir um programa que faz a leitura de três número inteiros e imprime o maior.
*/

int main() {
    int first_number;

    printf("\n Insert the first number: ");
    scanf("%d", &first_number);

    int second_number;

    printf("\n Insert the second number: ");
    scanf("%d", &second_number);

    int third_number;

    printf("\n Insert the third number: ");
    scanf("%d", &third_number);

    printf("\n\n The numbers inserted were: %d, %d and %d.", first_number, second_number, third_number);

    if (first_number > second_number && first_number > third_number) {
        printf("\n The first number (%d) is the bigger among the others.\n\n", first_number);
    } else if (second_number > first_number && second_number > third_number) {
        printf("\n The second number (%d) is the bigger among the others.\n\n", second_number);
    } else if (third_number > first_number && third_number > second_number) {
        printf("\n The third number (%d) is the bigger among the others.\n\n", third_number);
    }

    system("pause");
    return 0;
}
