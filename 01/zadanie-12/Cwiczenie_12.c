#include <stdio.h>

int main() {

    int numer;
    int i;
    int suma = 0;

    printf("Podaj liczbe: ");
    scanf("%d", &numer);

    for(i=1;i<numer;i++) {
        suma+=i;
    }
    printf("Wynik:%d ", suma);

    return 0;
}