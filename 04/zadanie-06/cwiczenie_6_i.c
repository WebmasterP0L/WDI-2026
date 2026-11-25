#include <stdio.h>
#include <string.h>

char zdanie[100] = "";
int i;
int wybor;

int main(){

    printf("Podaj Zdanie: ");
    fgets(zdanie, sizeof(zdanie), stdin);

    printf("1. Szyfrowanie\n");
    printf("2. Deszyfrowanie\n");
    scanf("%d", &wybor);

    if(wybor == 1){
        for(i = 0; zdanie[i] != '\0'; i++){
            if(zdanie[i] >= 'a' && zdanie[i] <= 'z'){
                zdanie[i] = zdanie[i] + 3;
                if(zdanie[i] > 'z'){
                    zdanie[i] = zdanie[i] - 26;
                }
            }
            if(zdanie[i] >= 'A' && zdanie[i] <= 'Z'){
                zdanie[i] = zdanie[i] + 3;
                if(zdanie[i] > 'Z'){
                    zdanie[i] = zdanie[i] - 26;
                }
            }
        }
        printf("Zaszyfrowany tekst: %s", zdanie);
    }

    if(wybor == 2){
        for(i = 0; zdanie[i] != '\0'; i++){
            if(zdanie[i] >= 'a' && zdanie[i] <= 'z'){
                zdanie[i] = zdanie[i] - 3;
                if(zdanie[i] < 'a'){
                    zdanie[i] = zdanie[i] + 26;
                }
            }
            if(zdanie[i] >= 'A' && zdanie[i] <= 'Z'){
                zdanie[i] = zdanie[i] - 3;
                if(zdanie[i] < 'A'){
                    zdanie[i] = zdanie[i] + 26;
                }
            }
        }
        printf("Odszyfrowany tekst: %s", zdanie);
    }

    return 0;
}