#include <iostream>
#include "text.h"

void menu() {
    printf("1. Wprowadz tekst\n");
    printf("2. Wyswietl tekst\n");
    printf("3. Dlugosc tekstu\n");
    printf("0. EXIT\n");
    printf("Wybierz opcje:\n");
}

int main() {
    char text[80] = "";
    int option = 0;

    do {
        menu();
        scanf("%d", &option);
        clear();

        switch (option) {
            case 0:
                printf("Koniec programu.\n");
                return 0;
            case 1:
                enterText(text);
                break;
            case 2:
                printText(text);
                break;
            case 3:
                printf("Dlugosc tekstu: %d\n", textLength(text));
                break;
            default:
                printf("Wybierz inną opcje.\n");
                break;
        }
    } while (option != 0);

    return 0;
}