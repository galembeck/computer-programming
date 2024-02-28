#include <stdio.h> // Including the <stdio.h> (standard input output) library.
#include <stdlib.h> // Including the <stdlib.h> (system) library.

/*  Exercício 02:
    Determine a área de um triângulo.
*/

int main() {
    float base, height;

    printf("\n Insert a value for the base of the triangle: ");
    scanf("%f", &base);
    printf("\n Insert a value for the height of the triangle: ");
    scanf("%f", &height);

    float area = (base*height)/2;

    printf("\n\n The value of the area of a triangle with base %.2f and height %.2f is equal to %.2f.\n\n", base, height, area);

    system("pause");
    return 0;
}
