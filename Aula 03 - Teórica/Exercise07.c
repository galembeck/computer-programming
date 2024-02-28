#include <stdio.h> // Including the <stdio.h> (standard input output) library.
#include <stdlib.h> // Including the <stdlib.h> (system) library.

/*  Exerc�cio 07:
    Escrever um programa que faz a leitura de um n�mero inteiro
    de at� 2 d�gitos e imprima a soma dos d�gitos. Considere que
    ser�o digitados n�meros de 1 ou 2 d�gitos.
*/

int main() {

    int first_number, second_number;

    printf("\n Insert a value for the first number: ");
    scanf("%d", &first_number);

    if (first_number >= 100) {
        printf("\n The number inserted must be between 0 to 99 (it can't be bigger than 99).\n\n");
    } else {
        printf("\n Insert a value for the second number: ");
        scanf("%d", &second_number);

        if (second_number >= 100) {
            printf("\n The number inserted must be between 0 to 99 (it can't be bigger than 99).\n\n");
        } else {
            int numbers_sum = (first_number + second_number);

            printf("\n The value of the first number is: %d.\n The value of the second number is: %d.", first_number, second_number);
            printf("\n\n The sum of the numbers informed is: %d.\n\n", numbers_sum);
        }
    }

    system("pause");
    return 0;
}
