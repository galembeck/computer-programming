#include <stdio.h>
#include <stdlib.h>

/* Exercício 05:
    Faça um programa que imprima os números inteiros de 100 a 450, que são múltiplos de 7.
*/

int main() {
	int number = 101;
	printf("\n The numbers that are multiples of 7 between 100 and 450 are:");

	while (number > 100 && number < 450) {
		number++;

        if (number % 7 == 0) {
            printf("\n  %d", number);
        }
	}
}
