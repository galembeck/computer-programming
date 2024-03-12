#include <stdio.h>
#include <stdlib.h>

/* Desafio de sala 02:
    Leia quantos números inteiros forem necessários ate que a soma seja maior ou igual a 100; imprima o valor da soma e a quantidade de números lidos.
*/

int main() {
    float number, sum = 0;
    int quantity = 0;
    
    while (sum <= 100) {
        printf("\n Insert a number: ");
        scanf("%d", &number);
        
        sum = sum + number;
        quantity++;
    }
    
    printf("\n Sum = %d, quantity = %d.", sum, quantity);
    
    system("pause")
    return 0;
}
