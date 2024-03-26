#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <locale.h>

/* Exercício 04:
    Escreva um programa que, utilizando a fórmula que converte um
    grau Fahrenheit em Celsius, imprime uma tabela com graus em
    Fahrenheit e Celsius, iniciando no grau 30 oF até 50 oF, de 2 em 2
    graus.
*/

int main() {
    setlocale(LC_ALL, "portuguese");

    int option, i;
    float celsius, fahrenheit;

    printf("\n Escolha uma das opções abaixo para a conversão de graus Celsius para Fahrenheit:");
    printf("\n  Opção 1: Listagem a conversão automática (0 - 100°C) para Fahrenheit");
    printf("\n  Opção 2: Conversão de valor específico de Celsius para Fahrenheit");
    printf("\n  Opção 3: Conversão de valor específico de Fahrenheit para Celsiu");

    printf("\n\n Opção: ");
    scanf("%d", &option);

    switch(option) {
        case 1:
            for(i = 0; i <= 100; i++) {
                fahrenheit = ((i * 1.8) + 32);
                printf("\n =======================\n      %d°C = %.2f", i, fahrenheit);
                sleep(1);
            }
            break;
        case 2:
            printf("\n Insira o valor, em Celsius, a ser convertido para Fahrenheit: ");
            scanf("%f", &celsius);

            fahrenheit = ((celsius * 1.8) + 32);

            printf("\n O valor de %.2f°C, em Fahrenheit, é de %.2fF.\n\n", celsius, fahrenheit);

            break;
        case 3:
            printf("\n Insira o valor, em Fahrenheit, a ser convertido para Celsius: ");
            scanf("%f", &fahrenheit);

            celsius = ((fahrenheit - 32) * 0.55);

            printf("\n O valor de %.2fF, em Celsiu, é de %.2f°C.\n\n", fahrenheit, celsius);

            break;
        default:
            printf("\n\nOpção inválida! Escolha uma das opções disponíveis acima.");
    }

    system("pause");
    return 0;
}
