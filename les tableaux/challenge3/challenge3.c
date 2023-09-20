#include <stdio.h>

void trierTableau(int tableau[], int taille) {
    int temp;
    int i, j;
    for (i = 0; i < taille - 1; i++) {
        for (j = 0; j < taille - i - 1; j++) {
            if (tableau[j] < tableau[j + 1]) {

                temp = tableau[j];
                tableau[j] = tableau[j + 1];
                tableau[j + 1] = temp;
            }
        }
    }
}

int main() {
    int tableau[10];
    int i;


    printf("Veuillez saisir 10 nombres entiers :\n");
    for (i = 0; i < 10; i++) {
        printf("N°%d : ", i + 1);
        scanf("%d", &tableau[i]);
    }


    trierTableau(tableau, 10);


    printf(" le tableau de tri de plus grand au plus petit : ");
    for (i = 0; i < 10; i++) {
        printf("%d", tableau[i]);


        if (i < 9) {
            printf(", ");
        }
    }

    printf("\n");

    return 0;
}
