#include <stdio.h>

int silnia(int a) {
    int wynik = 1;
    int i;

    for (i = 1; i <= a; i++) {
        wynik *= i;
    }
return wynik;
}

int main() {
    int x;

    printf("Podaj liczbe: ");
    if (scanf("%d", &x) != 1 || x < 0) {
        printf("Podaj poprawna liczbe nieujemna");
    }

printf("Wynik: %d", silnia(x));

    return 0;
}