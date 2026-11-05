#include <stdio.h>

int main() {

    int miesiac;

    printf("Podaj numer miesiaca od 1-12: ");
    if (scanf("%d", &miesiac) != 1) {
        printf("Podano niepoprawne dane\n");
    }

    switch (miesiac) {
        case 1:
        case 2:
        case 3:
            printf("Kwartal: I");
            break;
        case 4:
        case 5:
        case 6:
            printf("Kwartal: II");
            break;
        case 7:
        case 8:
        case 9:
            printf("Kwartal: III");
            break;
        case 10:
        case 11:
        case 12:
            printf("Kwartal: IV");
            break;
        default:
            printf("Numer miesiaca musi byc w zakresie od 1 do 12\n");
            break;
    }

    return 0;
}