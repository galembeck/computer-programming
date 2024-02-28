#include <stdio.h> // Including the <stdio.h> (standard input output) library.
#include <stdlib.h> // Including the <stdlib.h> (system) library.

/*  Exerc�cio 05:
    Construir um programa que leia o sal�rio mensal atual de um funcion�rio e o
    percentual de reajuste. Determine o valor do novo sal�rio e imprima os
    valores lidos e o novo sal�rio.
*/

int main() {

    float actual_salary;

    printf("\n Insert the value of the worker's salary (before the readjustment): ");
    scanf("%f", &actual_salary);

    float readjustment_percentage;

    printf("\n Insert the value of the salary readjustment percentage (do not use \"comma (,)\" for decimal numbers): ");
    scanf("%f", &readjustment_percentage);

    float readjustment = (readjustment_percentage)/100;
    float new_salary = ((actual_salary)*readjustment)+actual_salary;

    printf("\n The salary before the readjustment was: $%.2f.", actual_salary);
    printf("\n The readjustment percentage is: %.2f%%.", readjustment_percentage);

    printf("\n\n The new worker's salary, after the informed readjustment, is $%.2f.\n\n", new_salary);

    // printf("The new worker's salary after the inserted readjustment (%.2f) is %.2f.\n\n", readjustment_percentage, new_salary);

    system("pause");
    return 0;
}
