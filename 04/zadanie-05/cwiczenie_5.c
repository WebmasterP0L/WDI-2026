#include <stdio.h>
#include <string.h>

char liczby[100] = "";
int i;
int start = 0;
int blad = 0;
int minus = 1;
int suma = 0;

int main(){

    printf("Podaj liczbe: ");
    fgets(liczby, sizeof(liczby), stdin);

    if(liczby[0] == '-'){
        minus = -1;
        start = 1;
    }

    for(i = start; liczby[i] != '\0'; i++){
        if(liczby[i] != '\n'){
            if(liczby[i] >= '0' && liczby[i] <= '9'){
                int cyfra = liczby[i] - '0';
                suma = suma * 10 + cyfra;
            } else {
                blad = 1;
            }
        }
    }

    if(blad == 0){
        suma = suma * minus;
        printf("Twoja liczba to: %d", suma);
    } else {
        printf("To nie jest liczba calkowita");
    }

    return 0;
}