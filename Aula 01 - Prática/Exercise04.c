#include <stdio.h> // Including the <stdio.h> (standard input output) library.
#include <stdlib.h> // Including the <stdlib.h> (system) library.

/*  Exercício 04:
    Calcule o volume do cubo.
*/

int main() {
    float cube_side;

    printf("\n Insert a value for the sides of a cube: ");
    scanf("%f", &cube_side);

    float cube_volume = ((cube_side)*(cube_side)*(cube_side));

    printf("\n The value of the volume of a cube with sides %.2f is equal to %.2f.\n\n", cube_side, cube_volume);

    system("pause");
    return 0;
}
