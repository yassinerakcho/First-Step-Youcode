#include <stdio.h>

int PGCD (int x, int y){
int i,p;
for (i=1;i<=x && i<=y;i++){
    if(x%i==0 && y%i ==0){
        p=i;
    }}

return p;

}

int main()
{
    int a,b;
    printf("saisir deux nombre :  ");
    scanf("%d %d",&a,&b);
    printf("le PGCD est : %d ",PGCD(a,b));

    return 0;
}
