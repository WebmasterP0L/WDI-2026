#include <stdio.h>

int tab[10];
int i;

int quick_sort(int lewy, int prawy){
    int i = lewy;
    int j = prawy;
    int srodek = tab[(lewy + prawy) / 2];
    int temp;

    while(i <= j){
        while(tab[i] < srodek){
            i++;
        }
        while(tab[j] > srodek){
            j--;
        }
        if(i <= j){
            temp = tab[i];
            tab[i] = tab[j];
            tab[j] = temp;
            i++;
            j--;
        }
    }

    if(lewy < j){
        quick_sort(lewy, j);
    }
    if(i < prawy){
        quick_sort(i, prawy);
    }

    return 0;
}

int main(){

    printf("Podaj 10 liczb:\n");
    for(i = 0; i < 10; i++){
        scanf("%d", &tab[i]);
    }

    quick_sort(0, 9);

    printf("Posortowane liczby:\n");
    for(i = 0; i < 10; i++){
        printf("%d ", tab[i]);
    }

    return 0;
}