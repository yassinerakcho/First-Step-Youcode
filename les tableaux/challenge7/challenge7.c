#include <stdio.h>

int main() {
    int L, C; // Dimensions du tableau
    int T[50][50]; // Tableau � deux dimensions
    int somme = 0; // Variable pour stocker la somme des �l�ments

    // Demande � l'utilisateur de saisir les dimensions L et C
    printf("Entrez le nombre de lignes (max 50) : ");
    scanf("%d", &L);
    printf("Entrez le nombre de colonnes (max 50) : ");
    scanf("%d", &C);

    // V�rifie que les dimensions sont valides
    if (L <= 0 || L > 50 || C <= 0 || C > 50) {
        printf("Les dimensions entr�es ne sont pas valides.\n");
        return 1; // Quitte le programme avec une erreur
    }

    // Remplit le tableau avec des valeurs entr�es au clavier
    printf("Saisissez les �l�ments du tableau :\n");
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            printf("T[%d][%d] : ", i, j);
            scanf("%d", &T[i][j]);
            somme += T[i][j]; // Ajoute la valeur � la somme
        }
    }

    // Affiche le tableau
    printf("Tableau :\n");
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            printf("%d ", T[i][j]); // Affiche chaque �l�ment avec un espace de 4 caract�res
        }
        printf("\n"); // Passe � la ligne suivante
    }

    // Affiche la somme des �l�ments
    printf("Somme de tous les �l�ments : %d\n", somme);

    return 0;
}
