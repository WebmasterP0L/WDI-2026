#include <stdio.h>

char imie[50] = "";

int main() {

    printf("Podaj swoje imie: ");
    scanf("%s", imie);
    if(imie[0]>= 'a' && imie[0]<= 'z'){
        imie[0] = imie[0] - 32;
    }

    printf("%s", imie);

    return 0;
}