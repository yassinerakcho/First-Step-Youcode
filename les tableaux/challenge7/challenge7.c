#include <stdio.h>

int main() {
    int L, C; // Dimensions du tableau
    int T[50][50]; // Tableau à deux dimensions
    int somme = 0; // Variable pour stocker la somme des éléments

    // Demande à l'utilisateur de saisir les dimensions L et C
    printf("Entrez le nombre de lignes (max 50) : ");
    scanf("%d", &L);
    printf("Entrez le nombre de colonnes (max 50) : ");
    scanf("%d", &C);

    // Vérifie que les dimensions sont valides
    if (L <= 0 || L > 50 || C <= 0 || C > 50) {
        printf("Les dimensions entrées ne sont pas valides.\n");
        return 1; // Quitte le programme avec une erreur
    }

    // Remplit le tableau avec des valeurs entrées au clavier
    printf("Saisissez les éléments du tableau :\n");
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            printf("T[%d][%d] : ", i, j);
            scanf("%d", &T[i][j]);
            somme += T[i][j]; // Ajoute la valeur à la somme
        }
    }

    // Affiche le tableau
    printf("Tableau :\n");
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            printf("%d ", T[i][j]); // Affiche chaque élément avec un espace de 4 caractères
        }
        printf("\n"); // Passe à la ligne suivante
    }

    // Affiche la somme des éléments
    printf("Somme de tous les éléments : %d\n", somme);

    return 0;
}
