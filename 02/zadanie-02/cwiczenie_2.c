#include <stdio.h>

int main() {

    int suma = 0;
    int i;
    int n;

    while (1) {
        suma = 0;
        printf("Podaj liczbe pomiedzy 1 i 100: ");
        scanf("%d", &n);
        if (n > 100 ||  n < 1) {
            printf("Nieprawidlowa liczba");
            break;
        }
            for (i = 1; i <= n; i++){
                suma += i*i;
            }
        printf("Wynik: %d\n", suma);
    }
    return 0;
}