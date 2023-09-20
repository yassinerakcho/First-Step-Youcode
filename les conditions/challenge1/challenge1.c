#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nombre;
    printf("donner un nombre : ");
    scanf("%d",&nombre);

    if (nombre %2 == 0){
        printf("le nombre est paire ");
    }else
    printf("le nombre est impaire ");
    return 0;
}
