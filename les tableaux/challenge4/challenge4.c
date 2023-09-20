#include<stdio.h>

int main() {

    int tSize,s=0;

    printf("Entrer la taille de tableau: ");
    scanf("%d", &tSize);

    float note[tSize], higher[tSize];

    for (int i = 0; i < tSize; i++)
    {
        printf("entrer la note d'etudiant  %d: ", i + 1);
        scanf("%f", &note[i]);
        if (note[i] < 0 || note[i] > 20)
        {
            printf("error");
            return 1;
        }

    }

            for (int y = 0; y < tSize; y++)
            {
                printf("\n%d)_\t%.2f", y + 1, note[y]);
            }
            float sum = 0; float avg = 0;
            for (int u = 0; u < tSize; u++)
            {
                sum += note[u];
                avg = sum / tSize;
            }

            printf("\n la moyenne est : %.2f\n", avg);

            printf("\n--------------------------------------\n");

            for (int y = 0; y < tSize; y++) {
                if (note[y] > avg) {
                    printf("\n%d)_\t%.2f: plus grand que la moyenne!", y + 1, note[y]);
                    higher[y] = note[y];
                    s++;
                } else if (note[y] == avg) {
                    printf("\n%d)_\t%.2f: egale la moyenne!", y + 1, note[y]);
                    higher[y] = '\0';
                } else if (note[y] < avg) {
                    printf("\n%d)_\t%.2f: moins que la moyenne!", y + 1, note[y]);
                    higher[y] = '\0';
                }
            }

            printf("\n\n--------------------------------------\n");

            printf("\n les nombre plus grandes que la moyenne: ");
            for (int o = 0; o < tSize; o++) {
                if (higher[o] != 0) {
                    printf("%.2f ", higher[o]);
                }
            }

            printf("\n\n--------------------------------------\n");

//            int size = sizeof(higher) / sizeof(higher[0]);
            printf("\n il existe %d nombre plus grand que la moyenne!", s);

            printf("\n\n--------------------------------------\n");

            float pluspetit = note[0], plusgrand = 0;
            for (int t = 0; t < tSize; t++)
            {

                if (plusgrand < note[t])
                {
                    plusgrand = note[t];
                } else if (pluspetit > note[t]) {
                    pluspetit = note[t];
                }

            }

            printf("\n le nombre maximum est  : %.2f", plusgrand);
            printf("\n le nombre minimum est  : %.2f\n", pluspetit);

            return(0);
}
