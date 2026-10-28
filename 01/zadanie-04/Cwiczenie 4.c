#include <stdio.h>

int main() {
    int a , b ,c;
    int i, ii, iii, iiii ;

    printf("Podaj trzy liczby: ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    i = a + b + c;
    ii = a - b;
    iii = a + c;
    iiii = c / b;

    printf("Suma trzech: %d\n", i);
    printf("Roznica pierwszych dwoch: %d\n", ii);
    printf("Iloczyn pierwszej i trzeciej: %d\n", iii);
    printf("Iloraz trzeciej i drugiej %d\n", iiii);

    return 0;
}