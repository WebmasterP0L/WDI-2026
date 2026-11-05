#include <stdio.h>

int potega(int liczba, int wykladnik) {
    if (wykladnik == 0) {
        return 1;
    }
    return liczba * potega(liczba, wykladnik - 1);
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