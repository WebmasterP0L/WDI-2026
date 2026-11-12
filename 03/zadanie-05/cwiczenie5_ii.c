#include <stdio.h>

void petla_start(int tab[], int n) {
    int i = 0;
    while (i < n) {
        printf("%d ", tab[i]);
        i++;
    }
    printf("\n");
}

void end(int tab[], int n) {
    int i = n - 1;
    while (i >= 0) {
        printf("%d ", tab[i]);
        i--;
    }
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