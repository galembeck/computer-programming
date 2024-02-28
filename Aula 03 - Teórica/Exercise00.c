#include <stdio.h> // Including the <stdio.h> (standard input output) library.
#include <stdlib.h> // Including the <stdlib.h> (system) library.
// #include <math.h> // Including the <math.h> (math operations) library.

int main() {

    float first_mark, second_mark;

    printf("\n Insert a value for the first mark: ");
    scanf("%f", &first_mark);

    printf("\n Insert a value for the second mark: ");
    scanf("%f", &second_mark);

    float mark_average = (first_mark + second_mark)/2;

    printf("\n The value informed for the first mark was: %.2f.", first_mark);
    printf("\n The value informed for the second mark was: %.2f.", second_mark);

    printf("\n\n The average between the first and the second mark is %.2f.\n\n", mark_average);

    system("pause");
    return 0;
}
