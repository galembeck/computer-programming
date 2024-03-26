#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Exercício 01:
    Escrever um algoritmo que leia uma quantidade desconhecida de
    números e conte quantos deles estão nos seguintes intervalos:
    [0.25], [26,50], [51,75] e [76,100].

    A entrada de dados deve terminar quando for lido um número negativo.
*/

int main() {
    setlocale(LC_ALL, "portuguese");

    int numbers_quantity, number, i;
    int first_intrvl = 0, second_intrvl = 0, third_intrvl = 0, fourth_intrvl = 0;

    printf("\n Informe a quantidade de números a serem lidos: ");
    scanf("%d", &numbers_quantity);

    for(i = 0; i < numbers_quantity; i++) {
        printf("\n Digite um número: ");
        scanf("%d", &number);

        if (number <= 0) {
            printf("\n A operação foi finalizada, pois o número digitado é negativo.\n\n");
        }

        if(number <= 25) {
            first_intrvl++;
        } else {
            if(number <= 50) {
                second_intrvl++;
            } else {
                if(number <= 75) {
                    third_intrvl++;
                } else {
                    if(number <= 100) {
                        fourth_intrvl++;
                    }
                }
            }
        }
    }

    printf("\n\n [0, 25]: %d números\n\n [26, 50]: %d números\n\n [51, 75]: %d números\n\n [76, 100]: %d números.\n\n", first_intrvl, second_intrvl, third_intrvl, fourth_intrvl);

    system("pause");
    return 0;
}
