#include <stdio.h>

int main() {
    int L, C; 
    int T[50][50]; 
    int somme = 0; 

   
    printf("Entrez le nombre de lignes (max 50) : ");
    scanf("%d", &L);
    printf("Entrez le nombre de colonnes (max 50) : ");
    scanf("%d", &C);

    
    if (L <= 0 || L > 50 || C <= 0 || C > 50) {
        printf("Les dimensions entr�es ne sont pas valides.\n");
        return 1; 
    }

    
    printf("Saisissez les �l�ments du tableau :\n");
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            printf("T[%d][%d] : ", i, j);
            scanf("%d", &T[i][j]);
            somme += T[i][j]; 
        }
    }

    
    printf("Tableau :\n");
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            printf("%d ", T[i][j]); 
        }
        printf("\n"); 
    }

    
    printf("Somme de tous les �l�ments : %d\n", somme);

    return 0;
}
