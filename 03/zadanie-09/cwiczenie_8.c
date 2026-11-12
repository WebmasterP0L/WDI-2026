#include <stdio.h>

void bubble_sort(int tab[], int n) {
    int i, x, temp;

    for (i = 0; i < n - 1; i++) {

        for (x = 0; x < n - 1; x++) {

            if (tab[x] > tab[x + 1]) {

                temp = tab[x];
                tab[x] = tab[x + 1];
                tab[x + 1] = temp;
            }
        }
    }
}

int main() {
    int tab[10];
    int i;

    printf("Podaj 10 liczb: ");

    for (i = 0; i < 10; i++) {
        scanf("%d", &tab[i]);
    }
    bubble_sort(tab, 10);

    printf("Wynik: ");

    for (i = 0; i < 10; i++) {
        printf("%d ", tab[i]);
    }

    return 0;
}