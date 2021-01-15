#include <stdio.h>

/* Declaram sirul de numere direct din cod. 
Alternativ el poate fi citit de la tastatura sau din fisier. */

#define N 10
int x[] = { 10, 5, 23, -11, 4, 2, 0, -6, 66, 40 };
int main(void)
{
	/* Folosim doua variabile pentru a stoca minimul si maximul gasite. */
  int min, max;
 	/* Vom contoriza numarul de comparatii 
 	care se fac pentru gasirea minimului si maximului. */
  int comp = 0, i;
	/* Afisam sirul de numere. */ 
	printf("Avem %d numere.\n", N);
	for (i = 0; i < N; i++) 
		printf("%d ", x[i]);

	printf("\n\n");
	/* Initializam minimul si maximul cu prima valoare din sir. */
	min = x[0];
	max = x[0];
	/* Parcurgem intreg sirul si actualizam 
	minimul si maximul atunci cand e cazul. */
	for (i = 1; i < N; i++) 
	{ 
		/* Facem o comparatie pentru minim. */ 
		comp++;
		if (min > x[i])
			min = x[i]; 
		/* Si o comparatie pentru maxim. */ 
		comp++; 
		if (max < x[i])
		 max = x[i];
	}
	/* Afisam rezultatele. */ 
	printf("Minimul este %d.\n", min); 
	printf("Maximul este %d.\n", max);
	printf("Comparatii facute: %d.\n", comp);
	return 0;
 }
