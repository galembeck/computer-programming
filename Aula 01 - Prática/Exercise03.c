#include <stdio.h> // Including the <stdio.h> (standard input output) library.
#include <stdlib.h> // Including the <stdlib.h> (system) library.

/*  Exercício 03:
    Leia o salário mensal atual de um funcionário e o percentual de
    reajuste e determine o valor do novo salário.
*/

int main() {
    float monthly_salary;

    printf("\n Insert the monthly salary of the employee: ");
    scanf("%f", &monthly_salary);

    float readjustment_percentage;

    printf("\n Insert the readjustment percentage of the salary (do not use \"comma (,)\" for decimal numbers): ");
    scanf("%f", &readjustment_percentage);

    float readjustment = (readjustment_percentage)/100;
    float new_salary = ((monthly_salary)*readjustment) + monthly_salary;

    printf("\n The monthly salary inserted of the employee was: $%.2f.", monthly_salary);
    printf("\n The readjustment percentage inserted for the salary was: %.2f%%.", readjustment_percentage);

    printf("\n\n The final/actual salary of the employee is: $%.2f.\n\n", new_salary);

    system("pause");
    return 0;
}
