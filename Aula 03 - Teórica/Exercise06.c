#include <stdio.h> // Including the <stdio.h> (standard input output) library.
#include <stdlib.h> // Including the <stdlib.h> (system) library.

/*  Exercício 06:
    A loja “FiqueFeliz” resolveu liquidar todos os seus produtos,
    para isso necessita de um programa que ajude calcular os novos
    preços desses produtos. Elabore um programa que leia o preço
    de um produto, o valor do desconto (em porcentagem) e calcule
    o novo preço. Imprimir o valor do produto, o desconto e o novo
    valor.
*/
 int main() {

     float original_price;

     printf("\n Insert the price of the product (before the discount): ");
     scanf("%f", &original_price);

     float discount_percentage;

     printf("\n Insert the discount percentage (do not use \"comma (,)\" for decimal numbers): ");
     scanf("%f", &discount_percentage);

     float discount = (discount_percentage)/100;
     float new_price = original_price-((original_price)*discount);

     printf("\n The original price of the product before the discount was: $%.2f.", original_price);
     printf("\n The discount percentage given to the product was: %.2f%%.", discount_percentage);

     printf("\n\n The new price of the product, after the discount given to it, is: $%.2f.\n\n", new_price);

     system("pause");
     return 0;
 }
