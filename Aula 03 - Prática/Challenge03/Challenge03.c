#include <stdio.h>
#include <stdlib.h>

/* Desafio 03:
    Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e cresce 3 centímetros por ano.

    Construa um algoritmo que calcule e imprima quantos anos serão necessários para que Zé seja maior que Chico.
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
