#include <stdio.h> // Including the <stdio.h> (standard input output) library.
#include <stdlib.h> // Including the <stdlib.h> (system) library.

/*  Exercício 06:
    Faça um programa que dadas as medidas de uma sala em metro
    (comprimento e largura), bem como o preço do metro quadrado
    do carpete, informe o custo total para forrar o piso da sala.
*/

int main() {
    float length;

    printf("\n Insert a value for the length of the room (in meters): ");
    scanf("%f", &length);

    float width;

    printf("\n Insert a value for the width of the room (in meters): ");
    scanf("%f", &width);

    float carpet_price;

    printf("\n Insert the price (per square meter) of the carpet which is going to be used: ");
    scanf("%f", &carpet_price);

    float total_cost = (length*width*carpet_price);

    printf("\n The length and the width of the room are, respectively: %.2f and %.2f meters.", length, width);
    printf("\n The price of the carpet that is going to be used is: $%.2f.", carpet_price);

    printf("\n\n The total cost of the work is: $%.2f.\n\n", total_cost);

    system("pause");
    return 0;
}
