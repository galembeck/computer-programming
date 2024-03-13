#include <stdio.h>
#include <stdlib.h>

/* Exercício 01:
    Faça um programa que receba dois números e execute as
    operações listadas a seguir, de acordo com a escolha do usuário.
    • 1: Média entre os números digitados;
    • 2: Diferença do maior pelo menor;
    • 3: Produto entre os números digitados;
    • 4: Divisão do primeiro pelo segundo;
*/

int main() {
    float first_number, second_number;

    printf("\n Insert the first number to be used in operations: ");
    scanf("%f", &first_number);
    printf("\n Insert the second number to be used in operations: ");
    scanf("%f", &second_number);

    printf("\n Choose, from the options below, the operation you want to perform:\n");
    // printf("\n  -> Option 1: Provide the values for the numbers to be used.");
    printf("\n  -> Option 1: Get the average between the given numbers.");
    printf("\n  -> Option 2: Subtract and get the difference between the given numbers.");
    printf("\n  -> Option 3: Multiply the given numbers.");
    printf("\n  -> Option 4: Divide the first by the second given number.");
    // printf("\n\n To leave/cancel, enter 5.");

    int operation_option;
    float operation_result;

    printf("\n Insert the number of the option chosen above: ");
    scanf("%d", &operation_option);

    switch (operation_option) {
        case 1:
            operation_result = (first_number + second_number)/2;

            printf("\n The average between the numbers %.2f and %.2f is: %.2f.\n\n", first_number, second_number, operation_result);

            break;

        case 2:
            if (first_number > second_number) {
                operation_result = (first_number - second_number);
            } else {
                operation_result = (second_number - first_number);
            }

            printf("\n The difference between the numbers %.2f and %.2f is: %.2f.\n\n", first_number, second_number, operation_result);

            break;

        case 3:
            operation_result = (first_number * second_number);

            printf("\n The multiplication between the numbers %.2f and %.2f is: %.2f.\n\n", first_number, second_number, operation_result);

            break;

        case 4:
            operation_result = (first_number/second_number);

            printf("\n The division between the numbers %.2f and %.2f is: %.2f.\n\n", first_number, second_number, operation_result);

            break;


        default:
            printf("\n\n Invalid option.\n Chose one option between the options listed above.\n\n");
    }

    system("pause");
    return 0;
}
