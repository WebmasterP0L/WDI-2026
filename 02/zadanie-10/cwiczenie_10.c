#include <stdio.h>

int potega(int liczba, int wykladnik){
    int wynik = 1;
    int i;

    for (i = 0; i< wykladnik; i++) {
        wynik *= liczba;
    }
    return wynik;
}

int main() {
    int x;
    int y;

    printf("Podaj liczbe: ");
    scanf("%d", &x);

    printf("Podaj wykladnik: ");
    scanf("%d", &y);

    printf("Wynik: %d", potega(x, y));

    return 0;
}