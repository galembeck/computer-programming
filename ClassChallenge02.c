#include <stdio.h>
#include <stdlib.h>

int main() {
    float number, sum = 0;
    int quantity = 0;
    
    while (sum <= 100) {
        printf("\n Insert a number: ");
        scanf("%d", &number);
        
        sum = sum + number;
        quantity++;
    }
    
    printf("\n Sum = %d, quantity = %d.", sum, quantity);
    
    system("pause")
    return 0;
}
