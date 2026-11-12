#include <stdio.h>

int ceiling(float i) {
    int calkowita = (int) i;

    if (i > calkowita) {
        return calkowita + 1;
    }
    return calkowita;
}

int floor(float i) {
    int calkowita = (int) i;

    if (i < calkowita) {
        return calkowita - 1;
    }
    return calkowita;
}

int round(float i) {
    if (i >= 0) {
        return (int)(i + 0.5f);
    }else {
        return (int)(i - 0.5f);
    }
}

int main() {
    float i;

    printf("Podaj liczbe: ");
    scanf("%f", &i);

    printf("Sufit: %d\n", ceiling(i));
    printf("Podloga: %d\n", floor(i));
    printf("Zaokraglenie: %d\n", round(i));

    return 0;
}

