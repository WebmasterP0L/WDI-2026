#include <stdio.h>
#include <string.h>

char zdanie[100] = "";
int licznik[256] = {0};
int i;


int main(){

    printf("Napisz jakies zdanie\n");
    fgets(zdanie, sizeof(zdanie), stdin);


    for(i = 0; zdanie[i] != '\0'; i++){
        char znak = zdanie[i];
        licznik[znak] ++;
    }
    for(i = 0; i < 256; i++){
        if(licznik[i] > 0 && ((i >= 'A' && i <= 'Z') || (i >= 'a' && i<= 'z'))){
            printf("%c wystapilo: %d\n", i, licznik[i]);
        }
    }
    return 0;
}