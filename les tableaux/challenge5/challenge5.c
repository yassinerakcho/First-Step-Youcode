#include <stdio.h>

int main() {
    char nom [50];

    printf("entrer un nom : ");
    scanf("%s",nom);

    int compteur= 0;    // initialisation de la variable compteur

    while(nom[compteur] != '\0'){
        compteur ++;
    }

    printf("le nombre des caracteres dans le nom saisie est : %d ", compteur);

    return 0;
}
