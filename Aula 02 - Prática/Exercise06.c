#include <stdio.h>
#include <stdlib.h>

/* Exerc�cio 06:
    Construir um programa que faz a leitura de dois valores inteiros A e B.

    Se os valores forem iguais dever� somar os dois, caso contr�rio
    multiplique A por B.

    Ao final de qualquer um dos c�lculos deve-se atribuir o resultado para uma
    vari�vel C e mostrar seu conte�do na tela.
*/

int main() {
    int first_value;

    printf("\n Insert the first value: ");
    scanf("%d", &first_value);

    int second_value;

    printf("\n Insert the second value: ");
    scanf("%d", &second_value);

    printf("\n\n The values inserted were: %d and %d.", first_value, second_value);

    if (first_value == second_value) {
        int values_sum = (first_value + second_value);

        printf("\n The sum of the values %d and %d is: %d.\n\n", first_value, second_value, values_sum);
    } else {
        int values_multiplication = (first_value * second_value);

        printf("\n The multiplication of the values %d and %d is: %d.\n\n", first_value, second_value, values_multiplication);
    }

    system("pause");
    return 0;
}
