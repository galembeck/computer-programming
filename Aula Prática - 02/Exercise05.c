#include <stdio.h>
#include <stdlib.h>

/* Exerc�cio 05:
    Crie um algoritmo que receba do usu�rio um n�mero qualquer e
    verifique se esse � m�ltiplo de 5.
*/

int main() {
    int number;

    printf("\n Insert a number: ");
    scanf("%d", &number);

    if (number%5 == 0) {
        printf("\n The number %d is multiple of 5.\n\n", number);
    } else {
        printf("\n The number %d is not a multiple of 5.\n\n", number);
    }

    system("pause");
    return 0;
}
