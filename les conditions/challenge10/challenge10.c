#include <stdio.h>
#include <stdlib.h>

int main()
{
    int jour,mois,annee;

    printf(" saisie la date sous format par ex: 01/09/2023 : ");
    scanf("%d/%d/%d", &jour,&mois,&annee);

    switch (mois){
case 1:
    printf("%d janvier %d",jour,annee);break;
case 2:
    printf("%d fevrier %d",jour,annee);break;
case 3:
    printf("%d mars %d",jour,annee);break;
case 4:
    printf("%d avril %d",jour,annee);break;
case 5:
    printf("%d mail %d",jour,annee);break;
case 6:
    printf("%d juin %d",jour,annee);break;
case 7:
    printf("%d juillet %d", jour,annee);break;
case 8:
    printf("%d aout %d", jour,annee);break;
case 9:
    printf("%d septembre %d", jour,annee);break;
case 10:
    printf("%d octobre %d", jour,annee);break;
case 11:
    printf("%d novembre %d", jour,annee);break;
case 12:
    printf("%d decembre %d", jour,annee);break;

    }

    return 0;
}
