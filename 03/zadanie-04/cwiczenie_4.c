#include <stdio.h>

int suma_cyfr(int i) {
    if (i == 0) {
        return 0;
    }
    return(i % 10) + suma_cyfr(i / 10);
}

int main() {

    int i;

    printf("Podaj liczbe: ");
    scanf("%d", &i);

    printf("Suma: %d", suma_cyfr(i));

    return 0;
}