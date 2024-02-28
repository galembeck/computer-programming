#include <stdio.h> // Including the <stdio.h> (standard input output) library.
#include <stdlib.h> // Including the <stdlib.h> (system) library.

/*  Exercício 05:
    Elabore um programa que dada uma distância percorrida (em
    quilômetros), bem como o total de combustível gasto (em litros),
    informe o consumo do veículo.
*/

int main() {
    float traveled_distance;

    printf("\n Insert the traveled distance (in kilometers): ");
    scanf("%f", &traveled_distance);

    float used_fuel;

    printf("\n Insert the amount of fuel used to drive the distance informed (in liters): ");
    scanf("%f", &used_fuel);

    float fuel_consumption = (traveled_distance/used_fuel);

    printf("\n\n The fuel consumption of the vehicle, considering a distance of %.2f km and %.2f liters, is: %.2f km/l.\n\n", traveled_distance, used_fuel, fuel_consumption);

    system("pause");
    return 0;
}
