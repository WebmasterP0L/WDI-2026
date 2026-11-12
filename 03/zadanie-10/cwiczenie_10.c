#include <stdio.h>

void merge_sort(int tab[], int i, int q) {
    int t[10];
    int x, y, z, k;

    if (i < q) {
        x = (i + q) / 2;

        merge_sort(tab, i, x);
        merge_sort(tab, x + 1, q);

        y = i;
        z = x + 1;
        k = i;

        while (y <= x && z <= q) {
            if (tab[y] <= tab[z]) {
                t[k] = tab[y];
                y++;
            } else {
                t[k] = tab[z];
                z++;
            }
            k++;
        }

        while (y <= x) {
            t[k] = tab[y];
            y++;
            k++;
        }

        while (z <= q) {
            t[k] = tab[z];
            z++;
            k++;
        }

        for (y = i; y <= q; y++) {
            tab[y] = t[y];
        }
    }
}

int main() {
    int tab[10];
    int i;

    for (i = 0; i < 10; i++) {
        printf("Podaj liczbe: ");
        scanf("%d", &tab[i]);
    }

    merge_sort(tab, 0, 9);

    for (i = 0; i < 10; i++) {
        printf("%d ", tab[i]);
    }

    return 0;
}