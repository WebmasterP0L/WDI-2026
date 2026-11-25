#include <stdio.h>
#include <string.h>

char zdanie1[100] = "";
char zdanie2[100] = "";
int licznik1[256] = {0};
int licznik2[256] = {0};
int i;
int nieAnagram = 0;

int main(){

    printf("Podaj pierwszy wyraz: ");
    fgets(zdanie1, sizeof(zdanie1), stdin);

    printf("Podaj drugi wyraz: ");
    fgets(zdanie2, sizeof(zdanie2), stdin);

    for(i = 0; zdanie1[i] != '\0'; i++){
        char znak = zdanie1[i];
        licznik1[0] ++;
    }

    for(i = 0; zdanie2[i] != '\0'; i++){
        char znak = zdanie2[i];
        licznik2[0] ++;
    }

    for(i = 0; i < 256; i++){
        if((i >= 'A' && i <= 'Z') || (i >= 'a' && i <= 'z')){
            if(licznik1[i] != licznik2[i]){
                nieAnagram = 1;
            }
        }
    }

    if(nieAnagram == 0){
        printf("Wyrazy sa anagramami\n");
    } else {
        printf("Wyrazy nie sa anagramami\n");
    }

    return 0;
}