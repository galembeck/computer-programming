#include <stdio.h>
#include <stdlib.h>

/* Exercício 03:
    Um funcionário irá receber um aumento de acordo com o seu
    plano de trabalho, de acordo com a tabela abaixo:
    - Plano 1 = 10% de aumento;
    - Plano 2 = 15% de aumento;
    - Plano 3 = 20% de aumento;
    Faça um programa que leia o plano de trabalho e o salário atual de
    um funcionário e calcula e imprime o seu novo salário.
*/

int main() {
    float actual_salary;

    printf("\n Insert the worker's current salary amount: ");
    scanf("%f", &actual_salary);

    printf("\n The table below displays the available salary plans, select one of the options below:");
    printf("\n  Plan 1: 10%% salary increase");
    printf("\n  Plan 2: 15%% salary increase");
    printf("\n  Plan 3: 20%% salary increase");

    int plan_option;

    printf("\n\n Insert the desired salary plan option: ");
    scanf("%d", &plan_option);

    float new_salary;

    switch (plan_option) {
        case 1:
            new_salary = ((actual_salary * 0.1) + actual_salary);
            printf("\n The worker's salary, with the 10%% increase in plan 1, will increase from $%.2f to $%.2f.\n\n", actual_salary, new_salary);
            break;

        case 2:
            new_salary = ((actual_salary * 0.15) + actual_salary);
            printf("\n The worker's salary, with the 15%% increase in plan 2, will increase from $%.2f to $%.2f.\n\n", actual_salary, new_salary);
            break;

        case 3:
            new_salary = ((actual_salary * 0.2) + actual_salary);
            printf("\n The worker's salary, with the 20%% increase in plan 3, will increase from $%.2f to $%.2f.\n\n", actual_salary, new_salary);
            break;

        default:
            printf("\n Invalid plan!\n Chose a valid plan between the plans listed above.\n\n");
    }

    system("pause");
    return 0;
}
