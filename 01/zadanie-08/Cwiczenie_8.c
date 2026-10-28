#include <stdio.h>
int main() {
    int a;
    int b;
    char i;

    printf("Podaj pierwszy numer: ");
    scanf("%d", &a);
    printf("Podaj drugi numer: ");
    scanf("%d", &b);
    printf("Podaj znak dzialania (+,-,*,/,%%): ");
    scanf(" %c", &i);

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
    return 0;
}