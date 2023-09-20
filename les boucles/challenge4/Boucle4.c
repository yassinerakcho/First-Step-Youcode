#include<stdio.h>

#include<stdlib.h>
int main()
     {

        int som,max,nombre;

        som=0;

        max=0;

        nombre=1;

        printf("Entrez une serie d'entier, pour finir entrez 0.\n");

    while(nombre!=0)

    {

    do{
        scanf("%d",&nombre);

        if(nombre>100) printf("Entrez SVP un entier inferieur ou egal a 100\n");

        }while(nombre>100);

            som+=nombre;

            if(nombre>max) max=nombre;

            }

            printf("la somme: %d\n",som);

            printf("le max: %d\n",max);

            system("pause");

return 0;


}
