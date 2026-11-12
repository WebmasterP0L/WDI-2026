#include <stdio.h>

float srednia(int tab[], int n) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += tab[i];
    }
    return (double)suma / n;
}

int main() {
    int tab[5];
    int n = 5;

    printf("Podaj 5 liczb calkowitych: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

    double x = srednia(tab, n);
    printf("Srednia: %.2f\n", x);

    printf("Elementy wieksze od sredniej: ");
    for (int i = 0; i < n; i++) {
        if (tab[i] > x) {
            printf("%d ", tab[i]);
        }
    }
    printf("\n");

    return 0;
}