#include <stdio.h>

void petla_start(int tab[], int n) {
    int i = 0;
    do {
        printf("%d ", tab[i]);
        i++;
    } while (i < n);
    printf("\n");
}

void end(int tab[], int n) {
    int i = n - 1;
    do {
        printf("%d ", tab[i]);
        i--;
    } while (i >= 0);
    printf("\n");
}

int main() {
    int tab[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int n = 10;

    printf("Od poczatku: ");
    petla_start(tab, n);

    printf("Od konca: ");
    end(tab, n);

    return 0;
}