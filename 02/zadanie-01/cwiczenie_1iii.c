#include <stdio.h>

int main() {

    int x;
    int min;
    int max;
    int suma = 0;
    int licznik = 0;
    float srednia;

    while (1) {
        printf("Podaj liczbe: ");
        scanf("%d", &x);

        if (x == 0) {
            break;
        }

        if (licznik == 0) {
            min = x;
            max = x;
        }else {
            if (x<min) min = x;
            if (x>max) max = x;
        }

        suma += x;
        licznik++;

        if (licznik > 0) {
            srednia = (float) suma / licznik;

            printf("Najwieksza: %d", max);
            printf("Najmniejsza: %d", min);
            printf("Suma: %d", suma);
            printf("Srednia: %%.2f", srednia);
        }
    }
    return 0;
}