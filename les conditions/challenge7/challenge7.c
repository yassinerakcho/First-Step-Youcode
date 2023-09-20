#include <stdio.h>
#include <stdlib.h>

int main()
{
    char caractere;
    printf("enrer un caractere ");
    scanf(" %c",&caractere);
    if(caractere >= 'A' && caractere <= 'Z'){
        printf(" le caractere que vous saisie est majuscule ");
    }else

        printf(" le caractere que vous saisie n'est pas majuscule ");


    return 0;
}
