#include <stdio.h>

int main() {

    int temp, suma = 0, i, niedostateczne = 0;
    float srednia;

    for(i=1;i<=5;i++) {
        printf("Podaj ocene: ");
        scanf("%d", &temp);

        suma += temp;

        if(temp==1) {
            niedostateczne++;
        }
    }
    srednia = suma / 5.0;

    printf("Srednia ocen: %.2f\n", srednia);
    printf("Liczba ocen niedostatecznych: %d\n", niedostateczne);

    return 0;
}