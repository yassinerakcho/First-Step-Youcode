#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float r,circonference;
    const double pi = 3.14555;
    printf("donner le rayon de la cercle :");
    scanf("%f",&r);
    circonference=2*pi*r;

    printf("la circonference du cercle est : %f ", circonference);


    return 0;
}
