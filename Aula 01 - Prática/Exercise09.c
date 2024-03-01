#include <stdio.h> // Including the <stdio.h> (standard input output) library.
#include <stdlib.h> // Including the <stdlib.h> (system) library.

/*  Exercício 09:
    Elabore um programa que faça a simulação de um caixa de uma loja.
    O usuário deverá digitar o valor da compra e o valor pago pelo cliente.

    O programa irá retornar o valor do troco, as cédulas que fazem parte
    do troco e a quantidade de cada cédula.

    Para este programa considere as cédulas de R$20, R$10, R$5 e R$1 real.

    Considere a possibilidade de não haver troco.
*/

int main() {
    int sale_price;

    printf("\n Insert the price of the sale: ");
    scanf("%d", &sale_price);

    int payed_value;

    printf("\n Insert the value payed by the customer: ");
    scanf("%d", &payed_value);

    int exchange = (payed_value - sale_price);
    
    if (exchange == 0) {
        printf("\n\n The value of the exchange is 0.");
    } else {
        printf("\n\n The value of the exchange is: $%d.", exchange);
    
        printf("\n The number of bills of 20 dollars is: %d bills.", exchange/20);
        printf("\n The number of bills of 10 dollars is: %d bills.", exchange/10);
        printf("\n The number of bills of 5 dollars is: %d bills.", exchange/5);
        printf("\n The number of bills of 1 dollar is: %d bills.", exchange);
    }
}
