#include <stdio.h>

int main() {
    int nombre,chiffre, inverse=0;

    printf("Entrez un entier : ");
    scanf("%d", &nombre);

    // Inversion des chiffres
    while (nombre != 0) {
        chiffre = nombre % 10;
        inverse = inverse * 10 + chiffre;
        nombre /= 10;
    }

    printf("L'entier inversé est : %d\n", inverse);

    return 0;
}
