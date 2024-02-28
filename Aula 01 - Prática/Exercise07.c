#include <stdio.h> // Including the <stdio.h> (standard input output) library.
#include <stdlib.h> // Including the <stdlib.h> (system) library.

/*  Exercício 07:
    O índice de massa corpórea (IMC) de uma pessoa é igual ao peso
    (em quilogramas) dividido pelo quadrado de sua altura (em
    metros).

    Construa um programa que dados o peso e altura de
    uma pessoa, informe o valor de seu IMC.
*/

int main() {
    float weight;

    printf("\n Insert the weight of the person whose BMI want to be calculated (in kg): ");
    scanf("%f", &weight);

    float height;

    printf("\n Insert the height of the person whose BMI want to be calculated (in meters): ");
    scanf("%f", &height);

    float BMI = (weight)/(height*height);

    printf("\n The weight and height of the person informed is, respectively: %.2f kg and %.2f meters.", weight, height);

    printf("\n\n The BMI of the person whose values were informed is: %.2f kg/m2.\n\n", BMI);

/*
    if (BMI < 18.5) {
        printf("\n Your BMI is below 18.5 and you are classified as thin");
    } else if (BMI >= 18.5 && BMI <= 24.9) {
        printf("\n Your BMI is between 18.5 and 24.9 and you are classified as normal.");
    } else if (BMI >= 25 && BMI <= 29.9) {
        printf("\nYour BMI is between 25 and 29.9 and you are classified as overweight.");
    } else if (BMI >= 30 && BMI <= 39.9) {
        printf("\nYour BMI is between 30 and 39.9 and you are classified with obesity (II).");
    } else if (BMI >= 40) {
        printf("\nYour BMI is above 40 and you are classified with obesity (III).");
    } else {
        printf("TESTE");
    }
*/

    system("pause");
    return 0;
}
