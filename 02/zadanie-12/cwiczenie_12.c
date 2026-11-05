#include <stdio.h>

int dodawanie() {
    int n, liczba, suma = 0;
    int i;
    printf("Ile liczb: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Podaj liczbe: ");
        scanf("%d", &liczba);
        suma += liczba;
    }
    return suma;
}

int odejmowanie() {
    int start, x = 1;
    printf("Podaj liczbe poczatkowa: ");
    scanf("%d", &start);
    while (x != 0) {
        printf("Podaj liczbe do odjecia: ");
        scanf("%d", &x);
        start -= x;
    }
    return start;
}

int mnozenie(int a, int b) {
    return a * b;
}

float dzielenie(int a, int b) {
    if (b == 0) {
        printf("Nie mozna dzielic przez zero\n");
        return 0;
    }
    return (float)a / b;
}

int potega(int liczba, int wykladnik) {
    int wynik = 1;
    int i;
    for (i = 0; i < wykladnik; i++) {
        wynik *= liczba;
    }
    return wynik;
}

int kwadrat(int a) {
    return a * a;
}

int silnia(int a) {
    int wynik = 1;
    int i;
    for (i = 1; i <= a; i++) {
        wynik *= i;
    }
    return wynik;
}

int main() {
    int wybor = 0;
    int a, b;

    while (wybor != 8) {
        printf("\n1. Dodawanie n liczb\n");
        printf("2. Odejmowanie do zera\n");
        printf("3. Mnozenie\n");
        printf("4. Dzielenie\n");
        printf("5. Potega\n");
        printf("6. Kwadrat\n");
        printf("7. Silnia\n");
        printf("8. Koniec\n");
        printf("Wybierz opcje: ");
        scanf("%d", &wybor);

        switch (wybor) {
            case 1:
                printf("Wynik: %d\n", dodawanie());
                break;
            case 2:
                printf("Wynik: %d\n", odejmowanie());
                break;
            case 3:
                printf("Podaj pierwsza liczbe: ");
                scanf("%d", &a);
                printf("Podaj druga liczbe: ");
                scanf("%d", &b);
                printf("Wynik: %d\n", mnozenie(a, b));
                break;
            case 4:
                printf("Podaj pierwsza liczbe: ");
                scanf("%d", &a);
                printf("Podaj druga liczbe: ");
                scanf("%d", &b);
                if (b != 0) {
                    printf("Wynik: %.2f\n", dzielenie(a, b));
                } else {
                    dzielenie(a, b);
                }
                break;
            case 5:
                printf("Podaj liczbe: ");
                scanf("%d", &a);
                printf("Podaj wykladnik: ");
                scanf("%d", &b);
                printf("Wynik: %d\n", potega(a, b));
                break;
            case 6:
                printf("Podaj liczbe: ");
                scanf("%d", &a);
                printf("Wynik: %d\n", kwadrat(a));
                break;
            case 7:
                printf("Podaj liczbe: ");
                scanf("%d", &a);
                if (a < 0) {
                    printf("Liczba musi byc >= 0\n");
                } else {
                    printf("Wynik: %d\n", silnia(a));
                }
                break;
            case 8:
                printf("Koniec\n");
                break;
            default:
                printf("Zly wybor\n");
                break;
        }
    }

    return 0;
}