#include <stdio.h>

int main() {

    char klasa;

    printf("Wybierz klase spoleczna: ");
    scanf(" %c",&klasa);

    switch (klasa) {
        case 'k':
        case 'K':
            printf("Moze rozkazywac Krolowi, ");
        case 'm':
        case 'M':
            printf("Moze rozmawiac z Krolem, ");
        case 'r':
        case 'R':
            printf("Moze wchodzic do zamku codziennie oraz rekrutowac giermkow, ");
        case 'g':
        case 'G':
            printf("Moze wychodzic na dziedziniec zamkowy codziennie, ");
        case 'p':
        case 'P':
            printf("Moze czcic Krola.\n");
            break;
        default:
            printf("Nieprawidlowa klasa.\n");
            break;
    }

    return 0;
}