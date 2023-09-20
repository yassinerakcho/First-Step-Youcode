#include<stdio.h>
#include<stdlib.h>
int main()
{
    int nombre,i,x;
    printf("Donnez un entier:\n");
    scanf("%d",&nombre);
    if(nombre==0 || nombre==1) printf("%d n'est pas premier.\n",nombre);
    else
    {
        x=1;
        for(i=2;i<nombre;i++)
        {
            if(nombre%i==0) {x=0; break; }
        }
        if(x==1) printf("%d est premier.\n",nombre);
        else printf("%d n'est pas premier.\n",nombre);
    }

    return 0;
}
