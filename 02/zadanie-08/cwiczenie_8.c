#include <stdio.h>

int max(int a, int b) {
    if (a > b){
        return a;
    }
    return b;
}

int min(int a, int b) {
    if (a < b) {
        return a;
    }
    return b;
}

int main() {
    int a;
    int b;

    printf("Podaj pierwsza liczbe: ");
    scanf("%d", &a);

    printf("Podaj druga liczbe: ");
    scanf("%d", &b);

    printf("Wieksza liczba to: %d\n", max(a, b));
    printf("Mniejsza liczba to: %d\n", min(a, b));

    return 0;
}