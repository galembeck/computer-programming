#include <stdio.h> // Including the <stdio.h> (standard input output) library.
#include <stdlib.h> // Including the <stdlib.h> (system) library.

/*  Exercício 04:
    Faça um programa para receber um número inteiro representando segundos e imprimir a
    quantidade correspondente em horas, minutos e segundos.
*/

int main() {

    int time_in_seconds;

    printf("\n Insert a number of seconds: ");
    scanf("%d", &time_in_seconds);

    float minutes = (time_in_seconds)/60;
    float hours = (minutes)/60;

    printf("\n The value inserted corresponds to %.1f hours, %.1f minutes and %d seconds.\n\n", hours, minutes, time_in_seconds);

    system("pause");
    return 0;
}
