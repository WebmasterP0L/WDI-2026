#include <stdio.h>

int main() {
    const unsigned granica = 20U;
    unsigned suma = 0;
    unsigned i;

    for (i = 1; i <= granica; i++) {
        if (i % 3 == 0) {
            suma += i;
        }
    }

    printf("Wynik: %u\n", suma);

    return 0;
}