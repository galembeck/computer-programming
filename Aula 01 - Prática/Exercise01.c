#include <stdio.h> // Including the <stdio.h> (standard input output) library.
#include <stdlib.h> // Including the <stdlib.h> (system) library.

/*  Exercício 01:
    Leia um número inteiro e imprima o seu antecessor e seu sucessor.
*/

int main() {
    int number;

    printf("\n Insert an integer number: ");
    scanf("%d", &number);

    int number_predecessor = number - 1;
    int number_successor = number + 1;

    printf("\n The integer number chosen was: %d.", number);

    printf("\n It's predecessor is %d and it's successor is %d.\n\n", number_predecessor, number_successor);

    system("pause");
    return 0;
}
