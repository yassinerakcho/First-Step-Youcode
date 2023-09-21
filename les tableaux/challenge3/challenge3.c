#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> // Ajout de l'en-tête pour booléen

int main() {
    // Déclaration des variables
    int T[10];
    int i, n;

    printf("Veuillez entrer la dimension du tableau (max 10) : ");
    scanf("%d", &n);

    if (n > 10 || n < 1) {
        printf("La dimension doit être comprise entre 1 et 10.\n");
        return 1;
    }

    // Remplissage du tableau
    for (i = 0; i < n; i++) {
        printf("Donner l'élément %d : ", i + 1);
        scanf("%d", &T[i]);
    }

    printf("Avant le tri : ");
    for (i = 0; i < n; i++)
        printf("%7d", T[i]);
    printf("\n");

    int echange = 0;
    bool isDone;

    do {
        isDone = true; // Initialisation à vrai avant chaque passage
        for (i = 0; i < n - 1; i++) {
            if (T[i] < T[i + 1]) {
                int temporaire = T[i + 1];
                T[i + 1] = T[i];
                T[i] = temporaire;
                echange++;
                isDone = false; // Il y a eu un échange, donc le tableau n'est pas encore trié
            }
        }
    } while (!isDone);

    printf("Après le tri : ");
    for (i = 0; i < n; i++)
        printf("%7d", T[i]);
    printf("\n");

    return 0;
}