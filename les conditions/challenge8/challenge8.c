#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N1,N2,N3,moy;
    printf(" saisie les 3 notes : ");
    scanf("%d %d %d", &N1,&N2,&N3);
    moy= (N1+N2+N3)/3;

    if(moy < 10)
         printf(" la mention est : recale ");
    else if (moy>= 10 && moy <12)
        printf("la mention est : passable");
       else if (moy >=12 && moy <14)
            printf("la mention est : assez bien ");
             else if (moy >=14 && moy <16)
                printf("le mention est : bien");
                  else
                    printf("la mention est tres bien ");

    return 0;
}
