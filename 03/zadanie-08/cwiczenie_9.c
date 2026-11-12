#include <stdio.h>

int main() {
    int tab[10];
    int ile = 0;
    int tryb, opcja, x, i;

    printf("Wybierz tryb 1-FIFO lub 2-LIFO: ");
    scanf("%d", &tryb);

    while (1) {
        printf("1 - Dodaj liczbe, 2 - Pobierz liczbe, 0 - Koniec: ");
        scanf("%d", &opcja);

        if (opcja == 0) {
            break;
        }

        if (opcja == 1) {
            if (ile < 10) {
                printf("Podaj liczbe: ");
                scanf("%d", &x);
                tab[ile] = x;
                ile++;
            } else {
                printf("Tablica pelna!\n");
            }
        } else if (opcja == 2) {
            if (ile == 0) {
                printf("Tablica pusta!\n");
            } else {
                if (tryb == 1) {
                    printf("Pobrano: %d\n", tab[0]);

                    for (i = 0; i < ile - 1; i++) {
                        tab[i] = tab[i + 1];
                    }
                    ile--;
                } else if (tryb == 2) {
                    ile--;
                    printf("Pobrano: %d\n", tab[ile]);
                }
            }
        }

        for (i = 0; i < ile; i++) {
            printf("%d ", tab[i]);
        }
        printf("\n");
    }

    return 0;
}