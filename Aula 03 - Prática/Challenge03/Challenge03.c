#include <stdio.h>
#include <stdlib.h>

/* Desafio 03:
    Chico tem 1,50 metro e cresce 2 cent�metros por ano, enquanto Z� tem 1,10 metro e cresce 3 cent�metros por ano.

    Construa um algoritmo que calcule e imprima quantos anos ser�o necess�rios para que Z� seja maior que Chico.
*/

int main() {
    int years = 0, chico = 150, ze = 110;

    while (ze < chico) {
        ze+= 3;
        chico+= 2;
        years++;
    }

    printf("\n Years: %d.\n\n", years);

    system("pause");
    return 0;
}
