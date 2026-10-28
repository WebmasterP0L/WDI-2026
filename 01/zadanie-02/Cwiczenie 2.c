#include <stdio.h>

int main() {
    float liczba;
    printf("Podaj liczbe zmiennoprzecinkowa: ");
    scanf("%f", &liczba);

    printf("Liczbe: %.1f\n", liczba);
    printf("Liczbe: %.3f\n", liczba);
    printf("Liczbe: %.5f\n", liczba);

    return 0;
}

