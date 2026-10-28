#include <stdio.h>

int main() {
    char imie;
    int wiek;

    printf("Podaj pierwsza litere imienia: ");
    scanf("%c", &imie);

    printf("Podaj wiek: ");
    scanf("%d", &wiek);

    printf("Inicjal: %c, Wiek: %d\n", imie, wiek);

    return 0;
}