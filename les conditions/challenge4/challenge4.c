#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,delta,x,x1,x2;
    printf("entrer la valeur de a,b et c ");
    scanf("%f  %f  %f", &a,&b,&c);

    delta = pow(b,2)- 4*a*c;
    if(delta <0){
            printf(" un ensemble vide");
       }else if("delta ==0"){
           x=(-b)/(2*a);
       printf("le solution est: %f ",x);
       }else{
       x1=(-b+sqrt(delta))/2*a;
       x2=(-b-sqrt(delta))/2*a;
       printf("les deux  solution est : %f %f",x1,x2);
}
    return 0;
}
