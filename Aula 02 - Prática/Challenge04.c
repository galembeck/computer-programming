#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Desafio 04:
    Elabore um programa que leia os parâmetros A, B e C de uma
    equação quadrática e determine as raízes desta equação.

*/

int main() {
    float param_A;

    printf("\n Enter the parameter \"A\" (which follows the X²) of the quadratic equation: ");
    scanf("%f", &param_A);

    float param_B;

    printf("\n Enter the parameter \"B\" (which follows the X) of the quadratic equation: ");
    scanf("%f", &param_B);

    float param_C;

    printf("\n Enter the parameter \"A\" (which is the independent term) of the quadratic equation: ");
    scanf("%f", &param_C);

    float delta = ((param_B * param_B) - (4 * param_A * param_C));

    printf("\n\n The parameters A, B and C informed, respectively, were: %.2f, %.2f and %.2f.", param_A, param_B, param_C);
    printf("\n The delta solution is: %.2f.", delta);

    if (delta < 0) {
        printf("\n There are no real solutions for the equation in question.\n\n");
    } else if (delta == 0) {
        float equal_solutions = ((- param_B)/(2 * param_A));

        printf("\n There are two equal real solutions (delta equal to 0) for the equation in question, which are: %.2f.\n\n", equal_solutions);
    } else if (delta > 0) {
        float delta_sqrt = sqrt(delta);
        float first_solution = (((- param_B) + (delta_sqrt))/(2 * param_A));
        float second_solution = (((- param_B) - (delta_sqrt))/(2 * param_A));

        printf("\n The two solutions (delta greater than 0) for the equation in question are: %.2f and %.2f.\n\n", first_solution, second_solution);
    }

    system("pause");
    return 0;
}
