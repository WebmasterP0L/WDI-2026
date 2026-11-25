#include <stdio.h>
#include <ctype.h>


int main() {
    char imie[100];

    printf("Podaj swoje pierwsze imie bez uzycia duzych liter: ");
    scanf("%s", &imie);

    printf("\n");

    imie[0] = toupper(imie[0]);

    printf("%s", imie);
    return 0;
}