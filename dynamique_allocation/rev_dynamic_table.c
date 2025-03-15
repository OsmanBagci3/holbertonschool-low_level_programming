#include <stdio.h>
#include <stdlib.h>

/**
 * main: Reverse an array of integer
 *
 * Return: 0 if success
 */

int main(void)
{
	int n;
	int *p;
	int i;
	int temp;

	printf("Entrez la taille du tableau : ");
	fflush( stdout );
	scanf("%d", &n);

	p = (int *)malloc(n * sizeof(int));
	
	if (p == NULL)
	{
		printf("Echec de l'allocation mémoire\n");

		return (1);
	}

	printf("Entrez %d valeurs : ", n);
	fflush (stdout);

	for (i = 0 ; i < n ; i++)
	{
		scanf("%d", &*(p+i));
	}
	

	for (i = 0 ; i < n/2 ; i++)
	{
		temp = p[i];
		p[i] = p[(n-1) - i];
		p[(n - 1) - i] = temp;
	}

	printf("Contenu inversé du tableau : ");

	for (i = 0 ; i < n ; i++)
	{
		printf("%d ", *(p + i));
	}

	printf("\n");

	free(p);

	p = NULL;

	return (0);
}
