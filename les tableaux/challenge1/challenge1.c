#include <stdio.h>

int main() {
    int tableau[10];
    int i;


    for (i = 0; i < 10; i++) {
        tableau[i] = i + 1;
    }

    printf("Tableau : ");
    for (i = 0; i < 10; i++) {
        printf("%d", tableau[i]);


        if (i < 9) {
            printf(", ");
        }
    }

    printf("\n");

    return 0;
}
