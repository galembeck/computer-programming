#include <stdio.h> // Including the <stdio.h> (standard input output) library.
#include <stdlib.h> // Including the <stdlib.h> (system) library.

/*  Exerc�cio 09:
    Elabore um programa que fa�a a simula��o de um caixa de uma loja.
    O usu�rio dever� digitar o valor da compra e o valor pago pelo cliente.

    O programa ir� retornar o valor do troco, as c�dulas que fazem parte
    do troco e a quantidade de cada c�dula.

    Para este programa considere as c�dulas de R$20, R$10, R$5 e R$1 real.

    Considere a possibilidade de n�o haver troco.
*/

int main() {
    float sale_price;

    printf("\n Insert the price of the sale: ");
    scanf("%f", &sale_price);

    float payed_value;

    printf("\n Insert the value payed by the customer: ");
    scanf("%f", &payed_value);

    float exchange = (payed_value - sale_price);
}
