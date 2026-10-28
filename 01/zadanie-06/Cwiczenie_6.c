#include <stdio.h>

int main() {

    int lacznie_sekund;
    int godziny, minuty, sekundy;
    int reszta_sekund;

    printf("Podaj liczbe w sekundach: ");
    scanf("%d", &lacznie_sekund);

    if (lacznie_sekund <0 ) {
        printf("Blad, nalezy podac nieujemna liczba calkowita.\n");
        return 1;
    }

godziny = lacznie_sekund / 3600;
    reszta_sekund = lacznie_sekund % 3600;

    minuty = reszta_sekund / 60;
    sekundy = reszta_sekund % 60;

    printf("Godziny: %d, Minuty: %d, Sekundy: %d\n", godziny, minuty, sekundy);

    return 0;


}