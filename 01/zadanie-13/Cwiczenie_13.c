#include <stdio.h>

int main() {
    int a, i;
    float liczba, suma, srednia;

    printf("Podaj ile liczbe: ");
    scanf("%d", &a);

    for (i = 1; i <= a; i++) {
        printf("Podaj liczbe %d: ", i);
        scanf("%f", &liczba);
        suma = suma + liczba;
    }

    srednia = suma / a;

    printf("Suma = %.2f\n", suma);
    printf("Srednia = %.2f\n", srednia);

    return 0;
}
