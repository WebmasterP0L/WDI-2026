#include <stdio.h>

int fib(int x) {
    int a = 0;
    int b = 1;
    int c;
    int i;

    if (x == 0) {
        return 0;
    }

    for (i = 2; i <= x; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    return b;
}

int main() {
    int x;

    printf("Podaj numer: ");
    scanf("%d", &x);

    if (x < 0) {
        printf("Liczba musi byc wieksz niz 0\n");
        return 0;
    }

    printf("Wynik: %d\n", fib(x));

    return 0;
}