#include <stdio.h>
#include <stdlib.h>

int main()
{
 int number1,number2;
 char operateur;
 printf("entrer le premiere numbrer : ");
 scanf("%d",&number1);
 printf("entrer un operateur : ");
 scanf(" %C",&operateur);
 printf("entrer le deuxime numbrer : ");
 scanf("%d",&number2);
 switch(operateur){
     case '+': printf("number1 + number2 = %d",number1 + number2);break;
     case '-': printf("number1 - number2 = %d",number1 - number2);break;
     case '*': printf("number1 * number2 = %d",number1* number2);break;
     case '/': printf("number1 / number2 = %d",number1 / number2);break;
     default : printf("veuillez utiliser seulement + ,-,* et /");
 }
return 0;
}
