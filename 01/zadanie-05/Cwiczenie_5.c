#include <stdio.h>

int main() {

    int a, b, c, d, e;

    printf("Podaj piec liczb aby znalesc srednia: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

   float i = (a + b + c + d + e) / 5;

    printf("Wynik: %f", i);

    return 0;
}