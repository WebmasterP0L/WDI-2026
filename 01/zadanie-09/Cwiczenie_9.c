#include <stdio.h>

int main() {
    int a, b;

    printf("Podaj pierwsza liczbe: ", a);
    scanf("%d", &a);
    printf("Podaj druga liczbe: ", b);
    scanf("%d", &b);

    if (b==0) {
        printf("Nie mozna dzielic przez zero!!!");
        return 0;

    } if (a%b==0) {
        printf("Liczba jest podzielna przez druga");

    }else {
        printf("Liczba nie jest podzielna przez druga");
    }

    return 0;
}