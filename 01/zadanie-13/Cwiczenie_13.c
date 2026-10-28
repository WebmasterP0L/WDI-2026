#include <stdio.h>

int main() {
    int n, i;
    float liczba, suma = 0, srednia;

    printf("Podaj ile liczbe: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Podaj liczbe %d: ", i);
        scanf("%f", &liczba);
        suma = suma + liczba;
    }

    srednia = suma / n;

    printf("Suma = %.2f\n", suma);
    printf("Srednia = %.2f\n", srednia);

    return 0;
}