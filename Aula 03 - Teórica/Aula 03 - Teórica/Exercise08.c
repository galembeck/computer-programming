#include <stdio.h> // Including the <stdio.h> (standard input output) library.
#include <stdlib.h> // Including the <stdlib.h> (system) library.

/*  Exerc�cio 08:
    Uma empresa paga a seus empregados um sal�rio de R$1.500,00 por m�s
    mais uma comiss�o de R$200,00 para cada carro vendido e mais 5% do valor
    da venda. Construir um programa para calcular o sal�rio do m�s de um
    funcion�rio, de acordo com o descrito acima.

    Para o c�lculo da comiss�o e do adicional de 5% do valor da venda,
    o programa dever� ler o n�mero de carros vendidos e valor total das vendas,
    do empregado, no m�s e, imprimir de forma bem explicativa o sal�rio do funcion�rio.
*/

int main() {
    const float base_salary = 1500;
    int sold_cars;
    float sales_amount;

    printf("\n Insert the number of cars sold by the seller: ");
    scanf("%d", &sold_cars);

    float commission = (sold_cars)*200;

    printf("\n Insert the total sales amount for the employee's month: ");
    scanf("%f", &sales_amount);

    float sale_price = (sales_amount/sold_cars);
    float additional_percentage = ((sale_price)*(0.05));

    float final_salary = base_salary + commission + additional_percentage;

    printf("\n The employee's base salary is: $%.2f.", base_salary);
    printf("\n The number of cars sold by the employee this month was: %d cars.", sold_cars);
    printf("\n The sales amount by the employee this month was: $%.2f", sales_amount);
    printf("\n The commission given to the employee is: $%.2f.", commission);
    printf("\n The additional of 5%% given to the employee based on the sales amount is: $%.2f.", additional_percentage);

    printf("\n\n The final employee's salary, with the information given above, is: $%.2f.\n\n", final_salary);

    system("pause");
    return 0;
}
