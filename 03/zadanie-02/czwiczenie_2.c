#include <stdio.h>

int funkcja(int n) {
    if (n == 1) {
        return 1;
    }if (n == 2) {
        return 2;
    }if (n == 3) {
        return 3;
    }
    return funkcja(n - 1) * funkcja(n - 2) - funkcja(n - 3);
}
int main() {
int n;

    printf("Podaj liczbe: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Prosze podac liczbe wieksza niz 1\n");
        return 0;
    }

    printf("Wynik: %d\n", funkcja(n));

    return 0;
}