#include <stdio.h>
#include <stdlib.h>

/* Desafio 01:
    Construir um programa que faz a leitura de duas notas de um aluno,
    N1 e N2, e os respectivos pesos, P1 e P2.

    O programa deve calcular a média ponderada alcançada por aluno e apresentar:

    • A mensagem "APROVADO", se a média alcançada for maior ou igual a sete;
    • A mensagem "REPROVADO", se a média for menor do que sete;
    • A mensagem "APROVADO COM DISTINÇÃO", se a média for igual a dez.
*/

int main() {
    float N1, N2;

    printf("\n Insert a value for the first grade of the student: ");
    scanf("%f", &N1);
    printf("\n Insert a value for the second grade of the student: ");
    scanf("%f", &N2);

    float P1, P2;

    printf("\n Insert a value for the weight of the first test: ");
    scanf("%f", &P1);
    printf("\n Insert a value for the weight of the second test: ");
    scanf("%f", &P2);

    float average = (((N1*P1) + (N2*P2))/P1 + P2);

    printf("\n\n The student\'s average, given the grades and weights, is: %.2f.", average);

    if (average >= 7) {
        printf("\n The student is approved!\n\n");
    } else if (average < 7) {
        printf("\n The student is disapproved!\n\n");
    } else if (average == 10) {
        printf("\n The student is approved with distinction.\n\n");
    }

    system("pause");
    return 0;
}
