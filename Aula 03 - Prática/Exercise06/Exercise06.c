#include <stdio.h>
#include <stdlib.h>

/* Exercício 06:
    Escreva um algoritmo que leia "N" números inseridos pelo usuário (n é fornecido pelo usuário)
    e realize a soma dos números pares e conta quantos impares o usuário digitou.

    O resultado da soma dos pares e o número de ímpares digitados deverá ser impresso no final.
*/

int main() {
    int numbers_quantity;

    printf("\n Insert the quantity of numbers to be read: ");
    scanf("%d", &numbers_quantity);

    int number;
    int odd_quantity = 0;
    int even_sum = 0;
    int counter = 0;

    while (counter < numbers_quantity) {
        printf("\n Insert a number: ");
        scanf("%d", &number);

        if (number%2 == 0) {
            even_sum = even_sum + number;
        } else {
            odd_quantity++;
        }

        counter++;
    }

    printf("\n The sum of the even numbers is %d and the quantity of odd numbers is %d.\n\n", even_sum, odd_quantity);

    system("pause");
    return 0;
}
