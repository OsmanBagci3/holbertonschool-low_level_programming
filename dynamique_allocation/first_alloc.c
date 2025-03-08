#include <stdio.h>
#include <stdlib.h>

/**
 * main: Allocate dynamic table
 *
 * Return: 0 if success
 */

int main(void)
{
	int n;
	int *p;
	int a;
	int i;

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
		scanf("%d", &a);
		*(p + i) = a;
	}
	
	printf("Contenu du tableau : ");

	for (i = 0 ; i < n ; i++)
	{
		printf("%d ", *(p + i));
	}

	printf("\n");

	free(p);

	p = NULL;

	return (0);
}
