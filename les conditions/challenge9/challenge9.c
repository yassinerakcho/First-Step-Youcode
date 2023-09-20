#include <stdio.h>
#include <stdlib.h>

int main()
{
    char caractere;
    printf(" ecrire un caractere :  ");
    scanf(" %c",&caractere);

    if (caractere >= 'a' || caractere >= 'A' && caractere <= 'z' || caractere >='Z'){
        if(caractere >= 'a' && caractere <= 'z'){
                printf("le caractere est miniscule ");
         } else{
                printf(" le caractere est majuscule ");
         }
         } else {
         printf(" n'est pas caractere ");
}
    return 0;
}
