#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nombre;
    printf("donner un nombre : ");
    scanf("%d",&nombre);

    if(nombre < 0){
      printf(" le nombre que vous saisie est negative ");
         } else if(nombre == 0){
            printf("le nombre que vous saisie est null ");
            }else
                printf("le nombre que vous saisie est positive ");

    return 0;
}
