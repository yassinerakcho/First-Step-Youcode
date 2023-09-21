#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main()
{
//la declaration des variables
    int T[10];
    int i,n;

    printf("veuillez entrer la dimention du tableau : ");
    scanf("%d",&n);

//remplissage

    for(i=0;i<n;i++){
        printf("donner l'element %d :",i+1);
        scanf("%d",&T[i]);
    }
printf("avant le tri :");
    for(i=0;i<n;i++)
        printf("%7d",T[i]);
        printf("\n");

    int echange;

    do {
            echange=0;
        for (i=0;i<n-1;i++){

            if (T[i]<T[i+1]){
                int tomporaire;

                tomporaire= T[i+1];
                T[i+1]=T[i];
                T[i]=tomporaire;
                echange++;

            }
        }
    }while(echange>0);

    printf("apres le tri :");

    for(i=0;i<n;i++)
        printf("%7d",T[i]);
    printf("\n");

    return 0;
}
