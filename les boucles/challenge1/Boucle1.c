#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N1,i;

    do {
        printf("donner un nombre : ");
        scanf("%d",&N1);

    }while (N1<0 || N1>10);

    for(i=0;i<=10;i++){
        printf("%d * %d = %d\n ", N1,i,N1*i);
    }

    return 0;
}
