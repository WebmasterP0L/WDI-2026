#include <stdio.h>
int main() {

    int numer;

    printf("Podaj liczbe: ");
    scanf("%d", &numer);

    if (numer>0 && numer%2==0) {
        printf("Liczba jest jednoczesnie dodatnia i parzysta");

    }else {
        printf("Liczba nie jest dodatnia albo parzysta");
    }

    return 0;
}