#include <stdio.h>
#include <stdlib.h>

int main()
{
    int annee,jours,mois,heures,minutes,secondes;

    printf("entre l'annee que vous convertir : ");
    scanf("%d",&annee);

    mois = annee*12;
    jours= annee * 365;
    heures=jours *24;
    minutes = heures*60;
    secondes= minutes*60;

    printf("l'annee que vous saisie est equivalent a : \n");
    printf("%d mois \n",mois);
    printf("%d  heures\n",heures);
    printf("%d  minutes \n",minutes);
    printf("%d secondes \n",secondes);

    return 0;
}
