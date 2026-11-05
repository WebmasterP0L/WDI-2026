#include <stdio.h>
int main() {
    int a;
    int b;
    char i;
    int wybor;

    printf("Podaj pierwszy numer: ");
    scanf("%d", &a);
    printf("Podaj drugi numer: ");
    scanf("%d", &b);
    printf("Podaj znak dzialania (+,-,*,/,%%): ");
    scanf(" %c", &i);

    while (1){
    switch(i) {
        case '+': printf("Wynik: %d\n", a + b); break;
        case '-': printf("Wynik: %d\n", a - b); break;
        case '*': printf("Wynik: %d\n", a * b); break;
        case '%': printf("Wynik: %d\n", a % b); break;
        case '/':
            if (b == 0) {
                printf("Nie mozna dzielic przez zero!!!\n");
                return 0;
            }else {
                printf("Wynik: %.2f\n", (float)a / b);
            }
            break;
    }

            printf("1. Zmien pierwsza liczbe \n");
            printf("2. Zmien druga liczbe \n");
            printf("3. Zmien znak dzialania\n");
            printf("4. Zakoncz program\n");
            printf("Wybierz opcje: ");
            scanf("%d", &wybor);

            if (wybor == 1) {
                printf("Podaj nowa pierwsza liczbe: ");
                scanf("%d", &a);
            } else if (wybor == 2) {
                printf("Podaj nowa druga liczbe: ");
                scanf("%d", &b);
            } else if (wybor == 3) {
                printf("Podaj nowy znak (+, -, *, /, %%): ");
                scanf(" %c", &i);
            } else if (wybor == 4) {
                printf("Koniec programu.\n");
                break;
            }
    }
    return 0;
}