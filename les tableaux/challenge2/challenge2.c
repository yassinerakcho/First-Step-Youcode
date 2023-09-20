#include <stdio.h>

int main() {
    int tableau[10];
    int i;
    int plusPetit, plusGrand;


    printf("Veuillez saisir 10 nombres entiers :\n");
    for (i = 0; i < 10; i++) {
        printf("%d : ", i + 1);
        scanf("%d", &tableau[i]);
    }


    plusPetit = tableau[0];
    plusGrand = tableau[0];


    for (i = 1; i < 10; i++) {
        if (tableau[i] < plusPetit) {
            plusPetit = tableau[i];
        }
        if (tableau[i] > plusGrand) {
            plusGrand = tableau[i];
        }
    }

    printf("Tableau : ");
    for (i = 0; i < 10; i++) {
        printf("%d", tableau[i]);


        if (i < 9) {
            printf(", ");
        }
    }

    printf("\nLe plus petit nombre est : %d\n", plusPetit);
    printf("Le plus grand nombre est : %d\n", plusGrand);

    return 0;
}
