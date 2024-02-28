#include <stdio.h> // Including the <stdio.h> (standard input output) library.
#include <stdlib.h> // Including the <stdlib.h> (system) library.

/*  Exercício 08:
    Uma certa quantia será dividida entre três ganhadores de um concurso,
    sendo que da quantia total:
    • O primeiro ganhador receberá 46%;
    • O segundo receberá 32%;
    • O terceiro receberá o restante;
    Elabore um programa que, dado o valor do concurso em reais,
    calcule e imprima a quantia ganha por cada um dos ganhadores.
*/

int main() {
    float total_quantity;

    printf("\n Insert the total contest quantity: ");
    scanf("%f", &total_quantity);

    float first_winner = (total_quantity)*(0.46);
    float second_winner = (total_quantity)*(0.32);
    float third_winner = (total_quantity - first_winner - second_winner);

    printf("\n The total quantity of $%.2f will be divided between three winners in a proportion of 46%%, 32%% and the rest.\n", total_quantity);

    printf("\n The quantity won by the first winner is: $%.2f.", first_winner);
    printf("\n The quantity won by the second winner is: $%.2f.", second_winner);
    printf("\n The quantity won by the third winner is: $%.2f.\n\n", third_winner);

    system("pause");
    return 0;
}
