#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nombre,inverse,chifre1,chifre2,chifre3;
    printf("entrer un nombre entier de 3 chiffres  :");
    scanf("%d",&nombre);

    chifre1= nombre/100;
    chifre2= (nombre/10)%10;
    chifre3= nombre%10;
    inverse = chifre3*100+ chifre2*10 + chifre1;
    printf("l'inverse des valeurs que vous avez saisie est : %d",inverse);



    return 0;
}
