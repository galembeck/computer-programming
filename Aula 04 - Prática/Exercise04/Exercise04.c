#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <locale.h>

/* Exerc�cio 04:
    Escreva um programa que, utilizando a f�rmula que converte um
    grau Fahrenheit em Celsius, imprime uma tabela com graus em
    Fahrenheit e Celsius, iniciando no grau 30 oF at� 50 oF, de 2 em 2
    graus.
*/

int main() {
    setlocale(LC_ALL, "portuguese");

    int option, i;
    float celsius, fahrenheit;

    printf("\n Escolha uma das op��es abaixo para a convers�o de graus Celsius para Fahrenheit:");
    printf("\n  Op��o 1: Listagem a convers�o autom�tica (0 - 100�C) para Fahrenheit");
    printf("\n  Op��o 2: Convers�o de valor espec�fico de Celsius para Fahrenheit");
    printf("\n  Op��o 3: Convers�o de valor espec�fico de Fahrenheit para Celsiu");

    printf("\n\n Op��o: ");
    scanf("%d", &option);

    switch(option) {
        case 1:
            for(i = 0; i <= 100; i++) {
                fahrenheit = ((i * 1.8) + 32);
                printf("\n =======================\n      %d�C = %.2f", i, fahrenheit);
                sleep(1);
            }
            break;
        case 2:
            printf("\n Insira o valor, em Celsius, a ser convertido para Fahrenheit: ");
            scanf("%f", &celsius);

            fahrenheit = ((celsius * 1.8) + 32);

            printf("\n O valor de %.2f�C, em Fahrenheit, � de %.2fF.\n\n", celsius, fahrenheit);

            break;
        case 3:
            printf("\n Insira o valor, em Fahrenheit, a ser convertido para Celsius: ");
            scanf("%f", &fahrenheit);

            celsius = ((fahrenheit - 32) * 0.55);

            printf("\n O valor de %.2fF, em Celsiu, � de %.2f�C.\n\n", fahrenheit, celsius);

            break;
        default:
            printf("\n\nOp��o inv�lida! Escolha uma das op��es dispon�veis acima.");
    }

    system("pause");
    return 0;
}
