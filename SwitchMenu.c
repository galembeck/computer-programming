#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void mainMessage() {
    system("cls");

    printf("\n Escolha uma das opções abaixo para executar:");
    printf("\n  Opção 1: Entrada de valores numéricos");
    printf("\n  Opção 2: Sair");
}

int main() {
    setlocale(LC_ALL, "portuguese");

    while(1) {
        mainMessage();

        int option;

        printf("\n\n Opção: ");
        scanf("%d", &option);

        float first_value, second_value;

        switch(option) {
            case 1:
                system("cls");
                printf("\n Insira o primeiro valor: ");
                scanf("%f", &first_value);
                printf("\n Insira o segundo valor: ");
                scanf("%f", &second_value);

                mainMessage();
                break;
            default:
                printf("\n Opção inválida! Escolha uma das opções disponíveis acima.\n\n");
        }
    }

    system("pause");
    return 0;
}
