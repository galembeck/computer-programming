#include <stdio.h>
#include <stdlib.h>

/* Exerc�cio 05:
    Fa�a um programa que imprima os n�meros inteiros de 100 a 450, que s�o m�ltiplos de 7.
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
