#include <stdio.h>
#include <stdlib.h>

/* Exerc�cio 02:
    Leia o c�digo de um determinado produto e mostre sua
    classifica��o. Utilize a seguinte tabela como refer�ncia:
    - 1: Alimento n�o-perec�vel;
    - 2, 3 ou 4: Alimento perec�vel;
    - 5 ou 6: Vestu�rio;
    - 7: Higiene pessoal;
    - 8 at� 15: Limpeza e utens�lios dom�sticos;
    - Outro(s): C�digo inv�lido;
*/

int main() {
    printf("\n The table below shows the classification of products according to their code.\n");
    printf("\n  -> Code 1: Non-perishable food");
    printf("\n  -> Code 2, 3 or 4: Perishable food");
    printf("\n  -> Code 5 or 6: Clothing");
    printf("\n  -> Code 7: Personal hygiene");
    printf("\n  -> Code 8 to 15: Cleaning and household items");

    int product_code;

    printf("\n\n To check the rating of a specific product, enter its code: ");
    scanf("%d", &product_code);

    switch (product_code) {
        case 1:
            printf("\n The product with the code %d is classified as: \"non-perishable food\".\n\n", product_code);
            break;

        case 2:
        case 3:
        case 4:
            printf("\n The product with the code %d is classified as: \"perishable food\".\n\n", product_code);
            break;

        case 5:
        case 6:
            printf("\n The product with the code %d is classified as: \"clothing\".\n\n", product_code);
            break;

        case 7:
            printf("\n The product with the code %d is classified as: \"personal hygiene\".\n\n", product_code);
            break;

        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
            printf("\n The product with the code %d is classified as: \"cleaning and household items\".\n\n", product_code);
            break;

        default:
            printf("\n\n Invalid code.\n Inform one of the codes listed above.\n\n");
    }

    system("pause");
    return 0;
}
