#include <stdio.h>

#include <math.h>
int main()
{
    int nombre1,nombre2,somme;
    printf("donner le premier nombre : ");
    scanf("%d",&nombre1);

    printf("donner le deuxieme nombre : ");
    scanf("%d",&nombre2);
    somme = nombre1+nombre2;
    if(nombre1==nombre2){
        printf(" Le triple de la somme : %d" ,somme *= 3);
    }else
    printf("la somme est : %d",somme);

    return 0;
}
