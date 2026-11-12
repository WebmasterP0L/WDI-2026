#include <stdio.h>

float srednia(int tab[], int n) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma = suma + tab[i];
    }
    return (float)suma / n;
}

void wiekszosc_od_sredniej(int tab[], int n, float x) {
    for (int i = 0; i < n; i++) {
        if (tab[i] > x) {
            printf("%d ", tab[i]);
        }
    }
    printf("\n");
}

int najmniejsza(int tab[], int n) {
    int min = tab[0];
    for (int i = 1; i < n; i++) {
        if (tab[i] < min) {
            min = tab[i];
        }
    }
    return min;
}

int najwieksza(int tab[], int n) {
    int max = tab[0];
    for (int i = 1; i < n; i++) {
        if (tab[i] > max) {
            max = tab[i];
        }
    }
    return max;
}

int suma_nieparzystych(int tab[], int n) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        if (tab[i] % 2 != 0) {
            suma = suma + tab[i];
        }
    }
    return suma;
}

void end(int tab[], int n) {
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

int main() {
    int tab[10];
    int n = 10;

    printf("Podaj 10 liczb: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

    float x = srednia(tab, n);
    printf("Srednia: %.2f\n", x);

    printf("Wieksze od sredniej: ");
    wiekszosc_od_sredniej(tab, n, x);

    int min = najmniejsza(tab, n);
    printf("Najmniejsza: %d\n", min);

    int max = najwieksza(tab, n);
    printf("Najwieksza: %d\n", max);

    int nieparzyste = suma_nieparzystych(tab, n);
    printf("Suma nieparzystych: %d\n", nieparzyste);

    printf("Od konca: ");
    end(tab, n);

    return 0;
}