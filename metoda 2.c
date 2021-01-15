#include <stdio.h>
/* Declaram sirul de numere direct din cod. 
Alternativ el poate fi citit de la tastatura sau din fisier. */
#define N 10
int x[] = {10, 5, 23, -11, 4, 2, 0, -6, 66, 40};
/* Numaram cate comparatii se fac in total. */
int comp = 0;
/* Functie care determina minimul si maximul dintr-o secventa a sirului de numere. Secventa este 
delimitata de indicii "st" si "dr". Valorile minime si maxime gasite vor fi returnate prin pointerii 
"min" si "max" primiti ca si parametru. */
void minmax(int st, int dr, int *min, int *max);

int main(void)
{
    int min, max;
    int i;
    /* Afisam sirul de numere. */
    printf("Avem %d numere.\n", N);
    for (i = 0; i < N; i++)
        printf("%d ", x[i]);

    printf("\n\n");
    /* Apelam functia recursiva. */
    minmax(0, N - 1, &min, &max);
    /* Afisam rezultatele. */
    printf("\n");
    printf("Minimul este %d.\n", min);
    printf("Maximul este %d.\n", max);
    printf("Comparatii facute: %d.\n", comp);
    return 0;
}

void minmax(int st, int dr, int *min, int *max)
{
    int mijloc, min_st, max_st, min_dr, max_dr;
    printf("Caut in secventa [%d..%d].\n", st, dr);
    /* Daca secventa contine un singur numar, atunci el este atat minim cat si maxim. */
    if (st == dr)
    {
        *min = x[st];
        *max = x[st];
    }
    else if (st == dr - 1) /* Daca secventa contine doua numere, atunci facem o comparatie pentru a gasi minimul si maximul. */
    {
        comp++;
        if (x[st] < x[dr])
        {
            *min = x[st];
            *max = x[dr];
        }
        else
        {
            *min = x[dr];
            *max = x[st];
        }
    }
    else /* Daca avem mai multe numere, atunci divizam problema in subprobleme. */
    {
        /* Divizare. */
        mijloc = (st + dr) / 2;
        minmax(st, mijloc, &min_st, &max_st);
        minmax(mijloc + 1, dr, &min_dr, &max_dr);
        /* Combinarea rezultatelor partiale. Comparam minimele partiale intre ele si maximele partiale intre ele. */

        comp++;
        if (min_st < min_dr)
            *min = min_st;
        else
            *min = min_dr;

        comp++;
        if (max_st > max_dr)
            *max = max_st;
        else
            *max = max_dr;
    }
}