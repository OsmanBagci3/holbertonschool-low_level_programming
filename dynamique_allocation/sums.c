#include <stdio.h>
#include <stdlib.h>

/**
 * main: Sum value of dynamic table
 *
 * Return: 0 if success
 */

int main(void)
{
	int n;
	int *p;
	int a;
	int i;
	int sum = 0;

	printf("Entrez la taille du tableau : ");
	fflush( stdout );
	scanf("%d", &n);

	if (n <= 0)
	{
		printf("taille du tableau invalide : ");
	}

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
		scanf("%d", &*(p + i));
		sum = sum + *(p + i);	
	}
	
	printf("Somme des valeurs : ", sum);

	free(p);

	printf("%d", sum);
	printf("\n");

	p = NULL;

	return (0);
}
