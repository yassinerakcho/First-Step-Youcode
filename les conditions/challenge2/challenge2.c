#include <stdio.h>
#include <stdlib.h>

int main()
{
  char caractere;

  printf("ecrire un caractere ");
  scanf(" %c", &caractere);
  switch (caractere){
      case 'a':
      case 'e':
      case 'u':
      case 'i':
      case 'o':
      case 'A':
      case 'E':
      case 'U':
      case 'I':
      case 'O':

        printf(" le caractere est voyelle ");

          break;
          default :
        printf(" le caractere n'est pas voyelle ");
          }
    return 0;
}
