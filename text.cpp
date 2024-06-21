#include <iostream>
#include <cstring>
#include "text.h"

void enterText(char *text) {
    printf("Wprowadz tekst: ");
    fgets(text, 80, stdin);

    size_t len = strlen(text);
    if (len > 0 && text[len - 1] == '\n') {
        text[len - 1] = '\0';
    }
}

void printText(const char *text) {
    printf("Wprowadzony tekst: %s\n", text);
}

int textLength(const char *text) {
    int counter = 0;
    while (*(text + counter)) {
        counter++;
    }
    return counter;
}

void toUpperCase(char *text) {
    for (char *ptr = text; *ptr; ++ptr) {
        if (*ptr >= 'a' && *ptr <= 'z') {
            *ptr = *ptr - ('a' - 'A');
        }
    }
    printf("Tekst w wielkich literach: %s\n", text);
}


void toLowerCase(char *text) {
    for (char *ptr = text; *ptr; ++ptr) {
        if (*ptr >= 'A' && *ptr <= 'Z') {
            *ptr = *ptr + ('a' - 'A');
        }
    }
    printf("Tekst w malych literach: %s\n", text);
}

void clear(void) {
    while (getchar() != '\n');
}