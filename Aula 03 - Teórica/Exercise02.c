#include <stdio.h> // Including the <stdio.h> (standard input output) library.
#include <stdlib.h> // Including the <stdlib.h> (system) library.

/*  Exercício 01:
*   Suponha que o valor de uma certa variável inteira A = 5 e de uma variável B = 13, como
*   poderíamos trocar o valor dessas variáveis, ou seja, A = 13 e B = 5?
*/

int main() {

    int A = 5; // Declaring a variable called "A" with an initial value of 13.
    int B = 13; // Declaring a variable called "B" with an initial value of 5.
    int x; // Declaring a variable called "X" which is going to assume a different value.

    x = A;
    A = B;
    B = x;

    // Printing the results of the exercise proposed on the screen, where "A = 13" and "B = 5".
    printf("\n The value of the variable A = %d and the value of the variable B = %d.\n\n", A, B);

    system("pause");
    return 0;
}
